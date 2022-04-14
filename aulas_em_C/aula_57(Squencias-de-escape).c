#include <stdio.h>

int main(void){

    printf("Ola Mundo\a");// \a emite um sinal sonoro
    printf("\n");
    printf("Ola Mundo\b");// \b move o cursor uma posição a esquerda
    printf("Ola\tMundo");// \t realiza um espaçamento tab
    printf("\n");
    printf("Ola Mundo\r");// \r volta o cursor pro inicio da linha
    printf("\n");
    printf("\"Ola Mundo\"");// \"" coloca as pas
    printf("\n");

    getchar();
    return 0;
}