#include <stdio.h>

int main(void){
    int l, c, valor;
    int matriz[3][3]={1,2,3,4,5,6,7,8,9};

    printf("Digite um valor que deseja encontrar na matriz: \n");
    scanf("%i", &valor);

    for(l=0;l<3;++l){
        for(c=0;c<3;++c){
            if(matriz[l][c]==valor)
            {
                printf("Valor encontrado na posicao %i %i \n", l, c);
                break;
            }
        }
    }
    getchar();
    return 0;
}
