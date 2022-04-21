/*
Faça um programa que converta uma letra maiuscula em minuscula.
Utilize a tabela ASCII para isso.
*/

#include <stdio.h>

int main(void){

    char c;
    printf("Digite uma letra maiuscula para converter em minuscula e descobrir o codigo ASCII:");
    c = getchar();

    printf("ASCII(m): %d = %c\nASCII(M): %d = %c\n", c, c, c+32, c+32);

    return 0;
}