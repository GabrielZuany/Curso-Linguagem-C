#include <stdio.h>

int main(){
    float metros;
    float decimetros;
    float centimetros;
    float milimetros;
    float decametros;
    float hectametros;
    float quilometros;
    int alternativa;

    printf("\nDigite a conversao que deseja realizar: \n\n");
    printf("1)Milimetros para outras unidades;\n");
    printf("2)Decimetros para outras unidades;\n");
    printf("3)Centimetros para outras unidades;\n");
    printf("4)Metros para outras unidades;\n");
    printf("5)Decametros para outras unidades;\n");
    printf("6)Hectametros para outras unidades;\n");
    printf("7)Quilometros para outras unidades;\n");
    scanf("%i", &alternativa);
    
    switch(alternativa){
        case 1: printf("Digite o valor em milimetros: \n");
                scanf("%f", &milimetros);
                printf("\n");
                centimetros = milimetros/10;
                decimetros = milimetros/100;
                metros = milimetros/1000;
                decametros = milimetros/10000;
                hectametros = milimetros/100000;
                quilometros = milimetros/1000000;

                printf("%.2f milimetros = %.2f centimetros.\n%.2f milimetros = %.2f decimetros.\n", milimetros, centimetros, milimetros, decimetros);
                printf("%.2f milimetros = %.3f metros.\n%.2f milimetros = %.4f decametros.\n",milimetros, metros, milimetros, decametros);
                printf("%.2f milimetros = %.5f hectametros.\n%.2f milimetros = %.6f quilometros.\n",milimetros, hectametros, milimetros, quilometros);

            break;
            
        case 2: printf("Digite o valor em decimetros: \n");
                scanf("%f", &decimetros);
                printf("\n");
                milimetros = decimetros*100;
                centimetros = decimetros*10;
                metros = decimetros/10;
                decametros = decimetros/100;
                hectametros = decimetros/1000;
                quilometros = decimetros/10000;

                printf("%.1f decimetros = %.1f milimetros.\n%.1f decimetros = %.2f centimetros.\n", decimetros, milimetros, decimetros, centimetros);
                printf("%.1f decimetros = %.3f metros.\n%.1f decimetros = %.4f decametros.\n",decimetros, metros, decimetros, decametros);
                printf("%.1f decimetros = %.5f hectametros.\n%.1f decimetros = %.6f quilometros.\n",decimetros, hectametros, decimetros, quilometros);

            break;
        
        case 3: printf("Digite o valor em centimetros: \n");
                scanf("%f", &centimetros);
                printf("\n");
                milimetros = centimetros*10;
                decimetros = centimetros/10;
                metros = centimetros/100;
                decametros = centimetros/1000;
                hectametros = centimetros/10000;
                quilometros = centimetros/100000;

                printf("%.2f centimetros = %.1f milimetros.\n%.2f centimetros = %.2f decimetros.\n", centimetros, milimetros, centimetros, decimetros);
                printf("%.2f centimetros = %.3f metros.\n%.2f centimetros = %.4f decametros.\n",centimetros, metros, centimetros, decametros);
                printf("%.2f centimetros = %.5f hectametros.\n%.2f centimetros = %.6f quilometros.\n",centimetros, hectametros, centimetros, quilometros);

            break;

        case 4: printf("Digite o valor em metros: \n");
                scanf("%f", &metros);
                printf("\n");
                milimetros = metros*1000;
                centimetros = metros*100;
                decimetros = metros*10;
                decametros = metros/10;
                hectametros = metros/100;
                quilometros = metros/1000;
                

                printf("%.2f metros = %.1f milimetros.\n%.2f metros = %.2f centimetros.\n", metros, milimetros, metros, centimetros);
                printf("%.2f metros = %.3f decimetros.\n%.2f metros = %.4f decametros.\n",metros, decimetros, metros, decametros);
                printf("%.2f metros = %.5f hectametros.\n%.2f metros = %.6f quilometros.\n",metros, hectametros, metros, quilometros);

            break;

        case 5: printf("Digite o valor em decametros: \n");
                scanf("%f", &decametros);
                printf("\n");
                milimetros = decametros*10000;
                centimetros = decametros*1000;
                decimetros = decametros*100;
                metros = decametros*10;
                hectametros = decametros/10;
                quilometros = decametros/100;

                printf("%.2f decametros = %.1f milimetros.\n%.2f decametros = %.2f centimetros.\n", decametros, milimetros, decametros, centimetros);
                printf("%.2f decametros = %.3f decimetros.\n%.2f decametros = %.4f metros.\n",decametros, decimetros, decametros, metros);
                printf("%.2f decametros = %.5f hectametros.\n%.2f decametros = %.6f quilometros.\n",decametros, hectametros, decametros, quilometros);

            break;

        case 6: printf("Digite o valor em hectametros: \n");
                scanf("%f", &hectametros);
                printf("\n");
                milimetros = hectametros*100000;
                centimetros = hectametros*10000;
                decimetros = hectametros*1000;
                metros = hectametros*100;
                decametros = hectametros*10;
                quilometros = hectametros/10;

                printf("%.2f hectametros = %.1f milimetros.\n%.2f hectametros = %.2f centimetros.\n", hectametros, milimetros, hectametros, centimetros);
                printf("%.2f hectametros = %.3f decimetros.\n%.2f hectametros = %.4f metros.\n",hectametros, decimetros, hectametros, metros);
                printf("%.2f hectametros = %.5f decametros.\n%.2f hectametros = %.6f quilometros.\n",hectametros, decametros, hectametros, quilometros);

            break;

        case 7: printf("Digite o valor em quilometros: \n");
                scanf("%f", &quilometros);
                printf("\n");
                milimetros = quilometros*1000000;
                centimetros = quilometros*100000;
                decimetros = quilometros*10000;
                metros = quilometros*1000;
                decametros = quilometros*100;
                hectametros = quilometros*10;

                printf("%.2f quilometros = %.1f milimetros.\n%.2f quilometros = %.2f centimetros.\n", quilometros, milimetros, quilometros, centimetros);
                printf("%.2f quilometros = %.2f decimetros.\n%.2f quilometros = %.2f metros.\n",quilometros, decimetros, quilometros, metros);
                printf("%.2f quilometros = %.2f decametros.\n%.2f quilometros = %.2f hectametros.\n",quilometros, decametros, quilometros, hectametros);

            break;

            default: printf("\n\nOpcao invalida! Execute o programa novamente.\n\n");
    }

    printf("\nFIM DO PROGRAMA.\n\n");
    
    getchar();
    return 0;
    
}
