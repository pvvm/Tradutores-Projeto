#ifndef GERCOD_H
#define GERCOD_H

#include "../lib/lista.h"
#include "../lib/arvore.h"
#include "../lib/pilha.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void inicioDefault(int, FILE *, char *);

void geraOperacoes(char *, char *, char *, int *, FILE *, struct No*, int, char *, int, int *, int *, int *);

void geraCasting(char *, char *, int *, FILE*, struct No*, int, char *);

void mandaLabel(int *, int, char *, FILE *, struct pilhaLabel**, int *);

void escreveTable(FILE *, struct tabelaSimb *, int);

void uneArquivos(FILE *, FILE *, FILE *);

#endif