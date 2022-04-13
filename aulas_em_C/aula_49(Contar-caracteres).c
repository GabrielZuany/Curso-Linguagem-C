#include <stdio.h>

int main(void){

    int tamanhostring(char string[]);
    char stringUsuario[20];

    printf("Digite uma palavra(string): \n");
    scanf("%s", &stringUsuario);

    int num = tamanhostring(stringUsuario);
    tamanhostring(stringUsuario);
    printf("A string %s possui %i letras e %i caracteres(4 carcateres principais e o caractere nulo\\0).\n", stringUsuario, num, num+1);

    getchar();
    return 0;
}
//---------------------\0 = caractere nulo, ultimo caractere---------------
int tamanhostring(char string[]){
    int numCaracteres = 0;

    while(string[numCaracteres] != '\0'){
        ++numCaracteres;
    }
    return numCaracteres;
}