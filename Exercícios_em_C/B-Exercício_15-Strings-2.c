/*
Declare duas strings com capacidade para 20
caracteres. Leia pela entrada padrão a primeira string.
Em seguida, copie o texto da primeira string para a
segunda. Imprima no final o conteúdo das duas strings.
*/

#include <stdio.h>

int main(void){

    char caractere;
    char string1[20];
    char string2[20];
    int i = 0;

    do{
       caractere = getchar();
       string1[i]=caractere;
       string2[i]=string1[i];
       ++i;
    }while(caractere!='\n');

    string1[i-1] = '\0';
    string2[i-1] = '\0';

    printf("string 1 = %s\nstring 2 = string 1 = %s\n", string1,string2);

    getchar();
    return 0;
}