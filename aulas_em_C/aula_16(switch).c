#include <stdio.h>

int main(){
    int valor;
    printf("Digite um valor de 1 a 7: \n");
    scanf("%i", &valor);

    switch (valor){ //inicio do bloco switch
        case 1:
            printf("Domingo.\n");
        break;

        case 2:
            printf("Segunda.\n");
        break;

        case 3:
            printf("Terça.\n");
        break;

        case 4:
            printf("Quarta.\n");
        break;

        case 5:
            printf("Quinta.\n");
        break;

        case 6:
            printf("Sexta.\n");
        break;

        case 7:
            printf("Sabado.\n");
        break;

        default: 
        printf("erro, digite apenas valores de 1 a 7");
    }
    getchar();
    return 0;
}