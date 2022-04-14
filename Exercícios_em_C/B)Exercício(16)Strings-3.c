/*
Leia 5 strings e depois imprima cada uma delas;
Depois de ler as 5 strings, leia mais uma string e
verifique se ela está no vetor.
*/

#include <stdio.h>
#include <string.h>

int main(void){

    char string1 [20];
    char string2 [20];
    char string3 [20];
    char string4 [20];
    char string5 [20];
    char stringDIGITADA[20];
    printf("Digite a string 1: ");
    fgets(string1, 20, stdin);
    printf("Digite a string 2: ");
    fgets(string2, 20, stdin);
    printf("Digite a string 3: ");
    fgets(string3, 20, stdin);
    printf("Digite a string 4: ");
    fgets(string4, 20, stdin);
    printf("Digite a string 5: ");
    fgets(string5, 20, stdin);
    printf("Digite a string final: \n");
    fgets(stringDIGITADA, 20, stdin);

    int comp =strcmp(stringDIGITADA, string1);
    int comp2 =strcmp(stringDIGITADA, string2);
    int comp3 =strcmp(stringDIGITADA, string3);
    int comp4 =strcmp(stringDIGITADA, string4);
    int comp5 =strcmp(stringDIGITADA, string5);
    if(comp==0 || comp2==0|| comp3==0 || comp4==0 || comp5==0){
        printf("A string 6 esta contida em pelo menos uma das outras cinco digitadas\n");
    }else{
        printf("Palavra nao encontrada.\n");
    }
    getchar();
    return 0;
}