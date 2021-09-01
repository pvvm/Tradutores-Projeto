#include "../lib/lista.h"

int procuraLista(struct tabelaSimb** prim, char *simbolo, int escopo) {
    if((*prim) == NULL)
        return 1;
    if(!strcmp((*prim)->simbolo, simbolo) && (*prim)->escopo == escopo)
        return 0;
    return procuraLista(&(*prim)->prox, simbolo, escopo);
}

int push(struct tabelaSimb** ult, char *simbolo, char *varOuFunc, char *tipo, char *valor, int escopo, int linha, int coluna) {
    struct tabelaSimb **aux = ult;
    if(procuraLista(aux, simbolo, escopo)) {
        struct tabelaSimb *aux2 = *ult;
        struct tabelaSimb* novo = (struct tabelaSimb*) malloc (sizeof(struct tabelaSimb));

        strcpy(novo->simbolo, simbolo);
        strcpy(novo->varOuFunc, varOuFunc);
        strcpy(novo->tipo, tipo);
        strcpy(novo->valor, valor);
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
    } else {
        printf("Erro: simbolo ja declarado nesse escopo\nLinha:%d\nColuna:%d\n\n", linha, coluna);
        return 1;
    }
}

void printaLista(struct tabelaSimb *prim) {
    printf("\tSimbolo\t    Var ou Func\t\t   Tipo\t\t Escopo\t\t  Linha\t         Coluna\n\n");
    while(prim != NULL) {
        printf("%15s\t%15s\t%15s\t%15d\t%15d\t%15d\n", prim->simbolo, prim->varOuFunc, prim->tipo, prim->escopo, prim->linha, prim->coluna);
        prim = prim->prox;
    }
}

int liberaLista(struct tabelaSimb *prim) {
    if(prim == NULL) {
        return 1;
    }
    struct tabelaSimb * aux = prim->prox;
    free(prim);
    return liberaLista(aux);
}

// Operacoes da lista para o escopo

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

int liberaEsc(struct listaEscopo *prim) {
    if(prim == NULL) {
        return 1;
    }
    struct listaEscopo * aux = prim->prox;
    free(prim);
    return liberaEsc(aux);
}

void printaEsc(struct listaEscopo *prim) {
    while(prim != NULL) {
        printf("%d\n", prim->escopo);
        prim = prim->prox;
    }
    printf("\n");
}