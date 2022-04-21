/*
Leia duas strings. Se as strings forem iguais escreva
“strings iguais”. Caso contrário, concatene as duas
strings e imprima a string resultante.
*/

#include <stdio.h>
#include <string.h>

int main(void){
    char string1[20];
    char string2[20];

    fgets(string1, 20, stdin);
    fgets(string2, 20, stdin);
    int res = strcmp(string1, string2);
    if(res==0){
        printf("Sao iguais\n");
    }else {
        printf("string 1 + string 2 =%s", strcat(string1, string2));
    }

return 0;
}
