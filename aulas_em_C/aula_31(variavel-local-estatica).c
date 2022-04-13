#include <stdio.h>

int gVariavelGlobal = 2;

int main(void){

    void teste(void);

    printf("Global = %i\n", gVariavelGlobal);
    teste();
    teste();

    getchar();
    return 0;
}

void teste(void){

    int variavelLocalAutomatica = 2; //VARIAVEL LOCAL AUTOMATICA
    variavelLocalAutomatica*=2;

    static int variavelLocalEstatica = 2; //VARIAVEL LOCAL ESTAICA
    variavelLocalEstatica*=2;

    gVariavelGlobal*=2;//SE COMPORTA COMO VARAVEL ESTATCA DENTRO DA VARIAVEL TESTE

    printf("Varivel Local Automatica = %i\n", variavelLocalAutomatica);
    printf("Varivel Local Estatica = %i\n\n", variavelLocalEstatica);
    printf("Global = %i\n", gVariavelGlobal);
}