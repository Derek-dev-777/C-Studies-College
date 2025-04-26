#include <stdio.h>
/*
6) Desenhe o fluxograma de um programa que peça para o usuário digitar um valor de segundos,
 e converta-o e imprima na representação hh:mm:ss (horas:minutos:segundos).
  Ex: 123456s será impresso como 34h17m36s.
*/
int main(){

    // Declarando as variaveis do programa.
    int segundos_total, horas, minutos, segundos_restantes, resto;

    // Coletando a informação de segundos dada pelo usuario.
    printf("Digite o valor em segundos: \n");
    scanf("%d", &segundos_total);


    // Esses são os calculos usados , para converter os segundos informados em hh:mm:ss
    horas = segundos_total / 3600;
    resto = segundos_total % 3600;
    minutos = resto / 60;
    segundos_restantes = resto % 60;

    // Saida final, formatando a string para que a saida saia de maneira correta.
    printf("%02dh%02dm%02ds \n", horas, minutos, segundos_restantes);
}