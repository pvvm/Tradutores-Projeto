#include "../lib/lista.h"

int procuraLista(struct tabelaSimb** prim, char *simbolo, int escopo) {
    if((*prim) == NULL)
        return 1;
    if(!strcmp((*prim)->simbolo, simbolo) && (*prim)->escopo == escopo)
        return 0;
    return procuraLista(&(*prim)->prox, simbolo, escopo);
}

void push(struct tabelaSimb** prim, char *simbolo, int varOuFunc, char *tipo, char *valor, int escopo, int escopoPai) {
    struct tabelaSimb **aux = prim;
    if(procuraLista(aux, simbolo, escopo)) {
        struct tabelaSimb* novo = (struct tabelaSimb*) malloc (sizeof(struct tabelaSimb));

        strcpy(novo->simbolo, simbolo);
        novo->varOuFunc = varOuFunc;
        strcpy(novo->tipo, tipo);
        strcpy(novo->valor, valor);
        novo->escopo = escopo;
        novo->escopoPai = escopoPai;
        
        novo->prox = *prim;
        *prim = novo;
    } else
        printf("Simbolo ja declarado na tabela nesse escopo\n");
}

void printaLista(struct tabelaSimb *prim) {
    while(prim != NULL) {
        printf("%s\t%d\t%s\t%s\t%d\n", prim->simbolo, prim->varOuFunc, prim->tipo, prim->valor, prim->escopo);
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