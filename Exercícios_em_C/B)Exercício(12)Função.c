/*Exercício: fazer um programa em "C" que solicita o total gasto pelo cliente de
uma loja, imprime as opções de pagamento, solicita a opção desejada e
imprime o valor total das prestações (se houverem).
 1) Opção: a vista com 10% de desconto
 2) Opção: em duas vezes (preço da etiqueta)
 3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras
acima de R$ 100,00).
OBS: fazer uma função que imprime as opções solicita a opção desejada e retorna
a opção escolhida. No programa principal, testar a opção escolhida e ativar a
função correspondente (uma função para cada opção)*/

#include <stdio.h>

int main(void){
    float res;
    float valor;
    int parcela;
    float juro;
    int opcao;
    
    printf("Digite o valor total da compra: \n");
    scanf("%f", &valor);

    printf("O valor da compra foi %.2f. Escolha uma das opcoes de pagamento:\n", valor);
    printf("1)A vista com 10%% de desconto;\n2)Em duas vezes (preco da etiqueta);\n3)De 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00).\n");
    scanf("%i", &opcao);

    float pagamento1(float valor);
    float pagamento2(float valor);
    float pagamento3(float valor);

    switch (opcao)
    {
        case 1: 
            res = pagamento1(valor);
            printf("O valor a ser pago e de %.2f \n", res);
        break;

        case 2:
            res = pagamento2(valor);
            printf("O valor a ser pago e 2x de %.2f\n", res);
        break;

        case 3:
        if(valor<100){
            printf("Essa opacao so esta disponivel para valores acima de $100,00.\n");
        }else
            printf("Selecione o numero de parcelas (3x ate 10x): \n");
            res = pagamento3(valor);
            printf("O valor a ser pago e %.2f por mes\n", res);
        break;
        
        default: printf("Escolha um das opcoes\n");
        break;
    }

    system("pause");
    return 0;
}

float pagamento1(float valor){
    float res = valor*0.9;
    return res;
}

float pagamento2(float valor){
    float res;
    return res = valor/2;
}

float pagamento3(float valor){
    int parcela;
    float res;
    float juro;
    scanf("%i", &parcela);

    if(parcela<3){
        printf("Valor invalido! O valor escolhido deve estar entre 3 e 10.;\n");
    }else if(parcela>10){
        printf("Valor invalido! O valor escolhido deve estar entre 3 e 10.;\n");
    }else{
    float pot(float juro, int parcela);
    juro = 1.03;
    res = valor*pot(juro, parcela);
    res /=parcela;
    return res;
    }
}

float pot (float juro, int parcela){
    float res;
    if(parcela==0){
        return 1;
    }else
    return res = juro*pot(juro, parcela-1);
}
