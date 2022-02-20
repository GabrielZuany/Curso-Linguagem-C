#include<stdio.h>

int main(){
    int num1;
    int num2;
    
    printf("Digite dois valores: \n");
    scanf("%i %i", &num1, &num2);

    num1<num2 ? printf("%i e menor que %i", num1, num2):printf("%i e maior que %i", num1, num2);
    //num1 é menor que num2? Sim? Entao escreva.....:Não? Entao escreva...

return 0;
}