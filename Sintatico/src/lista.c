#include "../lib/lista.h"

int procuraLista(struct tabelaSimb** prim, char *simbolo, int escopo) {
    if((*prim) == NULL)
        return 1;
    if(!strcmp((*prim)->simbolo, simbolo) && (*prim)->escopo == escopo)
        return 0;
    return procuraLista(&(*prim)->prox, simbolo, escopo);
}

void push(struct tabelaSimb** ult, char *simbolo, char *varOuFunc, char *tipo, char *valor, int escopo, int linha, int coluna) {
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
    } else
        printf("Simbolo ja declarado na tabela nesse escopo\n");
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