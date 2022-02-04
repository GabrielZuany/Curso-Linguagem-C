#include <stdio.h>

int main()
{
    int contador; //variavel de controle de loop

    for(contador = 1; contador<=100; contador++) //contador++ = contador+1
    {
        printf("%d\n", contador);
    }
    return 0;
}

/*
for(valor_inicial; condição_final; valor_incremento)
{
    instruções;
}

*/