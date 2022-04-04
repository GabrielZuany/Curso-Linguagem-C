#include <stdio.h>

   //VARIAVES GLOBAIS
    int i, j; // variavel de controle de loop
    char matriz[3][3]={'-','-','-','-','-','-','-','-','-'};

int main(void){
    int contador;

    for(contador=0;contador<5;++contador){
        void funcaoJogada(void);
        funcaoJogada(); 
    }

    system("pause");
    return 0;
}

//FUNÇÕES

void funcaoJogada(void){
    funcaoprint();
    funcaoEscolhaX();
    funcaoprint();
    funcaoEscolhaO();
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
    scanf("%i %i", &i, &j);//escanear somente os valores de i e j. se for escanear a matriz(tipo char), nao sera possivel inserir o valor da POSIÇÃO desejada. 
    matriz[i][j] = 'x';
}

void funcaoEscolhaO(void){
    printf("Jogador 'O', digite a posicao (linha e coluna) desejada: \n");
    scanf("%i %i", &i, &j);//escanear somente os valores de i e j. se for escanear a matriz(tipo char), nao sera possivel inserir o valor da POSIÇÃO desejada. 
    matriz[i][j] = 'O';
}
