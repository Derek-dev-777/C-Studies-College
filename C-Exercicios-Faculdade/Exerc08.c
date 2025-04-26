#include <stdio.h>

/*
P8) Escreva um programa que escaneia um valor em ponto flutuante. Em seguida,
 escaneie um segundo número e some ao número anterior, salve e imprima essa soma.
  Enquanto o número digitado for diferente de 0 o programa deverá continuar a soma de forma infinita. 
	Ex: Se o usuário digitar 1 2 3 4 5 0   o resultado será 3 6 10 15

*/

int main(){

    // Criamos as variaveis de acordo com o enunciado
    float A, B;

    // Pegamos os valores digitados pelo usuario
    printf("Digite um primeiro valor: ");
    scanf("%f", &A);

    // Esse scanf foi necessario ser colocado fora do while tambem pois se B nao tiver um valor antes do while
    // o computador entende q B tem é como se fosse um "lixo", e o programa da close antes de executar.
    printf("Digite um valor para somar com o primeiro valor ou digite 0 para fechar o programa: ");
    scanf("%f", &B);

    // Fazendo um while enquanto B for diferente de 0
    while (B != 0)
    {   A += B;
        printf("Valor atual da soma: %.2f", A);

        printf("Digite um valor para somar com o primeiro valor ou digite 0 para fechar o programa: ");
        scanf("%f", &B);

    }
    
    // Valor da soma final
    printf("Programa encerrado, valor total da soma foi: %.2f", A);

}