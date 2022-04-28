#include <stdio.h>

int main(void){

    short x = 2147483647;//overflow --> a minha variavel nao possui bits suficientes para armazenar esse valor
    short y = -2147483647;//underflow  //

    printf("%i\n", x);
    printf("%i\n", y);


    return 0;
}