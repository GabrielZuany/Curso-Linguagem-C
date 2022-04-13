#include<stdio.h>

int main(){

    void imprimaMensagem(void); //função declarada
    imprimaMensagem(); //chamar a função

    getchar();
    return 0;
}

void imprimaMensagem(void) {

    printf("teste");

}



/*
#include<stdio.h>


void imprimaMensagem(void) {

    printf("teste");

}

int main(){

    imprimaMensagem(); //chamar a função

    return 0;
}

*/