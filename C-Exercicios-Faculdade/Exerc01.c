#include <stdio.h>

/*
4) Desenhe o fluxograma de um programa que conte os numeros de 1 a 50, 
e a cada linha imprima: "Fizz" se o numero for multiplo de 3, "Buzz" se for multiplo de 5,
"FizzBuzz" se for multiplo de 3 e 5, e o numero em si da contagem caso nenhuma das condi��es 
anteriores forem atendidas. Você não deve imprimir o número da contagem se imprimir "Fizz", "Buzz" ou "FizzBuzz".
*/

int main() {
    int numero;

    // For que fará as repetições de 1 a 50
    for(numero = 1; numero <= 50; numero++) {

        // Verificando se o numero atual é multiplo de 3 ou 5, para imprimir FizzBuzz
        if(numero % 3 == 0 && numero % 5 == 0) {
            printf("FizzBuzz\n");
        }
        // Verificando se o numero atual é multiplo de 3, para imprimir Fizz
        else if(numero % 3 == 0) {
            printf("Fizz\n");
        }
        // Verifica se o numero atual é multiplo de 5, para imprimir Buzz
        else if(numero % 5 == 0) {
            printf("Buzz\n");
        }
        // Se não tiver multiplo de nenhum numero, ele mostrará apenas o numero atual do laço
        else {
            printf("%d\n", numero);
        }
    }

}   
