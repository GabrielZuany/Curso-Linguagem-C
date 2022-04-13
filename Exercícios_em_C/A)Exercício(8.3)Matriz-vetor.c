/*
Faça um programa que possua um vetor com 10 posições. Peça ao usuario para digitar dez valores e exiba quais valores sao ímpares.
*/

#include<stdio.h>

int main(void){

    int vetor[10];
    int valor;
    int i;

    printf("Digite 10 valores para armazenar no vetor: \n");

    for(i=0;i<10;++i){
        scanf("%i", &vetor[i]);
    }

    for(i=0;i<10;++i){
        valor = vetor[i]%2;
        printf("Sao impares os valores: ");
        if(valor!=0){
            printf("|%i|\n", vetor[i]);
        }

    }

    getchar();
    return 0;
}