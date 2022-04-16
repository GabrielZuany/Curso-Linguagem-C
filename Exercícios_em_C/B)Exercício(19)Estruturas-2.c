/*Implemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e
armazene os dados em uma estrutura.*/

#include <stdio.h>
#include <string.h>

struct cadastro{
    char nome [50];
    int idade;
    char endereco [50];
};

int main(void){
    int i;
    struct cadastro pessoas[2];

    for(i=0;i<2;++i){
        printf("Digite seu nome: ");
        fgets(pessoas[i].nome,sizeof(pessoas[i].nome),stdin);
        fflush(stdin);

        printf("Digite sua idade: ");
        scanf("%i", &pessoas[i].idade);
        fflush(stdin);

        printf("Digite seu endereco: ");
        fgets(pessoas[i].endereco, sizeof(pessoas[i].endereco), stdin);
        fflush(stdin);

        printf("\n");
    }

    for(i=0;i<2;++i){
        printf("Nome: %sIdade: %i\nEndereco: %s\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].endereco);
    }
    getchar();
    return 0;
}