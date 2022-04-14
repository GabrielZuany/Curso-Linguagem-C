/*
Leia um texto pela entrada padrão com no máximo 99
caracteres. Em seguida imprima o número de caracteres
digitados.
*/

#include <stdio.h>

int main(void){

    char texto[99];
    char caractere;
    int i=0;

    do{
        caractere=getchar();
        texto[i]=caractere;
        ++i;
    }while(caractere != '\n');
    printf("A palavra digitada tem %i caracteres(incluindo o '\0')", i);
    
    getchar();
    return 0;
}