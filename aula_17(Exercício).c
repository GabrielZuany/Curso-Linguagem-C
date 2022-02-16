#include <stdio.h>

int main(){
    int a;
    int b;

    printf("Digite dois valores inteiros: \n");
    scanf("%i %i", &a, &b);

    if(b==0){
        printf("Divisao por 0 nao e permitida");
    }else{
        if(a%b==0){
            printf("%i e divisivel por %i.\n", a, b);
        }else{
            printf("%i nao e divisivel por %i.\n", a, b);
        }
    }
    return 0;
}
