#include <stdio.h>
#include <math.h>
// Funcao recursiva para resolver o problema das Torres de Hanoi
void hanoi(int n, char origem, char auxiliar, char destino)
{
    if (n == 1)
    {
        printf("Mova o disco A de Torre %c para Torre %c", origem, destino);
        getchar();
        return;
    }
    hanoi(n - 1, origem, destino, auxiliar);
    printf("Mova o disco %c de Torre %c para Torre %c", 'A' + n - 1, origem, destino);
    getchar();
    hanoi(n - 1, auxiliar, destino, origem);
}
int main()
{
    int discos = 0;
    printf("Insira a quantidade de discos: ");
    scanf("%d", &discos);
    getchar();
    printf("Torre 1: ");
    for (int disco = discos; disco >= 1; disco--)
    {
        printf("%c ", 'A' + disco - 1);
    }
    printf("\nTorre 2: vazia\nTorre 3: vazia\n");
    printf("\nJogadas:\n");
    hanoi(discos, '1', '2', '3');
    int total_movimentos = pow(2, discos) - 1;
    printf("Numero total de movimentos: %d\n", total_movimentos);
    return 0;
}
