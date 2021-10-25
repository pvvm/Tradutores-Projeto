#include "../lib/lista.h"

struct tabelaSimb* aux_ts =  NULL;

/*
    Funcao que procura se a lista ja contem uma declaracao do mesmo simbolo no mesmo escopo
    Argumentos: o elemento atual da lista e o simbolo e escopo do novo elemento a ser adicionado
    Retorno: 1 se nao encontrar uma entrada de mesmo simbolo e escopo, se sim 0
*/
int procuraLista(struct tabelaSimb** prim, char *simbolo, int escopo) {
    if((*prim) == NULL)
        return 1;
    if(!strcmp((*prim)->simbolo, simbolo) && (*prim)->escopo == escopo)
        return 0;
    return procuraLista(&(*prim)->prox, simbolo, escopo);
}

/*
    Funcao que adiciona o novo simbolo no fim da lista (fica melhor ordenado na hora de imprimir)
    Argumentos: o elemento atual e o simbolo, se eh variavel, funcao ou constante, tipo, valor, escopo, linha e coluna do novo elemento
    Retorno: 0 se foi adicionado o simbolo na tabela e 1 se nao
*/
int push(struct tabelaSimb** ult, char *simbolo, char *varOuFunc, char *tipo, char *valor, int escopo, int linha, int coluna, char *var_temp) {
    struct tabelaSimb **aux = ult;
    if(procuraLista(aux, simbolo, escopo)) {
        struct tabelaSimb *aux2 = *ult;
        struct tabelaSimb* novo = (struct tabelaSimb*) malloc (sizeof(struct tabelaSimb));

        strcpy(novo->simbolo, simbolo);
        strcpy(novo->varOuFunc, varOuFunc);
        strcpy(novo->tipo, tipo);
        strcpy(novo->valor, valor);
        novo->numArgs = 0;
        novo->escopo = escopo;
        novo->linha = linha;
        novo->coluna = coluna;
        novo->tipoArgs = NULL;
        novo->prox = NULL;
        strcpy(novo->var_temp, var_temp);

        if(*ult == NULL) {
            *ult = novo;
        } else {
            while(aux2->prox != NULL) {
                aux2 = aux2->prox;
            }

            aux2->prox = novo;
        }
        return 0;
    } else {        // Caso o simbolo ja tenha sido declarado
        printf("ERRO SEMANTICO: simbolo %s ja declarado nesse escopo\nLinha:%d\nColuna:%d\n\n", simbolo, linha, coluna);
        return 1;
    }
}

void printaArgs(struct listaArgs *prim) {
    while(prim != NULL) {
        printf("%s\n", prim->tipo);
        prim = prim->prox;
    }
    printf("\n");
}

/*
    Funcao que imprime a tabela de simbolos
    Argumentos: o primeiro elemento da tabela
*/
void printaLista(struct tabelaSimb *prim) {
    printf("\t\t\t\t\t    Simbolo\t Var/Func/Const\t\t   Tipo\t       Num Args\t\t Escopo\t\t  Linha\t         Coluna\n\n");
    while(prim != NULL) {
        printf("%51s\t%15s\t%15s\t%15d\t%15d\t%15d\t%15d\t%15s\n", prim->simbolo, prim->varOuFunc, prim->tipo, prim->numArgs, prim->escopo, prim->linha, prim->coluna, prim->var_temp);
        /*if(prim->tipoArgs != NULL) {
            printaArgs(prim->tipoArgs);
        }*/
        prim = prim->prox;
    }
}

/*
    Funcao que insere o numero de argumentos de uma funcao ja listada na tabela de simbolos
    Argumentos: o primeiro elemento da tabela, o simbolo e escopo que identificam o elemento e o numero de argumentos
*/
void insereArg(struct tabelaSimb **prim, char *simb, int escopo, int numArgs, struct listaArgs **lista) {
    if(prim == NULL)
        return;
    struct tabelaSimb *aux = *prim;
    while(aux != NULL) {
        if(!(strcmp(aux->simbolo, simb)) && aux->escopo == escopo) {
            aux->numArgs = numArgs;
            aux->tipoArgs = *lista;
            break;
        }
        aux = aux->prox;
    }
}

