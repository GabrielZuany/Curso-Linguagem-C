#include<stdio.h>

int main(void){

    float calcularAreaRetangulo(float base, float altura);
    float area = calcularAreaRetangulo(10.0, 20.0);

    printf("A area = %f", area);

    getchar();
    return 0;
}

float calcularAreaRetangulo(float base, float altura)
/*float (o que a minha função RETORNA) cacularAreaRetangulo(nome da função) (Float base, float altura (o qu a funçao RECEBE de informação)) */
{
    float area = base*altura;

    return area; 
}