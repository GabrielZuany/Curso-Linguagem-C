#include <stdio.h>

int main()
{
    int idade; //int armazena valores numericos inteiros
    idade = 23;

    int maeIdade;
    maeIdade = 40;

    int paiIdade = 50;

    printf("Minha idade e = %i.\nIdade do meu pai e = %i.\nIdade da minha mae e = %i.\n", idade, paiIdade, maeIdade); /*para incluir uma
    variavel basta colocar "%i" e no final da frase ",nomevariavel"*/

    getchar();
    return 0;
}