/*
    Funcao que retorna a entrada da tabela que tem o simbolo e o escopo atual
    Argumentos: o primeiro elemento da tabela, o simbolo e o primeio elemento da lista de escopo
    Retorno: a entrada da tabela
*/
struct tabelaSimb* retSimb(struct tabelaSimb ** prim, char *simbolo, struct listaEscopo ** cabecaEsc){
    if((*prim) == NULL) {
        struct tabelaSimb* aux = aux_ts;
        aux_ts = NULL;
        //printf("Erro: %s nao foi declarado na tabela de simbolos\n\n", simbolo);
        return aux;
    }
    if(!(strcmp(simbolo, (*prim)->simbolo)) && buscaEscopo(cabecaEsc, (*prim)->escopo)) {
        aux_ts = *prim;
    }

    return retSimb(&(*prim)->prox, simbolo, cabecaEsc);
}

struct listaArgs* pushArgs(struct listaArgs** prim, char *tipo, char *var_temp) {
    struct listaArgs *aux = *prim;
    struct listaArgs* novo = (struct listaArgs*) malloc (sizeof(struct listaArgs));

    strcpy(novo->tipo, tipo);
    strcpy(novo->var_temp, var_temp);
    novo->prox = NULL;

    if(*prim == NULL) {
        *prim = novo;
    } else {
        while(aux->prox != NULL)
            aux = aux->prox;
        aux->prox = novo;
    }
    return *prim;
}

int liberaArgs(struct listaArgs *prim) {
    if(prim == NULL) {
        return 1;
    }
    struct listaArgs * aux = prim->prox;
    free(prim);
    return liberaArgs(aux);
}

/*
    Desaloca a memoria utilizada pela tabela de simbolos
    Argumentos: o elemento atual da lista
    Retorno: 1 caso tenha sido liberado tudo
*/
int liberaLista(struct tabelaSimb *prim) {
    if(prim == NULL) {
        return 1;
    }
    struct tabelaSimb * aux = prim->prox;
    liberaArgs(prim->tipoArgs);
    free(prim);
    return liberaLista(aux);
}


// Operacoes da lista para o escopo


/*
    Adiciona o novo escopo ao fim da lista
    Argumentos: o primeiro elemento da lista e o escopo a ser adicionado
*/
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

/*
    Retira o ultimo elemento da lista
    Argumentos: o primeiro elemento da lista
    Retorno: o escopo retirado
*/
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


/*
    Desaloca a memoria utilizada na lista de escopos
    Argumentos: elemento atual da lista
    Retorno: 1 caso tenha sido liberado tudo
*/
int liberaEsc(struct listaEscopo *prim) {
    if(prim == NULL) {
        return 1;
    }
    struct listaEscopo * aux = prim->prox;
    free(prim);
    return liberaEsc(aux);
}

/*
    Funcao que imprime os elementos da lista de escopos
    Argumentos: o elemento atual da lista
*/
void printaEsc(struct listaEscopo *prim) {
    while(prim != NULL) {
        printf("%d\n", prim->escopo);
        prim = prim->prox;
    }
    printf("\n");
}

/*
    Funcao que retorna o escopo do fim da lista (o atual)
    Argumentos: primeiro elemento da lista de escopo
*/
int retUlt(struct listaEscopo** ult) {
    if((*ult) == NULL)
        return 0;
    else if((*ult)->prox == NULL) {
        return (*ult)->escopo;
    }
    
    struct listaEscopo *aux = *ult;

    while(aux->prox->prox != NULL) {
        aux = aux->prox;
    }
    return aux->prox->escopo;
}

/*
    Funcao que busca se o escopo existe na lista
    Argumentos: primeiro elemento da lista de escopo e o escopo procurado
    Retorno: 1 se encontrou o escopo, caso nao, 0
*/
int buscaEscopo(struct listaEscopo** elemento, int escopo) {
    if((*elemento) == NULL)
        return 0;
    else if((*elemento)->prox == NULL && escopo == (*elemento)->escopo) {
        return 1;
    }
    
    struct listaEscopo *aux = *elemento;

    while(aux->prox->prox != NULL) {
        if(aux->escopo == escopo)
            return 1;
        aux = aux->prox;
    }
    if(aux->prox->escopo == escopo || aux->escopo == escopo)
            return 1;
    return 0;
}