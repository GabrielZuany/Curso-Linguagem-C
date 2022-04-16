/*
Escreva um trecho de codigo para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
• Horario: composto de hora, minutos e segundos.
• Data: composto de dia, mes e ano.
• Compromisso: composto de uma data, horario e texto que descreve o compromisso.
*/
#include<stdio.h>

int hora, minuto;
int dia, mes, ano;
char compromisso[50];
char caractere;
int i = 0;

int main (void){
    struct dados{
        int hora, minuto;
        int dia, mes, ano;
        char compromisso[50];
        char caractere;
    };

    printf("Descreva o compromisso: ");
    do{
        caractere=getchar();
        compromisso[i]=caractere;
        ++i;
    }while(caractere!='\n');

    struct dados agora;

    printf("Insira a hora do compromisso: \n");
    scanf("%i%i", &agora.hora, &agora.minuto);
    printf("Digite a data: \n");
    scanf("%i%i%i\n\n", &agora.dia, &agora.mes, &agora.ano);
    
    printf("Data: %i/%i/%i\n", agora.dia, agora.mes, agora.ano);
    printf("Horario: %i:%i\n", agora.hora, agora.minuto);
    printf("Descricao: %s\n", compromisso);

    getchar();
    return 0;
}