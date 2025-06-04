#include <stdio.h>
#include <math.h>

// Função para calcular a distancia entre dois pontos.
float distancia_dois_pontos(float x1, float y1, float x2, float y2)
{

    // Muitas variaveis pois quero deixar bem simples de entender.
    float diferenca1, diferenca2, quadrado1, quadrado2, soma_total, raiz_quadrada;

    // calculando a diferença entre os pontos.
    diferenca1 = x2 - x1;
    diferenca2 = y2 - y1;

    // elevando as diferenças ao quadrado.
    quadrado1 = pow(diferenca1, 2.0);
    quadrado2 = pow(diferenca2, 2.0);

    // somando ambos os resultados.
    soma_total = quadrado1 + quadrado2;

    // Encontrando a raiz quadrada dos resultados, e retornando-a.
    raiz_quadrada = sqrt(soma_total);

    return raiz_quadrada;
}

int main()
{
    // Declarando as variaveis.
    float x1, y1, x2, y2, resultado;

    // Obtendo os pontos para usar na função.
    printf("Digite os pontos na respectiva ordem 'x1, y1, x2, y2': \n");
    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);

    resultado = distancia_dois_pontos(x1, y1, x2, y2);

    // Recebendo o resultado da função.
    printf("A distancia entre os pontos é: %.2f", resultado);
}