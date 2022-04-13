#include<stdio.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
}; // estrutura global do tipo horario contendo 3 variaveis do tipo int

int main(void){

    struct horario teste (struct horario x);// declara que existe uma função estruct do tipo horario de nome teste que retorne uma struct do tipo horario de nome qualquer.

    struct horario agora;// declara uma struct do tipo horario chamada agora
    agora.horas = 10;// atribui os valores das 3 variaveis da struct horario agora
    agora.minutos = 25;
    agora.segundos = 58;

    struct horario proximo;//declara uma struct do tipo horario chamada proxima

    proximo = teste(agora);/*
    nesse momento para saber o valor de proxima o compilador executa o que está na função teste sabendo que ela deve retornar a struct horario agora, dentro de teste como podemos ver abaixo a primeira coisa a ser executada é um printf retornando os valores das três variaveis de AGORA e depois altera essas três variaveis e o comando return faz com que as variaveis assumam esses novos valores, ou seja, aparece na tela "10, 42, 58" e logo depois muda esses valores para "100, 100, 100"
    */

    printf("%i:%i:%i\n", proximo.horas, proximo.minutos, proximo.segundos);// esse printf retorna o valor das variaveis de proxima, proxima = teste(agora), ou seja //quando alteramos os valores de "10, 42, 58" dentro da função teste para "100, 100, //100" mudamos também os valores das variaveis contidas em proxima. assim esse //printf retorna "100, 100, 100"
    
    
    getchar();
    return 0;
}

struct horario teste (struct horario x){
    printf("%i:%i:%i\n", x.horas, x.minutos, x.segundos);

    x.horas = 100;
    x.minutos = 100;
    x.segundos = 100;

    return x;
}