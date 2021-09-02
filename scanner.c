#include <stdio.h>
#include <ctype.h>
#include "scanner.h"

enum Tokens{
    FDT,
    SEP,
    CAD,
};

int get_token(){
    char caracter = getchar();
    int i=0;

    if(caracter != EOF){

        if (caracter = ','){
            // falta cargar en buffer
            buffer[0] = caracter;
            return SEP;
        }

        while(isspace(caracter)){
            caracter = getchar();
        }

        while(es_cadena(caracter)){
            buffer[i] = caracter;
            i++;
        }
        return CAD;
    }
    return FDT;
}


int es_cadena(char caracter){
    
    if(isspace(caracter) || caracter == ',' || caracter == EOF){
        return 0;
    }
    return 1;
}