#include <stdio.h>

int main(void){

    struct horario {
        int hora;
        int minuto;
        int segundo;
    };
    
    struct horario agora;

    agora.hora=15;
    agora.minuto=17;
    agora.segundo=30;

    printf("%i:%i:%i\n", agora.hora, agora.minuto, agora.segundo);

    getchar();
    return 0;
}
/*
    struct DEFINIÇÃO{

        tipos de data(int float char double.....)

    };

    struct definição NOME DA ESTRUTURA; estrutura declarada.

    nomeDaEstrutura.variavel dentro da estrutura = X;

    */