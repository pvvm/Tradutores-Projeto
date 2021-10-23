#include "../lib/pilha.h"

void pushLabel(struct pilhaLabel** pilha, char *novo_label) {
    struct pilhaLabel *novo = (struct pilhaLabel*) malloc (sizeof(struct pilhaLabel));

    strcpy(novo->label, novo_label);
    novo->prox = *pilha;
    *pilha = novo;
}

void popLabel(struct pilhaLabel** pilha) {
    struct pilhaLabel* topo = *pilha;
    *pilha = (*pilha)->prox;
    free(topo);
}

void pushIncremento(struct pilhaIncremento** pilha, char *novo_incremento) {
    struct pilhaIncremento *novo = (struct pilhaIncremento*) malloc (sizeof(struct pilhaIncremento));

    strcpy(novo->incremento, novo_incremento);
    novo->prox = *pilha;
    *pilha = novo;
}

void popIncremento(struct pilhaIncremento** pilha) {
    struct pilhaIncremento* topo = *pilha;
    *pilha = (*pilha)->prox;
    free(topo);
}