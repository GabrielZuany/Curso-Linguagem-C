/*
Elabore um programa que leia dois numeros inteiros e exiba o resultado de operações de 
"ou exclusivo", "ou bit a bit" e "e bit a bit" entre eles.
*/

#include <stdio.h>

int main(void){

    unsigned char x, y;
    x = 44;
    printf("%d\n", x);

    y = x & 167; //comparacao E bit a bit
    //x&167 = 00100100 = 36
    printf("x & 167 = %d\n", y);

    y = x | 129; //comparacao OU bit a bit
    //x|129=10101101 = 173
    printf("x | 129 = %d\n", y);

    y = x ^ 167; //comparacao OU exclusivo bit a bit (ou um ou outro)
    //x^167=10001011 = 139
    printf("x ^ 167 = %d\n", y);

    return 0;
}

/*
Operador &:
 44 = 00101100 --->F F V F V V F F 
167 = 10100111 --->V F V F F V V V
x&167=00100100 --->F F V F F V F F 

Operador |:
 44 = 00101100 --->F F V F V V F F 
129 = 10000001 --->V F F F F F F V 
x|129=10101101 --->V F V F V V F V

Operador ^:
 44 = 00101100 --->F F V F V V F F 
167 = 10100111 --->V F V F F V V V
x^167=10001011 --->V F F F V F V V
*/