#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define RAIZ3 1.732
int main()
{
    float b = 0; //base da fig plana
    float h = 0;//altura da fig plana
    float raio = 0;
    float a = 0; //altura da figura espacial
    float area_base = 0;
    float z = 0, y = 0, x = 0; //valores para o calculio de medias
    int p1 =0, p2=0, p3=0;//pesos para o calculo de medias

    float celsius = 0;
    float fahrenheit = 0;
    float kelvin = 0;

    char opcao = 'x'; //Indica ao programa qual TIPO de figura sera calculada
    int alternativa = 0; //indica ao programa qual a figura que sera calculada
    int iniciar = 1;
    while(iniciar==1){
    printf("Escolha o que deseja calcular:\n \n");
    printf("a)Area; \nb)Volume;\nc)Converter undades de temperatura;\nd)Calcular Medias;\ne)Raizes do Segundo grau;\nf)Sair do programa.\n\n");
    scanf("%c*[^\n]", &opcao);//LIMPEZA DE BUFFER
        switch (opcao)
        {
            case 'a': 
                printf("1)Area do Quadrado;\n2)Area do Triangulo;\n3)Area do Retangulo;\n4)Area do Hexagono;\n5)Area do Circulo;\n");
                scanf("%d", &alternativa);
                
                switch(alternativa)
                {
                    case 1: 
                        printf("Digite o valor da base: \n");
                        scanf("%f", &b);
                        float area_quadrado = b*b;
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
                        float area_hexagono = 3*b*b*RAIZ3/2;
                        printf("A area do hexagono = %.2f u2\n", area_hexagono);
                    break;

                    case 5: 
                        printf("Digite o valor do raio: \n");
                        scanf("%f", &raio);
                        float area_circulo = PI*raio*raio;
                        printf("A area do circulo = %.2f u2\n", area_circulo);
                    break;

                    default:printf("Erro! Por favor escolha uma das opcoes.\n");
                }       

            break;

            case 'b':
                printf("1)Volume do Cubo;\n2)Volume da Esfera;\n3)Volume do Prisma;\n\n");
                scanf("%d", &alternativa);
                ;
                switch (alternativa)
                {
                    case 1:
                        printf("Digite o valor da base: \n");
                        scanf("%f", &a);
                        float volume_cubo = a*a*a;
                        printf("O volume do cubo = %.2f u3\n", volume_cubo);
                    break;

                    case 2:
                        printf("Digite o valor do raio da esfera: \n");
                        scanf("%f", &raio);
                        float volume_esfera = (4/3)*PI*raio*raio*raio;
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
                }break;
            
            case 'c':{
                printf("1) Celsius para Fahrenheit e Kelvin;\n2)Fahrenheit para Celsius e Kelvin;\n3)Kelvin para Celsius e Fahrenheit.\n");
                scanf("%d", &alternativa);
                switch (alternativa)
                {
                    case 1:
                        printf("Digite o valor da temperatura em Celsius: \n");
                        scanf("%f", &celsius);
                        fahrenheit = (celsius*1.8)+32;
                        printf("%.2f Celsius = %.2f Fahrenheit.\n", celsius, fahrenheit);
                        kelvin = celsius + 273.15;
                        printf("%.2f Celsius = %.2f Kelvin.\n", celsius, kelvin);
                    break;

                    case 2:
                        printf("Digite o valor da temperatura em Fahreheit: \n");
                        scanf("%f", &fahrenheit);
                        celsius=(fahrenheit-32)/1.8;
                        printf("%.2f Fahrenheit = %.2f Celsius.\n", fahrenheit, celsius);
                        kelvin = (fahrenheit+459.67)/1.8;
                        printf("%.2f Fahrenheit = %.2f Kelvin.\n", fahrenheit, kelvin);
                    break;

                    case 3:
                        printf("Digite o valor da temperatura em Kelvin: \n");
                        scanf("%f", &kelvin);
                        celsius =kelvin-273.15;
                        printf("%.2f Kelvin = %.2f Celsius.\n", kelvin, celsius);
                        fahrenheit = kelvin*1.8 - 459.67;
                        printf("%.2f Kelvin = %.2f Fahrenheit.\n", kelvin, fahrenheit);
                    break;

                default: printf("ERRO! Por favor escolha uma das opcoes.");
                }

            }
            break;

            case 'd':{
                printf("1) Geometrica;\n2)Ponderada;\n3)Harmonica;\n4)Aritmetica.\n");
                scanf("%d", &alternativa);
                switch(alternativa){
                    case 1:
                        printf("Digite os valores (3) que deseja calcular: ");
                        scanf("%f %f %f", &x, &y, &z);
                        float media_geo = x*y*z;
                        printf("A media geometrica = %.2f\n", media_geo);
                    break;

                    case 2:
                        printf("Digite os valores (3) que deseja calcular: ");
                        scanf("%f %f %f", &x, &y, &z);
                        printf("Digite os pesos: ");
                        scanf("%i %i %i", &p1, &p2, &p3);
                        float media_ponderada = (x*p1+y*p2+z*p3)/p1+p2+p3;
                        printf("A media ponderada = %.2f\n", media_ponderada);
                    break;

                    case 3:
                    printf("Digite tres valores para calcular a media Harmonica: ");
                    scanf("%f %f %f", &x, &y, &z);
                    float media_harmonica = (1/(1/x)+(1/y)+(1/z));
                    printf("A media harmonica  = %.2f\n", media_harmonica);
                    break;

                    case 4:
                    printf("Digite tres valores para calcular a media aritmetica: ");
                    scanf("%f %f %f", &x, &y, &z);
                    float media_aritmetica = (x+y+z)/3;
                    printf("A media aritmetica  = %.2f\n", media_aritmetica);
                    break;

                    default: printf("ERRO! Escolha uma opcao valida!\n");
                }
                break;
            }

            case 'e':{
                    float r1 = 0, r2 = 0, a = 0, b = 0, c = 0; //delta e coeficientes ax^2+bx+c
                    float delta = 0;
                    printf("Digite os coeficientes de a, b e c, sendo o formato da equacao ax^2+bx+c:\n ");
                    scanf("%f %f %f", &a, &b, &c);
                    delta = (b*b)-(4*a*c);
                    if(a == 0){
                        printf("A equacao nao e do segundo grau(ou valor inserido nao valido).\n");
                    }
                    else if(delta<0){
                        printf("Nao existe raiz real para essa equacao.\n");
                    }else if(delta== 0){
                        printf("DELTA = %.2f\n", delta);
                        r1 = (-b)/(2*a);
                        printf("A raiz da equacao eh %.2f\n", r1);
                    }else{
                        printf("DELTA = %.2f\n", delta);
                        r1 = ((-b)+sqrt(delta))/(2*a);
                        r2 = ((-b)-sqrt(delta))/(2*a);
                        printf("A raizes da equacao sao: x'=%.2f e x\"=%.2f\n", r1, r2);
                    }
                }
                break;

            case 'f':{
                    printf("Voce saiu do programa.\n");
                }
                
            break;
            default: printf("Erro! Por favor escolha uma das opcoes.\n\n");
        }
        printf("\n1)Rodar novamente;\n2)Encerrar a execucao.\n");
        scanf("%i", &iniciar);
    }

    printf("\nPrograma encerrado.\n");
            
    getchar();
    return 0;
}
