#include "../lib/arvore.h"

int troca_escopo = -1;  // Inteiro que guarda o maior escopo atual
int profund = 0;        // Inteiro que guarda a profundidade da arvore

/*
    Funcao que aloca o novo no
    Argumentos: o nome do no
    Retorno: um ponteiro para o novo no
*/
struct No* novoNo(char *nome) {
    struct No* no = (struct No*) malloc (sizeof(struct No));

    strcpy(no->nome, nome);
    no->escopo = 0;
    strcpy(no->tipo, "");
    strcpy(no->valor_temp, "");
    no->no1 = NULL;
    no->no2 = NULL;
    no->no3 = NULL;
    no->lista = NULL;
    no->simbolo = NULL;

    return no;
}

/*
    Funcao que desaloca a arvore
    Argumentos: o no utilizado no momento
*/
void desalocar(struct No* no) {

    if(no == NULL)
        return;

    // Responsavel por desalocar os nos filhos
    desalocar(no->no1);
    desalocar(no->no2);
    desalocar(no->no3);

    // Responsavel por desalocar a lista de nos
    struct listaNo* aux = no->lista;
    struct listaNo* aux2;
    while(aux != NULL) {
        desalocar(aux->no);
        aux2 = aux;
        aux = aux->prox;
        free(aux2);
    }

    free(no);
}


/*
    Funcao que imprime a arvore (pre-ordem)
    Argumentos: o no utilizado no momento e a profundidade do no
    Retorno: o inteiro para a profundidade atual da arvore
*/
int printaArvore(struct No* no) {
    if(no == NULL)
        return --profund;

    // Responsavel por imprimir o escopo caso ele mude
    if(no->escopo > troca_escopo) {
        for(int i = 0; i < profund; i++)
            printf("    ");
        troca_escopo = no->escopo;
        printf("---------- ESCOPO %d ----------\n", troca_escopo);
    }

    for(int i = 0; i < profund; i++)
        printf("    ");
    /*if(no->simbolo != NULL)
        printf("%s escopo %d ", no->simbolo->simbolo, no->simbolo->escopo);*/

    //printf("%s", no->tipo);
    
    if(strcmp(no->tipo, ""))
        printf("| %s\t\t\t\t<%s>\n", no->nome, no->tipo);
    else
        printf("| %s\n", no->nome);

    // Responsavel por imprimir o nos filhos
    ++profund;
    profund = printaArvore(no->no1);
    ++profund;
    profund = printaArvore(no->no2);
    ++profund;
    profund = printaArvore(no->no3);

    // Responsavel por imprimir a lista de nos, caso exista
    struct listaNo* aux = no->lista;
    while(aux != NULL) {
        ++profund;
        profund = printaArvore(aux->no);
        aux = aux->prox;
    }

    return --profund;
}

/*
    Funcao que auxilia na criacao de um novo no
    Argumentos: o nome do no, ponteiros para os filhos e a lista de nos, escopo e ponteiro para a tabela de simbolos
    Retorna: ponteiro para o novo no
*/
struct No* montaNo(char *nome, struct No *no_1, struct No *no_2, struct No *no_3, struct listaNo *lista, int escopo, struct tabelaSimb *simbolo) {
    struct No* no = novoNo(nome);       // Cria o no
    no->escopo = escopo;
    no->no1 = no_1;                     // Conecta com os filhos
    no->no2 = no_2;
    no->no3 = no_3;
    no->lista = lista;
    no->simbolo = simbolo;
    return no;
}

