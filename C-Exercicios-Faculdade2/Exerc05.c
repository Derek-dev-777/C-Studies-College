#include <stdio.h>
#include <math.h>

// Função que calcula o desvio padrão.
float desvio_padrao(float vetor[], int tamanho)
{
    float soma = 0.0, soma_quadrados = 0.0;

    // Calculando soma e soma dos quadrados.
    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
        soma_quadrados += vetor[i] * vetor[i];
    }

    // Aplicando a fórmula de desvio e retornando o valor no fim.
    float desvio = sqrt((1.0 / (tamanho - 1)) * (soma_quadrados - (soma * soma) / tamanho));

    return desvio;
}

// Função main.
int main()
{
    int n;

    // Definindo o tamanho do vetor a partir de um numero digitado pelo usuario.
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vetor[n];

    // Lendo os elementos que farão parte do vetor.
    for (int i = 0; i < n; i++)
    {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    // Chamando a função de desvio.
    float desvio = desvio_padrao(vetor, n);

    // Exibindo o resultado de desvio padrao.
    printf("O desvio padrao é: %.4f\n", desvio);

    return 0;
}
