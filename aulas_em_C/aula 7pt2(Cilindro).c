#include <stdio.h>

//Area e volume do cilindro

int main()
{
    const PI = 3;
    int raio;
    int altura;
    int area;
    int volume;

    printf("Digite o valor do raio em cm: ");
    scanf("%i", &raio);

    printf("Digite o valor da altura em cm: ");
    scanf("%i", &altura);

    area = (2*PI*raio*raio)+(2*PI*raio*altura);
    volume = PI*raio*raio*altura;

    printf("A area do cilindro e = %i cm2\n", area);
    printf("O volume do cilindro e = %i mL\n", volume);

    getchar();
    return 0;
}
