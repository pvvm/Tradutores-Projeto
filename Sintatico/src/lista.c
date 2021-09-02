#include "../lib/lista.h"

/*
    Funcao que procura se a lista ja contem uma declaracao do mesmo simbolo no mesmo escopo
    Argumentos: o elemento atual da lista e o simbolo e escopo do novo elemento a ser adicionado
*/
int procuraLista(struct tabelaSimb** prim, char *simbolo, int escopo) {
    if((*prim) == NULL)
        return 1;
    if(!strcmp((*prim)->simbolo, simbolo) && (*prim)->escopo == escopo)
        return 0;
    return procuraLista(&(*prim)->prox, simbolo, escopo);
}


/*
    Funcao que adiciona o novo simbolo no fim da lista (fica melhor ordenado na hora de imprimir)
    Argumentos: o elemento atual e o simbolo, se eh variavel ou funcao, tipo, valor, escopo, linha e coluna do novo elemento
*/
int push(struct tabelaSimb** ult, char *simbolo, char *varOuFunc, char *tipo, char *valor, int escopo, int linha, int coluna) {
    struct tabelaSimb **aux = ult;
    if(procuraLista(aux, simbolo, escopo)) {
        struct tabelaSimb *aux2 = *ult;
        struct tabelaSimb* novo = (struct tabelaSimb*) malloc (sizeof(struct tabelaSimb));

        strcpy(novo->simbolo, simbolo);
        strcpy(novo->varOuFunc, varOuFunc);
        strcpy(novo->tipo, tipo);
        strcpy(novo->valor, valor);
        novo->numArgs = 0;
        novo->escopo = escopo;
        novo->linha = linha;
        novo->coluna = coluna;
        novo->prox = NULL;

        if(*ult == NULL) {
            *ult = novo;
        } else {
            while(aux2->prox != NULL) {
                aux2 = aux2->prox;
            }

            aux2->prox = novo;
        }
        return 0;
    } else {        // Caso o simbolo ja tenha sido declarado
        printf("Erro: simbolo ja declarado nesse escopo\nLinha:%d\nColuna:%d\n\n", linha, coluna);
        return 1;
    }
}

/*
    Funcao que imprime a tabela de simbolos
    Argumentos: o primeiro elemento da tabela
*/
void printaLista(struct tabelaSimb *prim) {
    printf("\tSimbolo\t    Var ou Func\t\t   Tipo\t  Num Arguments\t\t Escopo\t\t Linha\t         Coluna\n\n");
    while(prim != NULL) {
        printf("%15s\t%15s\t%15s\t%15d\t%15d\t%15d\t%15d\n", prim->simbolo, prim->varOuFunc, prim->tipo, prim->numArgs, prim->escopo, prim->linha, prim->coluna);
        prim = prim->prox;
    }
}

/*
    Funcao que insere o numero de argumentos que uma funcao ja listada na tabela de simbolos possui
    Argumentos: o primeiro elemento da tabela, o simbolo e escopo que identificam o elemento e o numero de argumentos
*/
void insereArg(struct tabelaSimb **prim, char *simb, int escopo, int numArgs) {
    if(prim == NULL)
        return;
    struct tabelaSimb *aux = *prim;
    while(aux != NULL) {
        if(!(strcmp(aux->simbolo, simb)) && aux->escopo == escopo) {
            aux->numArgs = numArgs;
            break;
        }
        aux = aux->prox;
    }
}

/*
    Desaloca a memoria utilizada pela tabela de simbolos
    Argumentos: o elemento atual da lista
*/
int liberaLista(struct tabelaSimb *prim) {
    if(prim == NULL) {
        return 1;
    }
    struct tabelaSimb * aux = prim->prox;
    free(prim);
    return liberaLista(aux);
}

// Operacoes da lista para o escopo


/*
    Adiciona o novo escopo ao fim da lista
    Argumentos: o primeiro elemento da lista e o escopo a ser adicionado
*/
void pushEsc(struct listaEscopo** prim, int escopo_atual) {
    struct listaEscopo *aux = *prim;
    struct listaEscopo* novo = (struct listaEscopo*) malloc (sizeof(struct listaEscopo));

    novo->escopo = escopo_atual;
    novo->prox = NULL;

    if(*prim == NULL) {
        *prim = novo;
    } else {
        while(aux->prox != NULL) {
            if(aux->escopo == escopo_atual){
                free(novo);
                //printf("Escopo ja existente");
                return;
            }
            aux = aux->prox;
        }
        aux->prox = novo;
    }
}

/*
    Retira o ultimo elemento da lista
    Argumentos: o primeiro elemento da lista
*/
int popEsc(struct listaEscopo** ult) {
    if((*ult) == NULL)
        return 0;
    else if((*ult)->prox == NULL) {
        int escopo = (*ult)->escopo;
        free(*ult);
        *ult = NULL;
        return escopo;
    }

    struct listaEscopo *aux = *ult;

    while(aux->prox->prox != NULL) {
        aux = aux->prox;
    }
    int escopo = aux->prox->escopo;
    free(aux->prox);
    aux->prox = NULL;
    return escopo;
}


/*
    Desaloca a memoria utilizada na lista de escopos
    Argumentos: elemento atual da lista
*/
int liberaEsc(struct listaEscopo *prim) {
    if(prim == NULL) {
        return 1;
    }
    struct listaEscopo * aux = prim->prox;
    free(prim);
    return liberaEsc(aux);
}

/*
    Funcao que imprime os elementos da lista de escopos
    Argumentos: o elemento atual da lista
*/
void printaEsc(struct listaEscopo *prim) {
    while(prim != NULL) {
        printf("%d\n", prim->escopo);
        prim = prim->prox;
    }
    printf("\n");
}