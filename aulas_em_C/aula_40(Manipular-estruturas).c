#include <stdio.h>

int main(void){

    struct horario {
        int hora;
        int minuto;
        int segundo;
        double teste;
        char letra;
    };
    
    struct horario agora;
    agora.hora=15;
    agora.minuto=17;
    agora.segundo=30;

    struct horario depois;
    depois.hora = agora.hora+10;
    depois.minuto = agora.minuto;
    depois.teste = 50.55/123;
    depois.letra='a';

    printf("%i\n", depois.hora);
    printf("%i\n", depois.minuto);
    printf("%d\n", depois.teste);
    printf("%c\n", depois.letra);
    

    getchar();
    return 0;
}