#include <stdio.h>

int main(){

    int numero;
    long int resto;

    printf("Digite o valor decimal que deseja converter para binario: \n");
    scanf("%i", &numero);

    printf("O binario de %i = ", numero);
    do{
        resto = numero%2;
        numero = numero/2;
        printf("%i", resto);
    }while(numero>1);
    
    printf("1\n");

    printf("OBS: Le-se o valor binario da esquerda para a direita. Logo, o binario de 12 (0011) e lido 1100.\n");
   
   getchar();
    return 0;
}
