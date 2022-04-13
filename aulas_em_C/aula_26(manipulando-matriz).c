#include <stdio.h>

int main(void){

    int matriz [5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,3,14,15,16,17,18,19,20,21,22,23,24,25};

    int l;
    int c;
    for(l =0; l<5; ++l){
        for(c=0;c<5;++c){
            printf("%i ", matriz[l][c]);
        }
        printf("\n");

    }

    getchar();
    return 0;
}