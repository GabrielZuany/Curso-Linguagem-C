#include <stdio.h>

int main(){

    int numero=0;
    long int resto = 0;
    int alternativa = 0;

    printf("Digite a conversao que deseja realizar: \n");
    printf("1)Decimal - Binario;\n");
    printf("2)Decimal - Hexadecimal;\n");
    printf("3)Decimal - Octal.\n");
    scanf("%i", &alternativa);

    switch (alternativa)
    {
    case 1: printf("Digite o valor decimal que deseja converter para binario: \n");
            scanf("%i", &numero);

            printf("O binario de %i = ", numero);
        do{
            resto = numero%2;
            numero = numero/2;
            printf("%i", resto);
        }while(numero>1);
        printf("1\n");
        printf("OBS: Le-se o valor binario da esquerda para a direita. EX: o binario de 12 (0011) e lido 1100.\n");
    break;
    
    case 2: printf("Digite um valor decimal para converter para hexadecimal: \n");
            scanf("%i", &numero);
            printf("O Hexadecimal de %i = ", numero);
        do{
            resto = numero%16;
            numero = numero/16;
            printf("%i, ", resto);
        }while(numero>1);
    
        printf("%i\n\n", numero);
        printf("ATENCAO: O VALOR EXIBIDO DIZ RESPEITO AOS RESTOS, LOGO, LE-SE AO CONTRARIO!!\n\n");
        printf("438(dec) != 6 11 1 >>>>> 438(dec) = 1 11 6\n\n");
    break;

    case 3: printf("Digite um valor decimal para converter para octal: \n");
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
    break;

    default: printf("Por favor escolha uma das alternativas!\n");
        
    }
    
    getchar();
    return 0;
}
