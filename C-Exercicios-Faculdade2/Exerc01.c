#include <stdio.h>

// Função para checar o menor  numero.
int menor_numero(int x, int y)
{
    // Checa se os numeros sao iguais.
    if (x == y)
    {
        printf("Os numeros sao iguais: %d\n", x);
        return x;
    }
    // Checa se x é maior que y, e retorna os devidos valores ( o menor ).
    else if (x > y)
    {
        return y;
    }
    else
    {
        return x;
    }
}

// Função principal.
int main()
{

    // Declarando as variaveis + scanneando os numeros do usuario.
    int numero1, numero2, menor;

    printf("Digite o primeiro numero:\n ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero:\n ");
    scanf("%d", &numero2);

    // Passando os parametros da função, e mostrando o resultado da função na tela do usuario.
    menor = menor_numero(numero1, numero2);
    printf("O menor numero é: %d\n", menor);

    return 0;
}