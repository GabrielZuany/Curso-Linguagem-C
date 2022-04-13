#include <stdio.h>

int main(void){

    //char palavra[7]={"Brasil"}; //char palavra[7]={"Brasil\0"}, em que \0 significa caractere nulo
    
    //char palavra[]={"Brasil"};
    char palavra[]="Brasil";

    printf("%s\n", palavra);//%s da printf numa string
    
    getchar();
    return 0;
}