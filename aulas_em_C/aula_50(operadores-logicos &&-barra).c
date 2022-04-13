#include <stdio.h>

int main(void){

    int idade;

    printf("Sua idade:\n");
    scanf("%i", &idade);

    if(idade>=20 && idade<=40){
        // && = e; || = ou
        printf("Deu certo\n");
    }else{
        printf("Nao deu certo\n");
    }

    getchar();
    return 0;
}

