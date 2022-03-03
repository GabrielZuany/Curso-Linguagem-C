#include <stdio.h>

int main()
{
    float b; //base da fig plana
    float h;//altura da fig plana
    float raio;

    float a; //altura da figura espacial
    float area_base;


    char opcao; //Indica ao programa qual tipo de figura sera calculada
    int alternativa; //indica ao programa qual a figura que sera calculada

    printf("Escolha o que deseja calcular: \n");
    printf("a)Area; \nb)Volume;\n");
    scanf("%c", &opcao);

        switch (opcao)
        {
            case 'a': 
                printf("1)Area do Quadrado;\n2)Area do Triangulo;\n3)Area do Retangulo;\n4)Area do Hexagono;\n5)Area do Circulo;");
                scanf("%d", &alternativa);

                switch(alternativa)
                {
                    case 1: 
                        printf("Digite o valor da base: \n");
                        scanf("%f", &b);
                        printf("Digite o valor da altura: \n");
                        scanf("%f", &h);
                        float area_quadrado = b*h;
                        printf("A area do quadrado = %.2f u2\n", area_quadrado);
                    break;

                    case 2: 
                        printf("Digite o valor da base: \n");
                        scanf("%f", &b);
                        printf("Digite o valor da altura: \n");
                        scanf("%f", &h);
                        float area_triangulo = b*h/2;
                        printf("A area do triangulo = %.2f u2\n", area_triangulo);
                    break;

                    case 3: 
                        printf("Digite o valor da base: \n");
                        scanf("%f", &b);
                        printf("Digite o valor da altura: \n");
                        scanf("%f", &h);
                        float area_retangulo = b*h;
                        printf("A area do retangulo = %.2f u2\n", area_retangulo);
                    break;

                    case 4: 
                        printf("Digite o valor da base: \n");
                        scanf("%f", &b);
                        float area_hexagono = 3*b*b*1.7/2;
                        printf("A area do hexagono = %.2f u2\n", area_hexagono);
                    break;

                    case 5: 
                        printf("Digite o valor do raio: \n");
                        scanf("%f", &raio);
                        float area_circulo = 3.14*raio*raio;
                        printf("A area do circulo = %.2f u2\n", area_circulo);
                    break;

                    default:printf("Erro! Por favor escolha uma das opcoes.\n");
                }       

            break;

            case 'b':
                printf("1)Volume do Cubo;\n2)Volume da Esfera;\n3)Volume do Prisma;\n\n");
                scanf("%d", &alternativa);

                switch (alternativa)
                {
                    case 1:
                        printf("Digite o valor da area da base: \n");
                        scanf("%f", &area_base);
                        printf("DIgite o valor da altura: \n");
                        scanf("%f", &a);
                        float volume_cubo = area_base*a;
                        printf("O volume do cubo = %.2f u3\n", volume_cubo);
                    break;

                    case 2:
                        printf("Digite o valor do raio da esfera: \n");
                        scanf("%f", &raio);
                        float volume_esfera = (4/3)*3.14*raio*raio*raio;
                        printf("O volume da esfera = %.2f u3\n", volume_esfera);
                    break;

                    case 3:
                        printf("Digite o valor da area da base do prisma: \n");
                        scanf("%f", &area_base);
                        printf("Digite o valor da altura: \n");
                        scanf("%f", &a);
                        float volume_prisma = area_base*a;
                        printf("O volume do prisma = %.2f u3\n", volume_prisma);
                    break;

                    default:
                        printf("Erro! Por favor escolha uma das opcoes.\n");
                }
        
            default:
                printf("Erro! Por favor escolha uma das opcoes.\n");
        }
            
        printf("OBS: Para efeito de calculo assuma que: raiz3=1,7.\n");

    return 0;
}
