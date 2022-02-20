#include <stdio.h>

int main(){
    int b;
    int h;
    int raio;

    int a; //altura da figura espacial
    int area_base;


    int opcao;
    int alternativa;

        printf("Escolha o que deseja calcular: \n");
        printf("1)Area do Quadrado;\n2)Area do Triangulo;\n3)Area do Retangulo;\n4)Area do Hexagono;\n5)Area do Circulo;\n6)Volume do Cubo;\n7)Volume da Esfera;\n8)Volume do Prisma;\n\n",alternativa);
        scanf("%d", &alternativa);
            switch(alternativa){
                case 1: 
                    printf("Digite o valor da base: \n");
                    scanf("%i", &b);
                    printf("Digite o valor da altura: \n");
                    scanf("%i", &h);
                    int area_quadrado = b*h;
                    printf("A area do quadrado = %iu2\n", area_quadrado);
                break;

                case 2: 
                    printf("Digite o valor da base: \n");
                    scanf("%i", &b);
                    printf("Digite o valor da altura: \n");
                    scanf("%i", &h);
                    int area_triangulo = b*h/2;
                    printf("A area do triangulo = %iu2\n", area_triangulo);
                break;

                case 3: 
                    printf("Digite o valor da base: \n");
                    scanf("%d", &b);
                    printf("Digite o valor da altura: \n");
                    scanf("%d", &h);
                    int area_retangulo = b*h;
                    printf("A area do retangulo = %iu2\n", area_retangulo);
                break;

                case 4: 
                    printf("Digite o valor da base: \n");
                    scanf("%d", &b);
                    int area_hexagono = 3*b*b*1.7/2;
                    printf("A area do hexagono = %iu2\n", area_hexagono);
                break;

                case 5: 
                    printf("Digite o valor do raio: \n");
                    scanf("%d", &raio);
                    int area_circulo = 3*raio*raio;
                    printf("A area do circulo = %iu2\n", area_circulo);
                break;

                case 6:
                    printf("Digite o valor da area da base: \n");
                    scanf("%d", &area_base);
                    printf("DIgite o valor da altura: \n");
                    scanf("%d", &a);
                    int volume_cubo = area_base*a;
                    printf("O volume do cubo = %iu3\n", volume_cubo);
                break;

                case 7:
                    printf("Digite o valor do raio da esfera: \n");
                    scanf("%d", &raio);
                    int volume_esfera = 4*raio*raio*raio;
                    printf("O volume da esfera = %iu3\n", volume_esfera);
                break;

                case 8:
                    printf("Digite o valor da area da base do prisma: \n");
                    scanf("%d", &area_base);
                    printf("Digite o valor da altura: \n");
                    scanf("%d", &a);
                    int volume_prisma = area_base*a;
                    printf("O volume do prisma = %iu3\n", volume_prisma);
                break;

                default:
                    printf("Erro! Por favor escolha uma das opcoes.\n");
                }
        printf("OBS: Para efeito de calculo assuma que: PI=3 e raiz3=1,7.\n");
return 0;
}