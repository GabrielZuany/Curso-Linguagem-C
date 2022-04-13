#include <stdio.h>

int main(void){
    float notas[5] = {0};//valor inicial das notas = 0
    float total = 0;
    float media = 0;
    int i;

    printf("Digite as 5 notas do(a) aluno(a): \n");
    for(i=0; i<5; ++i){
        scanf("%f", &notas[i]);
    }
    for(i=0; i<5; ++i){
        total +=notas[i];//para i = 0, isto é, primeiro valor digitado: total = nota 0; para i = 1 (segunda nota digitada): total = nota 0 + nota 1...
    }
    media= total/5;

    printf("A media do(a) aluno(a) = %.2f", media);
    
    getchar();
    return 0;
}