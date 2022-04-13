#include <stdio.h>

int main(){

    int num;
    int resto;

    printf("Digite um valor decimal para converter para hexadecimal: \n");
    scanf("%i", &num);
    printf("O Hexadecimal de %i = ", num);
    do{
        resto = num%16;
        num = num/16;
        printf("%i, ", resto);
    }while(num>1);
    
    printf("%i\n\n", num);
    printf("ATENCAO: O VALOR EXIBIDO DIZ RESPEITO AOS RESTOS, LOGO, LE-SE AO CONTRARIO!!\n\n");
    printf("438(dec) != 6 11 1 >>>>> 438(dec) = 1 11 6\n\n");

    getchar();
    return 0;
}