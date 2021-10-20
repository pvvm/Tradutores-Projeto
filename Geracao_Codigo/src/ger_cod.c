#include "../lib/ger_cod.h"

void inicioDefault(int ger_codigo_var, FILE* escrita, char* tipo) {
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