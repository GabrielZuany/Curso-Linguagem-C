/*
Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e
  direita, do primeiro número pelo segundo.
*/

#include <stdio.h>

int main(void){

    unsigned char x, y;
    x = 44;
    printf("x = %d\n", x);

    y = x << 2; // y = x << (numero de posicoes deslocadas);
    //00101100 ===> 00<-(1011)00 ====> 10110000
    printf("x << 2 = %d\n", y);

    y = x >> 2;
    //00101100 ===> 00(1011)->00 ====> 00001011
    printf("x >> 2 = %d\n", y);

    return 0;
}