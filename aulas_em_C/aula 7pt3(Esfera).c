#include <stdio.h>

int main()
{
    float PI = 3.14;//sera considerado o valor decimal, 3,14
    int raio;
    float area;
    float volume;

    printf("Digite o valor do raio: \n");
    scanf("%i", &raio);

    area = 4*PI*raio*raio;
    volume = 4/3*PI*raio*raio*raio;

    printf("A area da esfera = %f\n",area);
    printf("O volume da esfera = %f\n",volume);

    return 0;
}
