/*OBS: NECSSARIO CONHECIMENTOS DE PONTEIROS!(terminar no futuro)

Elabore um programa que gerencie os registros de 20 funcionarios,
contendo os campos matrícula, nome e salário.
Esse programa deve ser capaz de:
Cadastrar os funcionários e classificar por matrícula;
Pesquisar um funcionário pelo número de matrícula;
Apresentar de forma ordenada os registos dos funcionários que recebem 
mais de R$1000,00, menos de R$1000,00 e exatamente R$1000,00;
Encerrar a execução do programa.
*/
#include <stdlib.h>
#include<stdio.h>

char nome[50], temp[10];
char caractere;
int matricula = 0;
float salario = 0.0;
int i = 0, j = 0;

int main(void){

    struct dados {
        char nome[50];
        int matricula;
        float salario;
    };

    struct dados funcionarios[5];

    for(i=0; i<5; ++i){
        printf("Digite o nome do funcionario %i: ", i+1);
        fgets(funcionarios[i].nome, 50, stdin);
        fflush(stdin);

        printf("Digite o numero de matricula do funcionario %i: ", i+1);
        scanf("%i", &funcionarios[i].matricula);

        printf("Digite o salario do funcionario %i: ", i+1);
        scanf("%f", &funcionarios[i].salario);

        printf("\n");
        
        fgets(temp, 10, stdin);
        fflush(stdin);
    }

    for(i=0; i<5; ++i){
        printf("Funcionario %i: %s", i+1, funcionarios[i].nome);
        printf("Matricula: %i\n", funcionarios[i].matricula);
        printf("Salario: %.2f\n\n", funcionarios[i].salario);
    }
    
    return 0;

}

/*
void*bsearch(const void*, const void*, size_t, size_t, int(*)(const void*, const void*));//pesquisa binaria=====>Conhecimentos de ponteiros
void qsort(void*, size_t,size_t, int(*)(const void*, const void*));//ordenacao=====>Conhecimentos em ponteiros
*/