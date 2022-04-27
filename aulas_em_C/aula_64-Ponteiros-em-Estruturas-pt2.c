#include <stdio.h>

int main(void){

    struct horario{
        int hora, minuto, segundo;
    };
    struct horario agora, *depois;
    depois = &agora;

    (*depois).hora=20;//ou depois->hora=20;
    (*depois).minuto=50;
    (*depois).segundo=90;
    
    int somatorio = 100;

    struct horario antes;

    antes.hora= somatorio + depois->hora;
    antes.minuto = depois->minuto + (*depois).segundo;
    antes.segundo = (*depois).segundo + somatorio;

    printf("%i:%i:%i\n", antes.hora,antes.minuto,antes.segundo);

    return 0;
}