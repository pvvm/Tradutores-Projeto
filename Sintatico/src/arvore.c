#include "../lib/arvore.h"

int troca_escopo = -1;
int profund = 0;

/*
    Funcao que aloca o novo no
    Argumentos: o nome do no
*/
struct No* novoNo(char *nome) {
    struct No* no = (struct No*) malloc (sizeof(struct No));

    strcpy(no->nome, nome);
    no->escopo = 0;
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

    desalocar(no->no1);
    desalocar(no->no2);
    desalocar(no->no3);

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
*/
int printaArvore(struct No* no) {
    if(no == NULL)
        return --profund;

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
    
    printf("| %s\n", no->nome);

    ++profund;
    profund = printaArvore(no->no1);
    ++profund;
    profund = printaArvore(no->no2);
    ++profund;
    profund = printaArvore(no->no3);

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
    Argumentos: o nome do no e os filhos
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