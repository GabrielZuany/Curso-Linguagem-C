#include <stdio.h>

int main(void){

    int x;
    x = 10;

    int *ponteiro;
    ponteiro = &x; //ponteiro recebe o endereço de memoria de x. O ponteiro aponta para o endereco de memoria


    printf("%i\n", *ponteiro); //acesso o valor da memoria
    printf("%i\n", ponteiro);//acesso o endereço da memoria
    printf("%i\n", &x);

    return 0;
}