#include <stdio.h>

int main(){

    int fatorial (int x);
    int numero, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    resultado = fatorial(numero);

    printf("O fatorial = %i\n", resultado);


    getchar();
    return 0;
}

int fatorial(int x){

    int resultado;

    if(x==0){
        resultado = 1;
    }else {
        resultado = x *fatorial(x-1);
    }
    return resultado;

}