/*
Faça um vetor A tipo inteiro que armazene 20 valores. Em seguida faça um vetor B que armazene outros 2 valores. Agora, faça um vetor C que contenha 20 valores, os quais deverão ser vetor A[n]- vetor B[n]
*/
#include <stdio.h>

int main(void){

    int vetor_A[20];
    int vetor_B[20];
    int vetor_C[20];

    int i;

    printf("Digite 20 valores para adicionar ao vetor A: \n");
    for(i=0; i<20;++i){
        scanf("%i", &vetor_A[i]);
    }

    printf("Digite 20 valores para adicionar ao vetor B: \n");
    for(i=0; i<20;++i){
        scanf("%i", &vetor_B[i]);
    }

    printf("O vetor C (vetor A-vetor B) e = ");
    for(i=0; i<20;++i){
        vetor_C[i]=vetor_A[i]-vetor_B[i];
        printf("|%i|", vetor_C[i]);
    }
    printf("\n");
    
    getchar();
    return 0;
}