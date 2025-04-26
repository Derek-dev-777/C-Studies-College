#include <stdio.h>

/*
P6) Escreva um programa que dado três números, imprima em ordem crescente.
*/
int main(){

    // Declarando as variaveis
    int A, B , C, numero_temporario;

    // Coletando os valores
    printf("Digite 3 valores: \n");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    // Aqui eu uso uma logica que foi um pouco de dificil de raciocinar, demorei um tempo e tive que fazer pesquisas.
    // mas basicamente utilizando a mesma logica de inverter os valores do exercicio 05, a gente repete aqui mas em outro contexto
    if (A > B) {
        numero_temporario = A;
        A = B;
        B = numero_temporario;
    }

    if (A > C) {
        numero_temporario = A;
        A = C;
        C = numero_temporario;
    }

    if (B > C) {
        numero_temporario = B;
        B = C;
        C = numero_temporario;
    }

    // aqui é a saida do programa, onde  colocamos os valores em ordem crescente
    printf("Valores em ordem crescente: %d, %d, %d\n", A, B, C);
}