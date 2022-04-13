#include <stdio.h>

int main(){
    
    int vetor[12];
    int i, j;
    int temporaria;

    printf("Digite 12 valores: \n");

    for(i=0;i<12;++i){
        scanf("%i", &vetor[i]);
    }

    for(i=0;i<12;++i){
        for(j=i+1;j<12;++j){
            if(vetor[i]>vetor[j]){
                temporaria = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporaria;
            }
        }
    }
    for(i=0;i<12;++i){
        printf("|%i|", vetor[i]);
    }
    
    getchar();
    return 0;
}
