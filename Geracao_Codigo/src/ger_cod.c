#include "../lib/ger_cod.h"

void inicioDefault(int ger_codigo_var, FILE* escrita, char *tipo) {
    char aux_str[200];
    char aux_num[10];
    char temp[11];
    sprintf(aux_num, "%d", ger_codigo_var);
    strcpy(temp, "$");
    strcat(temp, aux_num);
    strcpy(aux_str, "mov ");
    strcat(aux_str, temp);
    if(!strcmp(tipo, "int"))
        strcat(aux_str, ", 0\n");
    else if(!strcmp(tipo, "float"))
        strcat(aux_str, ", 0.0\n");
    else
        strcat(aux_str, ", MUDAR AQUI\n");
    
    fputs(aux_str, escrita);
}

void geraOperacoes(char *operador, char *operando1, char *operando2, int *ger_codigo_var, FILE* escrita, struct No* no) {
    char aux_str[200];
    char aux_num[10];
    char temp[11];
    sprintf(aux_num, "%d", *ger_codigo_var);
    strcpy(temp, "$");
    strcat(temp, aux_num);
    strcpy(aux_str, "");

    // Operacoes unarias
    if(operando2 == NULL) {
        if(!strcmp(operador, "-")) {
            strcpy(aux_str, "minus ");
        } else if(!strcmp(operador, "!")) {
            if(!strcmp(no->tipo, "int") || !strcmp(no->tipo, "float")) {
                strcpy(aux_str, "not ");
            }   // FAZER O CASO DO ! EM LISTA
        } else if(!strcmp(operador, "=")) {
            strcpy(aux_str, "mov ");
            if(no->no1 != NULL && no->no1->simbolo != NULL) {
                strcpy(no->no1->simbolo->var_temp, temp);
                //printf("%s\n\n", no->no1->simbolo->var_temp);
            }
        }
        strcat(aux_str, temp);
        strcat(aux_str, ", ");
        strcat(aux_str, operando1);

    // Operacoes binarias
    } else {
        int invertido = 0;
        //printf("%s, %s\n\n", operando1, operando2);
        if(!strcmp(operador, "*")) {
            strcpy(aux_str, "mul ");
        } else if(!strcmp(operador, "/")) {
            strcpy(aux_str, "div ");
        } else if(!strcmp(operador, "-")) {
            strcpy(aux_str, "sub ");
        } else if(!strcmp(operador, "+")) {
            strcpy(aux_str, "add ");
        } else if(!strcmp(operador, "<")) {
            strcpy(aux_str, "slt ");
        } else if(!strcmp(operador, ">")) {
            strcpy(aux_str, "slt ");
            invertido = 1;
        } else if(!strcmp(operador, "<=")) {
            strcpy(aux_str, "sleq ");
        } else if(!strcmp(operador, ">=")) {
            strcpy(aux_str, "sleq ");
            invertido = 1;
        } else if(!strcmp(operador, "==")) {
            strcpy(aux_str, "seq ");
        } else if(!strcmp(operador, "!=")) {
            char copia_temp[11];
            strcpy(copia_temp, temp);
            strcpy(aux_str, "seq ");
            strcat(aux_str, temp);
            strcat(aux_str, ", ");
            strcat(aux_str, operando1);
            strcat(aux_str, ", ");
            strcat(aux_str, operando2);
            (*ger_codigo_var)++;
            sprintf(aux_num, "%d", *ger_codigo_var);
            strcpy(temp, "$");
            strcat(temp, aux_num);
            strcat(aux_str, "\nnot ");
            strcat(aux_str, temp);
            strcat(aux_str, ", ");
            strcat(aux_str, copia_temp);
            invertido = -1;
        } else if(!strcmp(operador, "&&")) {
            strcpy(aux_str, "and ");
        } else if(!strcmp(operador, "||")) {
            strcpy(aux_str, "or ");
        }

        if(invertido == 0) {
            strcat(aux_str, temp);
            strcat(aux_str, ", ");
            strcat(aux_str, operando1);
            strcat(aux_str, ", ");
            strcat(aux_str, operando2);
        } else if(invertido == 1){
            strcat(aux_str, temp);
            strcat(aux_str, ", ");
            strcat(aux_str, operando2);
            strcat(aux_str, ", ");
            strcat(aux_str, operando1);
        }
    }


    strcat(aux_str, "\n");
    fputs(aux_str, escrita);
    strcpy(no->valor_temp, temp);
    (*ger_codigo_var)++;
}

void geraCasting(char *operando1, char *operando2, int *ger_codigo_var, FILE* escrita, struct No* no) {
    char aux_str[200] = "";
    char aux_num[10];
    char temp[11];
    sprintf(aux_num, "%d", *ger_codigo_var);
    strcpy(temp, "$");
    strcat(temp, aux_num);
    //printf("%s %s\n\n", no->no1->nome, no->no2->nome);
    if(no != NULL) {
        if(no->no1 != NULL) {
            if(!strcmp(no->no1->nome, "(int_to_float)"))
                strcpy(aux_str, "inttofl ");
            else if(!strcmp(no->no1->nome, "(float_to_int)"))
                strcpy(aux_str, "fltoint ");
            if(!strcmp(no->no1->nome, "(int_to_float)") || !strcmp(no->no1->nome, "(float_to_int)")) {
                strcat(aux_str, temp);
                strcat(aux_str, ", ");
                strcat(aux_str, operando1);
                strcat(aux_str, "\n");
                fputs(aux_str, escrita);
                strcpy(no->no1->valor_temp, temp);
                (*ger_codigo_var)++;
            }
        }

        if(no->no2 != NULL) {
            if(!strcmp(no->no2->nome, "(int_to_float)"))
                strcpy(aux_str, "inttofl ");
            else if(!strcmp(no->no2->nome, "(float_to_int)"))
                strcpy(aux_str, "fltoint ");
            if(!strcmp(no->no2->nome, "(int_to_float)") || !strcmp(no->no2->nome, "(float_to_int)")) {
                strcat(aux_str, temp);
                strcat(aux_str, ", ");
                strcat(aux_str, operando2);
                strcat(aux_str, "\n");
                fputs(aux_str, escrita);
                strcpy(no->no2->valor_temp, temp);
                (*ger_codigo_var)++;
            }
        }
    }
}