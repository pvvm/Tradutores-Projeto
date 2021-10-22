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