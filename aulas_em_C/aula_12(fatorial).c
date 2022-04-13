#include <stdio.h>

int main(){
    int num;
    int resultado = 1;

    printf("Digite um valor: ");
    scanf("%i", &num);

    for(num>=1 ; num>=1;--num){

        resultado = resultado*num;//ou resultado*=num
    }

    printf("Resultado = %i" , resultado);
   
   getchar();
    return 0;
}