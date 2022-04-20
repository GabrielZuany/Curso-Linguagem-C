#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int tentativas = 10;
    int valor_digitado = 0;

    srand(time(NULL));//função que precede a geração de um num aleatorio. ela retira um valor a partir do horario de entrada no sistema
    int numero_aleatorio = rand()%100;//gerar um numero aleatorio entre 0 e 100

    printf("Bem vindo ao Aleatory Number! Digite um valor para tentar acertar o numero gerado aleatoriamente: \n");
    
    do{
        scanf("%i", &valor_digitado);
        if(valor_digitado<numero_aleatorio){
            printf("Ops, valor muito baixo! Tente novamente.\n");
            tentativas--;
            printf("Tentativas restantes: %i.\n", tentativas);
        }else if(valor_digitado>numero_aleatorio){
            printf("Ops, valor muito alto! Tente novamente.\n");
            tentativas--;
            printf("Tentativas restantes: %i.\n", tentativas);
        }else printf("Parabens, voce acertou o numero! Winner!\n\n Ctrl+C para sair\n");
    }while(tentativas!=0);

    getchar();
    return 0;
}