#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct pilhaLabel {
    char label[50];
    struct pilhaLabel *prox;
} label;

void pushLabel(struct pilhaLabel**, char *);

void popLabel(struct pilhaLabel**);

#endif