#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct pilhaLabel {
    char label[50];
    struct pilhaLabel *prox;
} label;

typedef struct pilhaIncremento {
    char incremento[200];
    struct pilhaIncremento *prox;
} incremento;

void pushLabel(struct pilhaLabel**, char *);

void popLabel(struct pilhaLabel**);

void pushIncremento(struct pilhaIncremento**, char *);

void popIncremento(struct pilhaIncremento**);

#endif