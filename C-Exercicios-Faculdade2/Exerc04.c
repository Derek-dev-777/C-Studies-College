#include <stdio.h>

// Função para calcular a media da lista.
float media_lista(float vetor[], int tamanho)
{

    // Variavel de apoio para realizar somas.
    float soma = 0;

    // for  para somar os elementos dentro da lista.
    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
    }

    // Retornando a soma dos elementos dividido pelo tamanho do vetor.
    return soma / tamanho;
}

// Função principal.
int main()
{

    int tamanho_vetor;
    float media;

    // Coletando o numero de "materias".
    printf("Digite o numero de materias: ");
    scanf("%d", &tamanho_vetor);

    // Criando o vetor a partir do numero de materias.
    float vetor[tamanho_vetor];

    // Um for para coletar o as notas para cada materia.
    for (int i = 0; i < tamanho_vetor; i++)
    {
        printf("Digite as notas da materia %d : ", i + 1);
        scanf("%f", &vetor[i]);
    }

    // utilizando a função para obter a media.
    media = media_lista(vetor, tamanho_vetor);

    // Obtendo a media da lista.
    printf("A media aritmetica é: %.2f\n", media);

    return 0;
}