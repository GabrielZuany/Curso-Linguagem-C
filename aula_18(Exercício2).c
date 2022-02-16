#include <stdio.h>

int main(){
    int numero;
    int cifra;

    printf("Digite um numero inteiro.\n");
    scanf("%i", &numero);

    if(numero>=0){
        do{
            cifra = numero % 10;
            printf("%i", cifra);
            numero= numero/10;
        }while(numero!=0);
        printf("\n");

        /*faça{
            o RESTO da divisao do numero por 10 ----> 123/10=12 com RESTO 3
            escreva o resto
            atribua o resultado da divisao à variavel numero
            divida o numero por 10 = 12/10 =1
        }enquanto (numero for diferente de 0)
        */
    }

    else if(numero<1){
        numero=numero*-1;
        printf("-");
        
        do{
            cifra = numero % 10;
            printf("%i", cifra);
            numero/=10;
        }while(numero!=0);
        printf("\n");
    }
    else

    return 0;
}
