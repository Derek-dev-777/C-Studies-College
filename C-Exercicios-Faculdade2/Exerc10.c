#include <stdio.h>

int main()
{

    int i, n, m, **matriz;
    scanf("%d %d", &n, &m);

    matriz = malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
        matriz[i] = malloc(m * sizeof(int));

    /*
    1 - Explique por que matriz é declarada com int **matriz.

    R: Porque estamos trabalhando com uma alocação dinâmica de memória, criando uma matriz.

    2 - Por que temos duas linhas com malloc?

    R: Estamos realizando duas alocações distintas, cada uma com um propósito específico
    um para representar as linhas da matriz, e o outro os elementos.

    3 - Por que na 4a linha o parâmetro do sizeof é (int *), enquanto na linha 6 o parâmetro do sizeof é (int).

    R : Na 4° linha usamos sizeof(int *) porque estamos alocando ponteiros para inteiros
    ja na 6° linha usamos sizeof(int) porque estamos alocando inteiros para as linhas da matriz

    4 - E por que o malloc da linha 6 está dentro de um laço for, enquanto que o da linha 4 não está dentro do laço for?

    R: O malloc da 6° linha está dentro do for porque precisamos alocar espaço para cada linha da matriz, e são várias
    ja na 4° linha é feito só uma vez, pois aloca o vetor de ponteiros para as linhas.

    */
}