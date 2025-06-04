#include <stdio.h>
#include <stdbool.h>

bool numeros_amigos(int a, int b)
{
    int soma_a = 0, soma_b = 0;

    // Soma dos divisores de a.
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            soma_a += i;
        }
    }

    // Soma dos divisores de b.
    for (int i = 1; i < b; i++)
    {
        if (b % i == 0)
        {
            soma_b += i;
        }
    }

    // Verificando se os numeros sao amigos ou não.
    if (soma_a == b && soma_b == a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // Declarando variaveis e scaneando os numeros.
    int a, b;
    bool resultado;

    printf("Digite dois numeros: ");
    scanf("%d", &a);
    scanf("%d", &b);

    // Fazendo o uso da função.
    resultado = numeros_amigos(a, b);

    // Mostrando o resultado para o usuario.
    if (resultado)
    {
        printf("Os numeros sao amigos!\n");
    }
    else
    {
        printf("Os numeros NAO sao amigos.\n");
    }

    return 0;
}