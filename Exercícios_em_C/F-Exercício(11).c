/*Escrever um programa em "C" que solicita as notas das duas provas feitas por
cada um dos alunos de uma turma (as notas tem de estar no intervalo [0 10]) e
imprime para cada um a média das notas.*/

#include<stdio.h>

int main(void){
    int l;
    int c;
    int AlunosNotas[3][2]={0};
    

    for(l=0;l<3;++l){
        printf("Digite a nota do aluno %i: \n", l+1);
        for(c=0;c<2 ;++c){
            scanf("%i", &AlunosNotas[l][c]);
        }
        
    }
        
/*-----------*----------------*---------------*----------*/
   
    for(l=0;l<3;++l){
        printf("As notas do aluno %i foram: ", l+1);
        for(c=0;c<2 ;++c){
            printf("// %i //", AlunosNotas[l][c]);
        }
        printf("\n"); 
        }
/*----------------*------------------*---------------------*/        

    return 0;
}