#include <stdio.h>

// Função que calcula o mínimo e máximo de um vetor.
void CalculaMinimoEMaximo(int vetor[], int tamanho, int *minimo, int *maximo)
{
    // declarando o ponto inicial para comparações.
    *minimo = vetor[0];
    *maximo = vetor[0];

    for (int i = 1; i < tamanho; i++)
    {
        // Primeiro verificamos o minimo.
        if (vetor[i] < *minimo)
        {
            *minimo = vetor[i];
        }
        // Segundo verificamos o maximo.
        if (vetor[i] > *maximo)
        {
            *maximo = vetor[i];
        }
    }
}

int main()
{
    // Vetor para exemplo.
    int vetor[] = {4, 9, 2, 7, 5, 3};
    int tamanho = 6;

    // Variáveis locais inicialmente zeradas.
    int minimo = 0, maximo = 0;

    // Chamando a função para calcular minimo e maximo.
    CalculaMinimoEMaximo(vetor, tamanho, &minimo, &maximo);

    // Mostrando os resultados.
    printf("Minimo: %d\n", minimo);
    printf("Maximo: %d\n", maximo);

    return 0;
}