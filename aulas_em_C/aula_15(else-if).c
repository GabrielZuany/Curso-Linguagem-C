#include<stdio.h>

int main(){

    int idade;
    printf("Informar a idade: \n");
    scanf("%i", &idade);

    if(idade <=5){
        printf("bebe");
    }
    else if(idade>5 && idade <=10){
        printf("Crianca\n");
    }
    else if(idade>10 && idade <18){
        printf("Adolescente");
    }
    else if(idade>18 &&idade<=60){
        printf("Adulto");
    }
    else {
        printf("Idoso");
    }

    return 0;
}