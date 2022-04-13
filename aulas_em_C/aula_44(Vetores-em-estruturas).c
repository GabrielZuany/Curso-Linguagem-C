#include<stdio.h>

int main(void){
    
    struct horario{
        int hora, minuto, segundo;
    };

    struct horario teste [5] = 
    {{10,20,30},{25,21,30},{18,23,38},{56,45,90},{10,22,33}};
    //vetor tipo struct horario que vai conter 5 vezes a estrutura. Ou seja, 5X (horario,minuto,segundo).

    int i;

    for(i=0;i<5;++i){

printf("%i:%i:%i\n", teste[i].hora,teste[i].minuto, teste[i].segundo);

    }
    
    getchar();
    return 0;
}