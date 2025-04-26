#include <stdio.h>

/*
P5) Ler dois valores para as variáveis A e B, e efetuará  troca dos valores de forma que a variável
A passe a possuir o valor de B, e B passe a ter o valor de A. Para isso use no máximo 1 variável auxiliar.
 Apresente os valores trocados.
*/


int main(){
    // Declarando as variaveis.
    int A, B, C;


    // Abaixo temos o dialogo para atribuir os devidos valores digitados pelo usuario nas variaveis criadas.
    printf("Digite o valor de A:\n");
    scanf("%d", &A);

    printf("Digite o valor de B: \n");
    scanf("%d", &B);

    // Fazendo a inversão dos valores, utilizando apenas 1 variavel auxiliar.
    C = A;
    A = B ;
    B = C;

    // Saida dos valores apos a troca .
    printf("Valor de A depois da troca: %d \n", A);
    printf("Valor de B depois da troca: %d", B);


}