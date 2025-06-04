#include <stdio.h>

// Função para contar as sequencias dentro da lista.
int contador_de_sequencias(int vetor_n[], int tamanho_n, int vetor_m[], int tamanho_m)
{
    int contador = 0;

    // Percorre o vetor_m até onde cabe a sequência vetor_n
    for (int i = 0; i <= tamanho_m - tamanho_n; i++)
    {

        int j;

        // Compara os elementos de vetor_n com a parte correspondente de vetor_m
        for (j = 0; j < tamanho_n; j++)
        {
            if (vetor_m[i + j] != vetor_n[j])
            {
                break;
            }
        }

        // Se comparou todos os elementos, encontrou uma ocorrência
        if (j == tamanho_n)
        {
            contador++;
        }
    }

    return contador;
}

int main()
{

    int tamanho_vetor_n, tamanho_vetor_m;

    printf("Digite o tamanho da primeira sequencia (N)\n");
    scanf("%d", &tamanho_vetor_n);

    printf("Digite o tamanho da segunda sequencia (M)\n");
    scanf("%d", &tamanho_vetor_m);

    int vetor_n[tamanho_vetor_n], vetor_m[tamanho_vetor_m];

    printf("Digite os elementos da primeira sequencia (N):\n");
    for (int i = 0; i < tamanho_vetor_n; i++)
    {
        scanf("%d", &vetor_n[i]);
    }

    printf("Digite os elementos da segunda sequencia (M):\n");
    for (int i = 0; i < tamanho_vetor_m; i++)
    {
        scanf("%d", &vetor_m[i]);
    }

    int resultado = contador_de_sequencias(vetor_n, tamanho_vetor_n, vetor_m, tamanho_vetor_m);

    printf("Resultado: %d\n", resultado);

    return 0;

    return 0;
}