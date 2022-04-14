/*
Lendo um string da entrada padrão, com limite de caracteres:

fgets(string, tamanho, stdin);

• Lê da entrada padrão até tamanho-1 caracteres e copia para a
string s
• Interrompe a leitura se encontrar ‘\n’ ou fim de arquivo
– Não interrompe com espaço (ao contrário do scanf)
• Mais seguro que o scanf, pois evita que os caracteres lidos sejam
gravados depois do final do vetor
main()
{
char s[10];
fgets(s, 10, stdin);
printf("%s\n", s);
}

-------------------------------------------------------

Copiando uma string para outra

strcpy(string_destino, string_origem);

• Copia string_origem para string_destino
main()
{
char s1[20], s2[20];
scanf("%s", s1);
strcpy(s2, s1); // copia s1 para s2
printf("s1 = %s\ns2 = %s\n", s1, s2);
}

-------------------------------------------------------
Tamanho de uma string

strlen(string);

• Retorna o número de caracteres até o terminador
• O terminador não é contabilizado
main()
{
char s[20];
scanf("%s", s);
printf("Voce digitou %d caracteres.\n", strlen(s));
}

--------------------------------------------------------

Concatenação de duas strings

strcat(string1, string2);

• Copia o conteúdo de string2 para o final de string1
• String2 permanece inalterada
main()
{
char s1[20], s2[20];
printf("s1 = "); scanf("%s", s1);
printf("s2 = "); scanf("%s", s2);
strcat(s1, s2);
printf("s1 = %s\ns2 = %s\n", s1, s2);
}
---------------------------------------------------------
Comparação de duas strings

strcmp(string1, string2);

• Retorna 0 se as duas strings são iguais
• Retorna –1 se a posição de string1 no dicionário é MENOR que a
posição de string2
• Retorna +1 se a posição de string1 no dicionário é MAIOR que a
posição de string2
main()
{
char s1[20], s2[20];
printf("s1 = "); scanf("%s", s1);
printf("s2 = "); scanf("%s", s2);
printf("comparacao de s1 com s2 = %d\n", strcmp(s1,s2));
}
*/