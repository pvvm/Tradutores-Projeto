#ifndef GERCOD_H
#define GERCOD_H

#include "../lib/lista.h"
#include "../lib/arvore.h"
#include "../lib/pilha.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void inicioDefault(int, FILE *, char *);

void geraOperacoes(char *, char *, char *, int *, FILE *, struct No*);

void geraCasting(char *, char *, int *, FILE*, struct No*);

void mandaLabel(int *, int, char *, FILE *, struct pilhaLabel**);

#endif