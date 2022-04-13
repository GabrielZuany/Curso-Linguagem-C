#include <stdio.h>

int main(void){
    int vetor[5] = {1, 2, 3, 4, 5};
    int i;
    for (i=0; i<5; ++i){
        printf("%i, ", vetor[i]);
    }

    getchar();
    return 0;
}