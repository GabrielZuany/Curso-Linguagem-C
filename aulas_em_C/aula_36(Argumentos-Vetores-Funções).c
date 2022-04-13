#include <stdio.h>

int main(void){

    int vetor[10]={6, 5, 4, 3, 2, 1, 0, 7, 9, 8};
    int i;
    void ordemCrescente(int vetor[], int n);//ao declarar vetor como argumento, nao precisa indicar o numero de itens do vetor


    ordemCrescente(vetor, 10);//declarar o nome do vetor e o numero

    for(i=0; i<10; ++i){
            printf("%i ", vetor[i]);
    }

    getchar();
    return 0;
}

void ordemCrescente(int vetor[], int n){
    int i, j, temporaria;

    for(i=0;i<n;++i){
        for(j= i+1; j<n;++j){
            if(vetor[i]>vetor[j]){

                temporaria=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=temporaria;
            }

        }
    }
    

}