#include <stdio.h>

int main(void){

    struct horario{
        int hora, minuto, segundo;
    };
    struct horario agora, *depois;//ponteiro que aponta em estruturas de tipo horario
    depois = &agora;

    //*depois.hora = 20;//*(depois.hora) = 20; o compilador enxerga isso
    (*depois).hora=20;
    (*depois).minuto=20;
    (*depois).segundo=20;
    //------OU---------
    depois->hora=20;
    depois->minuto=20;
    depois->segundo=20;


    printf("%i:%i:%i\n", agora.hora,agora.minuto,agora.segundo);

    return 0;
}