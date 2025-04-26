#include <stdio.h>

/*
P9) Escreva um programa que crie um vetor de N inteiros, no qual N é um número escolhido pelo usuário.
Em seguida peça ao usuário para escolher cada um dos valores do vetor. Ao finalizar imprima o vetor na ordem inversa.
*/
int main(){

    // Declaramos as variaveis.
    int N, i;

    // Coleto o tamanho do array desejavel pelo usuario.
    printf("Digite o tamanho desejado para o array: \n");
    scanf("%d", &N);

    // Crio o array alocando a variavel com o tamanho digitado.
    int meu_vetor[N];

    // Faço um for para que o usuario digite os valores que vao ser colocados dentro do array.
    for(i=0; i<=N; i++){
        
        printf("Digite os valores do vetor[%d]:\n", i);
        scanf("%d", &meu_vetor[i]);

    }
    
    // Por ultimo, utilizamos um for com index decrescente, que é usado para printar o respectivo valor do array
    // em ordem inversa.
    for (i=N; i >=0; i--){

        printf("%d ", meu_vetor[i]);
    }
}