struct No* castNo(char* lexema, struct No* esqNo, struct No* dirNo, int escopo, int linha, int coluna, int* num_erros_semanticos) {
    // Checa se eh == ou !=, visto que eh possivel fazer operacao entre listas e NIL
    if(!strcmp(lexema, "==") || !strcmp(lexema, "!=")) {
        struct No* no;
        if((!strcmp(esqNo->tipo, "NIL") && !strcmp(dirNo->tipo, "int list")) || ((!strcmp(esqNo->tipo, "NIL") && !strcmp(dirNo->tipo, "float list")))) {
            no = montaNo(lexema, esqNo, dirNo, NULL, NULL, escopo, NULL);
            strcpy(no->tipo, "int");
            return no;
        } else if((!strcmp(dirNo->tipo, "NIL") && !strcmp(esqNo->tipo, "int list")) || ((!strcmp(dirNo->tipo, "NIL") && !strcmp(esqNo->tipo, "float list")))) {
            no = montaNo(lexema, esqNo, dirNo, NULL, NULL, escopo, NULL);
            strcpy(no->tipo, "int");
            return no;
        }
    }
    if((!strcmp(esqNo->tipo, "int") || !strcmp(esqNo->tipo, "float")) && ((!strcmp(dirNo->tipo, "int") || !strcmp(dirNo->tipo, "float")))) {
        struct No* no;
        // Checa se sao tipos iguais
        if(!strcmp(esqNo->tipo, dirNo->tipo)) {
            no = montaNo(lexema, esqNo, dirNo, NULL, NULL, escopo, NULL);
            // Operacoes logicas e relacionais sempre retornam tipo inteiro
            // Comentado, porque aparentemente o TAC considera que o resultado entre floats tambem eh float
            //if(!strcmp(lexema, "==") || !strcmp(lexema, "!=") || !strcmp(lexema, "&&") || !strcmp(lexema, "||") || !strcmp(lexema, ">=") || !strcmp(lexema, "<=") || !strcmp(lexema, "<") || !strcmp(lexema, ">"))
            //    strcpy(no->tipo, "int");
            //else
            strcpy(no->tipo, esqNo->tipo);
            return no;
        }
        else {
            if(!strcmp(esqNo->tipo, "int")) {
                no = montaNo(lexema, NULL, dirNo, NULL, NULL, escopo, NULL);
                no->no1 = montaNo("(int_to_float)", esqNo, NULL, NULL, NULL, escopo, NULL);
            } else if(!strcmp(dirNo->tipo, "int")) {
                no = montaNo(lexema, esqNo, NULL, NULL, NULL, escopo, NULL);
                no->no2 = montaNo("(int_to_float)", dirNo, NULL, NULL, NULL, escopo, NULL);
            }
            //if(!strcmp(lexema, "==") || !strcmp(lexema, "!=") || !strcmp(lexema, "&&") || !strcmp(lexema, "||") || !strcmp(lexema, ">=") || !strcmp(lexema, "<=") || !strcmp(lexema, "<") || !strcmp(lexema, ">"))
            //    strcpy(no->tipo, "int");
            //else
            strcpy(no->tipo, "float");
            return no;
        }
    } else {
        //printf("%s e %s\n", esqNo->tipo, dirNo->tipo);
        printf("ERRO SEMANTICO: tipo errado na operacao %s (%s, %s)\nLinha:%d\nColuna:%d\n\n", lexema, esqNo->tipo, dirNo->tipo, linha, coluna);
        struct No* no = montaNo(lexema, esqNo, dirNo, NULL, NULL, escopo, NULL);
        strcpy(no->tipo, "undefined");
        ++(*num_erros_semanticos);
        return no;
    }
}


/*
    Funcao que auxilia adiciona um novo no filho a lista
    Argumentos: a lista que contem os nos e o no filho
    Retorna: ponteiro para a lista
*/
struct listaNo* novaListaNo(struct listaNo** pai, struct No* filho) {
    struct listaNo* aux = *pai;
    struct listaNo* elem = (struct listaNo*) malloc (sizeof(struct listaNo));

    elem->no = filho;
    elem->prox = NULL;

    if(*pai == NULL) {
        *pai = elem;
        return *pai;
    }

    while(aux->prox != NULL)
        aux = aux->prox;
    aux->prox = elem;

    return *pai;
}