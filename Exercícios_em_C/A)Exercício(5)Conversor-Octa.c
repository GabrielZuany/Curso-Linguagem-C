#include <stdio.h>

int main(){
    int numero;
    int resto;
    printf("Digite um valor decimal para converter para octal: \n");
    scanf("%i", &numero);
    printf("O octal de %i = ", numero);
    do{
        resto = numero%8;
        printf("%i, ", resto);
        numero = numero/8;
    }while(numero>1);

    printf("1\n");
    printf("\nATENCAO: O VALOR EXIBIDO DIZ RESPEITO AOS RESTOS, LOGO, LE-SE AO CONTRARIO!!\n\n");
    printf("1000(dec) != 0 5 7 1 >>>>> 1000(dec) = 1750\n\n");

    getchar();
    return 0;
}