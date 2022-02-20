#include <stdio.h>

int main(){
    float metros;
    float decimetros;
    float centimetros;
    float milimetros;

    printf("Digite o valor em metros: \n");
    scanf("%f", &metros);

    decimetros = metros*10;
    centimetros = metros*100;
    milimetros = metros*1000;

    printf("%f metros = %f decimetros\n", metros, decimetros);
    printf("%f metros = %f centimetros\n", metros, centimetros);
    printf("%f metros = %f milimetros\n", metros, milimetros);
    printf("Para efeitos de arredondamento considere apenas duas casas decimais.\n");

    return 0;
}