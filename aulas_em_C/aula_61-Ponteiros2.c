#include <stdio.h>

int main(void){

    int x = 10;
    int *ponteiro;
    ponteiro = &x;//o meu ponteiro vai apontar no endereço de memoria da variavel x

    int y = 20;
    *ponteiro = y; //o VALOR do meu ponteiro eh igual a y

    printf("%i %i\n", x, y); 

    return 0;
}