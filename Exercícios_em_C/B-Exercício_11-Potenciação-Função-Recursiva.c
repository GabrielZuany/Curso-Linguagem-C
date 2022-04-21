/*1. Fazer uma função que cacula a enésima potência de uma variável real 
x: f(x, n) = x^n*/

#include <stdio.h>

int main(void){

    int base;
    int expo;
    int res;
    printf("Digite o um numero: \n");
    scanf("%i", &base);
    printf("Digite o valor do expoente: \n");
    scanf("%i", &expo);


    int pot(int base, int expo);
    res = pot(base, expo);

    printf("%i^%i = %i\n", base, expo, res);
    
    getchar();
    return 0;
}

int pot(int base, int expo){
    int res;
    if(expo==0){
        return 1;
        
    }else 
        return res=base*pot(base, expo-1);
    
}