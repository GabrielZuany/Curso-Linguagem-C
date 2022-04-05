//-------------------------------------------JOGO DA VELHA EM C----------------------------------------------------
#include <stdio.h>

   //VARIAVES GLOBAIS
    int k, l;//numeros digtados pelo usuario
    int i; // variavel de controle de loop
    int j; // variavel de controle de loop
    char matriz[3][3]={'-','-','-','-','-','-','-','-','-'};

int main(void){
    int contador;

        void funcaoJogada(void);
        funcaoJogada(); 
    

    system("pause");
    return 0;
}

//FUNÇÕES

void funcaoJogada(void){
    int contador;
    for(contador=0;contador<5;++contador){
        funcaoprint();
        funcaoEscolhaX();
        funcaoprint();
        if(contador<4){
            funcaoEscolhaO();
        }  
    }
}

void funcaoprint(void){
    for(i=0;i<3;++i){
        for(j=0;j<3;++j){

            printf("|%c|", matriz[i][j]);
        }
        printf("\n");
    }
}

void funcaoEscolhaX(void){
    printf("Jogador 'X', digite a posicao (linha e coluna) desejada: \n");
    scanf("%i %i", &k, &l);//escanear somente os valores de i e j. se for escanear a matriz(tipo char), nao sera possivel inserir o valor da POSIÇÃO desejada. 
    i=k-1;
    j=l-1;
    matriz[i][j] = 'x';
}

void funcaoEscolhaO(void){
    printf("Jogador 'O', digite a posicao (linha e coluna) desejada: \n");
    scanf("%i %i", &k, &l);//escanear somente os valores de k e l. se for escanear a matriz(tipo char), nao sera possivel inserir o valor da POSIÇÃO desejada. 

    i=k-1;//na matriz a linha 1 corresponde ao valor 0. Supondo que o usuario nao saiba que na computação linha 1 = 0, ele digitará linha 1 = 1. Logo, foi necessário converter o valor digitado para o tradicional.
    j=l-1;
    matriz[i][j] = 'O';
}
