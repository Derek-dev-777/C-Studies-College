#include <stdio.h>

/*
P4) Dada uma aplicação financeira com depósito inicial dado por ini reais, um depósito mensal dado por mensal reais,
uma taxa de juros mensais dado por j por cento ao mês e um número t de meses, determine o valor da aplicação após t meses.
Peça ao usuário definir todas as variáveis, e imprima o valor final com apenas 2 casas decimais.
*/

int main(){

    // Declarando as variaveis do programa
    float deposito_inicial, deposito_mensal, x, juros_em_porcentagem;
    int j, t, index;

    // Abaixo temos todos os dialogos necessarios para atribuir os valores do usuario nas variaveis acima
    printf("Digite o valor do deposito inicial: \n");
    scanf("%f", &deposito_inicial);

    printf("Digite o valor do deposito mensal: \n");
    scanf("%f", &deposito_mensal);

    printf("Agora digite a taxa de juros mensal: \n");
    scanf("%d", &j);

    printf("E por ultimo, digite a quantidade de meses da aplicação financeira: ");
    scanf("%d", &t);

    // pré calculos, convertendo o juros dado para porcentagem
    x = deposito_inicial;
    juros_em_porcentagem = j / 100.0;
    
    // um for com o calculo do juros mensal dentro, somamos +1 com o juros porcentagemm, e multiplicamos no deposito em loop
    for(index=1; index<=t; index++){
        x = (x + deposito_mensal)  * (1 + juros_em_porcentagem);

        printf("%02d° parcela - valor: %.2f\n", index, x);
    }

}