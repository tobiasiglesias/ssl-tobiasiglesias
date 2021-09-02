#include <stdio.h>
#include <string.h>
#include "scanner.h"

int main(int argc, const char *argv[]){
    
    int token;

    do{
        token = get_token();

        switch(token){

            case SEP:
                printf("Separador: %c\n", buffer[0]);
                break;
            case CAD:
                printf("Cadena: %s\n", buffer);
                break;
            case FDT:
                printf("Fin de texto: ");
                break;
            default:
                printf("mmmm");
                break;
        }

        memset(buffer,0,140);
    } while(token != EOF);
}