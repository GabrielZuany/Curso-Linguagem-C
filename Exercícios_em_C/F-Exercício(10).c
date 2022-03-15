/*Escrever um programa em "C" que solicita as notas das duas provas feitas por
cada um dos alunos de uma turma (as notas tem de estar no intervalo [0 10]) e
imprime para cada um a média das notas.*/

/*ADICIONADO=======> O USUARIO PODE ESCOLHER O NUMERO DE ALUNOS E O NUMERO DE PROVAS REALIZADAS*/

#include<stdio.h>

int main(void){
    int l;
    int c;
    int numeroalunos;
    int numerodenotas;
    printf("Digite o numero de alunos presentes: \n");
    scanf("%i", &numeroalunos);
    printf("Digite o numero de provas: ");
    scanf("%i", &numerodenotas);

    float AlunosNotas[numeroalunos][numerodenotas];
    float mediasAlunos[numeroalunos];
    float media=0; 

    for(l=0;l<numeroalunos;++l){
        printf("Digite as notas do aluno %i: \n", l+1);
        for(c=0;c<numerodenotas ;++c){
            scanf("%f", &AlunosNotas[l][c]);
                
                if(AlunosNotas[l][c]>10){
                    printf("Serao aceitas somente notas entre 0 e 10\n");
                }else if(AlunosNotas[l][c]<0){
                    printf("Serao aceitas somente notas entre 0 e 10\n");
                    }else

            media+=AlunosNotas[l][c];
        }
        mediasAlunos[l]=media/numerodenotas;
        media=media*0;
    }
/*-----------*----------------*---------------*----------*/
   
    for(l=0;l<numeroalunos;++l){
        printf("As notas do aluno %i foram: ", l+1);
        for(c=0;c<numerodenotas;++c){
            printf("// %.2f //", AlunosNotas[l][c]);
        }
        printf(" MEDIA == %.2f\n", mediasAlunos[l]); 
        }
/*----------------*------------------*---------------------*/       

    return 0;
}