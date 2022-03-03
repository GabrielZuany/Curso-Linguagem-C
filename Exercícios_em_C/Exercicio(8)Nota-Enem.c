#include<stdio.h>

int main(void){

    float nota[5]={0};//notas das materias
    int pr;
    int pm;
    int pl;
    int pn;
    int ph; //pesos das materias
    float soma;

    printf("Bem vindo ao calculador de nota do Enem!\nDigite suas notas para saber as medias em cada curso da UFES:\n");
    printf("1)Redacao: \n");
    printf("2)Matematica: \n");
    printf("3)Linguagens: \n");
    printf("4)Natureza: \n");
    printf("5)Humanas: \n");

    int i;
    for(i=0; i<5; ++i){
        scanf("%f", &nota[i]);
    }
    /*==================================E==X==A==T==A==S==============================*/

    printf("###EXATAS###\n\n");

    /*---------ADMINISTRAÇÃO---------*/
    pm=3;pr=4; pl=3; pn=2; ph=3;
    soma = ((nota[0]*pm)+(nota[1]*pr)+(nota[2]*pl)+(nota[3]*pn)+(nota[4]*ph))/(pm+pr+pl+pn+ph);
    printf("Administracao: %.2f\n", soma);
    /*--------------------------*/

    /*--------ENGENHARIAS---------*/
    soma==soma*0;
    pm=5;pr=4; pl=2; pn=3; ph=1;
    soma = ((nota[0]*pm)+(nota[1]*pr)+(nota[2]*pl)+(nota[3]*pn)+(nota[4]*ph))/(pm+pr+pl+pn+ph);
    printf("Ciencia da Computacao: %.2f\n", soma);
    printf("Engenharia da Computacao: %.2f\n", soma);
    printf("Engenharia Civil: %.2f\n", soma);
    printf("Engenharia de Producao: %.2f\n", soma);
    printf("Engenharia Mecanica: %.2f\n", soma);
    printf("Engenharia Eletrica: %.2f\n", soma);
    soma==soma*0;
    pm=5;pr=4; pl=1; pn=4; ph=1;
    soma = ((nota[0]*pm)+(nota[1]*pr)+(nota[2]*pl)+(nota[3]*pn)+(nota[4]*ph))/(pm+pr+pl+pn+ph);
    printf("Engenharia Quimica: %.2f\n", soma);
    /*---------------------------*/

    /*----------MATEMATICA-----------*/
    soma==soma*0;
    pm=5;pr=4; pl=2; pn=2; ph=2;
    soma = ((nota[0]*pm)+(nota[1]*pr)+(nota[2]*pl)+(nota[3]*pn)+(nota[4]*ph))/(pm+pr+pl+pn+ph);
    printf("Matematica: %.2f", soma);
    /*-----------------------------*/

    /*-----------FÍSICA------------*/
    soma==soma*0;
    pm=3.5;pr=4; pl=2; pn=3.5; ph=2;
    soma = ((nota[0]*pm)+(nota[1]*pr)+(nota[2]*pl)+(nota[3]*pn)+(nota[4]*ph))/(pm+pr+pl+pn+ph);
    printf("Fisica: %.2f\n\n", soma);
    /*-----------------------------*/

    /*==============================B==I==O==L==O==G==I==C==A==S===================================*/

     printf("###BIOLOGICAS###\n\n");

    /*----------CIENCIAS--------*/
    soma==soma*0;
    pm=3;pr=4; pl=2; pn=4; ph=2;
    soma=((nota[0]*pm)+(nota[1]*pr)+(nota[2]*pl)+(nota[3]*pn)+(nota[4]*ph))/(pm+pr+pl+pn+ph);
    printf("Ciencias Biologicas: %.2f\n", soma);
    /*--------------------------*/

    /*---------ENF/MED/ODO------*/
    soma==soma*0;
    pm=2;pr=4; pl=3; pn=4; ph=2;
    soma=((nota[0]*pm)+(nota[1]*pr)+(nota[2]*pl)+(nota[3]*pn)+(nota[4]*ph))/(pm+pr+pl+pn+ph);
    printf("Enfermagem e Obistetricia: %.2f\n", soma);
    printf("Medicina: %.2f\n", soma);
    printf("Odontologia: %.2f\n", soma);
    /*--------------------------*/

    /*--------FARMACIA----------*/
    soma==soma*0;
    pm=3;pr=4; pl=3; pn=3; ph=2;
    soma=((nota[0]*pm)+(nota[1]*pr)+(nota[2]*pl)+(nota[3]*pn)+(nota[4]*ph))/(pm+pr+pl+pn+ph);
    printf("Farmacia: %.2f\n", soma);
    /*--------------------------*/

    /*-------QUÍMICA------------*/
    soma==soma*0;
    pm=3;pr=4; pl=3; pn=4; ph=1;
    soma=((nota[0]*pm)+(nota[1]*pr)+(nota[2]*pl)+(nota[3]*pn)+(nota[4]*ph))/(pm+pr+pl+pn+ph);
    printf("Quimica: %.2f\n", soma);
    /*--------------------------*/

    /*-------NUTRICAO-----------*/
    soma==soma*0;
    pm=2;pr=4; pl=2; pn=5; ph=2;
    soma=((nota[0]*pm)+(nota[1]*pr)+(nota[2]*pl)+(nota[3]*pn)+(nota[4]*ph))/(pm+pr+pl+pn+ph);
    printf("Nutricao: %.2f\n", soma);
    /*--------------------------*/

    /*--------MEDVET------------*/
    soma==soma*0;
    pm=2;pr=4; pl=2; pn=2; ph=2;
    soma=((nota[0]*pm)+(nota[1]*pr)+(nota[2]*pl)+(nota[3]*pn)+(nota[4]*ph))/(pm+pr+pl+pn+ph);
    printf("Medicina Veterinaria: %.2f\n", soma);
    /*--------------------------*/

    /*=====================================H==U==M==A==N==A==S=====================================*/


    
    return 0;

}