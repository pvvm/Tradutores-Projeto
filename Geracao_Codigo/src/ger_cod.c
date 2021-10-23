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
        strcat(aux_str, ", 0\n");
    
    fputs(aux_str, escrita);
}

void geraOperacoes(char *operador, char *operando1, char *operando2, int *ger_codigo_var, FILE* escrita, struct No* no, int incremento, char *inst_incremento) {
    char aux_str[200];
    char aux_num[10];
    char temp[11];
    sprintf(aux_num, "%d", *ger_codigo_var);
    strcpy(temp, "$");
    strcat(temp, aux_num);
    strcpy(aux_str, "");
    int opcao_var = 0;
    int so_um_operando = 0;

    // Operacoes unarias
    if(operando2 == NULL) {
        if(!strcmp(operador, "-")) {
            strcpy(aux_str, "minus ");
            strcat(aux_str, temp);
        } else if(!strcmp(operador, "!")) {
            if(!strcmp(no->tipo, "int") || !strcmp(no->tipo, "float")) {
                strcpy(aux_str, "not ");
                strcat(aux_str, temp);
            }   // FAZER O CASO DO ! EM LISTA
        } else if(!strcmp(operador, "=")) {
            opcao_var = 1;
            strcpy(aux_str, "mov ");
            strcat(aux_str, no->no1->simbolo->var_temp);
            //printf("%s\n\n", operando1);
            //(*ger_codigo_var)--;      Comentei pra evitar que mov nao aumentasse esse numero
        } else if(!strcmp(operador, "write")) {
            strcpy(aux_str, "print ");
            so_um_operando = 1;
        } else if(!strcmp(operador, "writeln")) {
            strcpy(aux_str, "println ");
            so_um_operando = 1;
        } else if(!strcmp(operador, "read")) {
            if(!strcmp(no->no1->simbolo->tipo, "int"))
                strcpy(aux_str, "scani ");
            else if(!strcmp(no->no1->simbolo->tipo, "float"))
                strcpy(aux_str, "scanf ");
            so_um_operando = 1;
        }
        if(so_um_operando == 0)
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
    if(incremento == 1)
        strcat(inst_incremento, aux_str);
    else
        fputs(aux_str, escrita);
    
    if(opcao_var == 0)
        strcpy(no->valor_temp, temp);
    else
        strcpy(no->valor_temp, no->no1->simbolo->var_temp);
    
    (*ger_codigo_var)++;
}

void geraCasting(char *operando1, char *operando2, int *ger_codigo_var, FILE* escrita, struct No* no, int incremento, char *inst_incremento) {
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
                if(incremento == 1)
                    strcat(inst_incremento, aux_str);
                else
                    fputs(aux_str, escrita);
                strcpy(no->no1->valor_temp, temp);
                strcpy(operando1 , temp);           // Gambiarra pra fazer o mov pegar como operando o valor do inttofl e fltoint
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
                if(incremento == 1)
                    strcat(inst_incremento, aux_str);
                else
                    fputs(aux_str, escrita);
                strcpy(no->no2->valor_temp, temp);
                strcpy(operando2 , temp);           // Gambiarra pra fazer o mov pegar como operando o valor do inttofl e fltoint
                (*ger_codigo_var)++;
            }
        }
    }
}

void mandaLabel(int *label_cont, int opcao, char *operador, FILE *escrita, struct pilhaLabel **topo) {
    char aux_str[200];
    char aux_num[10];
    char label[11];
    sprintf(aux_num, "%d", *label_cont);
    strcpy(label, "L");
    strcat(label, aux_num);
    if(opcao == 0) {
        strcpy(aux_str, "brz ");
        strcat(aux_str, label);
        strcat(aux_str, ", ");
        strcat(aux_str, operador);
        strcat(aux_str, "\n");
    } else if(opcao == 1) {
        strcpy(aux_str, label);
        strcat(aux_str, ":\n");
    }
    fputs(aux_str, escrita);
    (*label_cont)++;

    pushLabel(topo, label);
}