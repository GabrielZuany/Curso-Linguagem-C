#include <stdio.h>

int main(){
    int num;
    int resultado = 1;

    printf("Digite um valor: ");
    scanf("%i", &num);

    if(num<1){
        printf("O valor nao e valido");
    }else{

    for(num>=1 ; num>=1;--num){

        resultado = resultado*num;//ou resultado*=num
    }

    printf("Resultado = %i" , resultado);}
   
    return 0;
}
