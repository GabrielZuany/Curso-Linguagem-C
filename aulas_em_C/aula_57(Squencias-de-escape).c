#include <stdio.h>

int main(void){
    int i = 1254;
    float k = 2514.4;
    printf("Ola Mundo\a");// \a emite um sinal sonoro
    printf("\n");
    printf("Ola Mundo\b");// \b move o cursor uma posição a esquerda
    printf("Ola\tMundo");// \t realiza um espaçamento tab
    printf("\n");
    printf("Ola Mundo\r");// \r volta o cursor pro inicio da linha
    printf("\n");
    printf("\"Ola Mundo\"");// \"" coloca as pas
    printf("\n");
    printf("1254 em hexadecimal minusculo %x", i);//exibicao de numero hexadeciaml
    printf("\n");
    printf("1254 em hexadecimal maiusculo %X\n", i);
    printf("1254 em octal %o\n", i);//converte o numero para octal
    printf("1254 em notacao(m): %e\n", k);//converte para notacao 
    printf("1254 em notacao(M): %E\n", k);

    getchar();
    return 0;
}