#include <stdio.h>
#include<stdlib.h>
#include "biblioteca.h"

int main(void){

    int x, y, z;
    char ch;
    printf("Digite uma expressao matematica (+,-,*,/): ");
    ch = getchar();
    printf("Digite 2 numeros:\n ");
    scanf("%i\n", &x);
    scanf("%i\n", &y);
    switch (ch)
    {
    case '+': z = soma(x, y);break;
    
    case '-': z = subtracao(x,y);break;
    
    case '*': z = multiplicacao(x, y);break;

    case '/': z = divisao(x, y); break;

    default: printf("Operador invalido.\n");
    }

    printf("Resultado = %i\n", z);

    return 0;
}