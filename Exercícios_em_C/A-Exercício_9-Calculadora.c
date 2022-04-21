/* >>> Fazer um programa que lê um valor, um operador (+,-,*,/) e outro valor e
imprime o resultado da expressão:
 <valor 1> <operador> <valor 2>*/

#include<stdio.h>

int main(void){
    
    char operador;
    float num1;
    float num2;
    float resultado;

    printf("Digite a operacao que deseja realizar: \n");
    scanf("%f", &num1);
    scanf("%c", &operador);
    scanf("%f", &num2);

    if(operador == '+'){
        resultado = num1+num2;
        printf("%.2f", resultado);
        } 
        else if (operador=='-'){
            resultado = num1-num2;
            printf("%.2f", resultado);
            }
            else if(operador=='/'){
                resultado = num1/num2;
                printf("%.2f", resultado);
                }
                else if(operador == '*'){
                    resultado = num1*num2;
                    printf("%.2f", resultado);
                }
    else printf("Dados inválidos! Por favor selecione um dos operadores válidos. (+, -, /, *)");

    getchar();
    return 0;
}
