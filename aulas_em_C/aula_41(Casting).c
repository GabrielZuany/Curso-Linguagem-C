#include <stdio.h>

int main(void){

    int x =16;
    int y = 3;

    float resultado = (float)x/y; /*ao colocar (tipo)x/y, eu forcei a linguagem a entender o valor x como float, mesmo que ele tenha sido definido como int. Isso é o casting*/

    printf("%f\n", resultado);

    getchar();
    return 0;
}