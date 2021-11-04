#include "../lib/pilha.h"

/*
    Metodo que empilha uma nova label
    Argumentos: o topo da pilha e a nova label
*/
void pushLabel(struct pilhaLabel** pilha, char *novo_label) {
    struct pilhaLabel *novo = (struct pilhaLabel*) malloc (sizeof(struct pilhaLabel));

    strcpy(novo->label, novo_label);
    novo->prox = *pilha;
    *pilha = novo;
}

/*
    Metodo que desempilha a label
    Argumentos: o topo da pilha
*/
void popLabel(struct pilhaLabel** pilha) {
    struct pilhaLabel* topo = *pilha;
    *pilha = (*pilha)->prox;
    free(topo);
}

/*
    Metodo que empilha as instrucoes de incremento do for
    Argumentos: o topo da pilha e a string de incremento
*/
void pushIncremento(struct pilhaIncremento** pilha, char *novo_incremento) {
    struct pilhaIncremento *novo = (struct pilhaIncremento*) malloc (sizeof(struct pilhaIncremento));

    strcpy(novo->incremento, novo_incremento);
    novo->prox = *pilha;
    *pilha = novo;
}


/*
    Metodo que desempilha as instrucoes de incremento do for
    Argumentos: o topo da pilha
*/
void popIncremento(struct pilhaIncremento** pilha) {
    struct pilhaIncremento* topo = *pilha;
    *pilha = (*pilha)->prox;
    free(topo);
}