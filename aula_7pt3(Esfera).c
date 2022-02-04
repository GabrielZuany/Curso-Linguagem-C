#include <stdio.h>

int main()
{
    const PI = 3.14;//sera considerado o valor inteiro mais proximo, no caso, 3
    int raio;
    int area;
    int volume;

    printf("Digite o valor do raio: \n");
    scanf("%i", &raio);

    area = 4*PI*raio*raio;
    volume = 4/3*PI*raio*raio*raio;

    printf("A area da esfera = %i\n",area);
    printf("O volume da esfera = %i\n",volume);

    return 0;
}