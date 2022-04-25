#include <stdio.h>

int main(void){

    int x = 10;
    double y =20.50;
    char z = 'a';

    /*int *ponteiroX;
    ponteiroX = &x; //ponteiroX = &x; que dizer que queremos acessar o endereço dessa variavel. O ponteiro acessa o endereço de x

    int *ponteiroX;
    *ponteiroX = &x; //*ponteiroX = &x; que dizer que o ponteiro acessa o valor contido nesse endereço de memoria de x*/

    int *ponteiroX = &x;//*ponteiroX = &x; que dizer que o ponteiro acessa o valor contido nesse endereço de memoria de x

    double *ponteiroY = &y;
    char *ponteiroZ = &z;

    double soma = *ponteiroX + *ponteiroY;

    printf("Endereço x = %i - Valor x = %i\n", ponteiroX, *ponteiroX);
    printf("Endereço y = %i - Valor y = %d\n", ponteiroY, *ponteiroY);
    printf("Endereço z = %i - Valor z = %c\n", ponteiroZ, *ponteiroZ);

    printf("Soma %f\n", soma);


    return 0;
}