#include <stdio.h>

//Area do retangulo

int main()
{
    int base;
    int altura;
    int area;

    printf("Digite o valor da base:");//insere uma informação
    scanf("%i", &base);//puxa um valor que o usuario digitar e coloca dentro do programa

    printf("Digite o valor da altura:");
    scanf("%i", &altura);

    area = base*altura;

    printf("O valor da area do retangulo e = %i", area);

    return 0;
}
