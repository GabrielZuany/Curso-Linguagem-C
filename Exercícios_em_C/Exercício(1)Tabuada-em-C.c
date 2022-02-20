/*tabuada em c*/

#include <stdio.h>

int main(){

        float numero;
        int multiplicador=1;
        float resultado;

        printf("Digite um numero: \n");
        scanf("%f", &numero);
        printf("A tabuada de %f e: \n", numero);

        do{ 
            resultado = numero*multiplicador;
            printf("%f x %i = %f \n", numero, multiplicador, resultado);
            multiplicador++;
        }while (multiplicador<=20);

    return 0;
}
/*Ao inves de fazer um programa pegando a variavel numero*1, numero*2, numero*3.........ate
 determinado multiplicador manualmente, é mais simples utilizar um loop e alterar somente 
 o parametro de parada do loop. Assim, além de facilitar a mudança de parametros e manutenção do 
 código, ele fica bem mais limpo e organizado ;) */
