/*
Escreva um programa que leia um numero inteiro e mostre seu complemento bit a bit.
*/

#include <stdio.h>

int main(void){

    unsigned char x, y;
    x = 44;
    printf("%d\n", x);
    y=~x;
    printf("~x = %d\n", y);

    return 0;
}

/*
44 = 00101100
~44= 11010011 = 211
*/

