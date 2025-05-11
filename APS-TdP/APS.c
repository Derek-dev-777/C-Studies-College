#include <stdio.h>

// Função para mostrar o estado das torres
void mostrarTorres(char t1[3], char t2[3], char t3[3])
{
    printf("\nEstado das torres:\n");
    printf("Torre 1: %c %c %c\n", t1[0], t1[1], t1[2]);
    printf("Torre 2: %c %c %c\n", t2[0], t2[1], t2[2]);
    printf("Torre 3: %c %c %c\n", t3[0], t3[1], t3[2]);
}

int topo(char torre[3])
{
    for (int i = 0; i < 3; i++)
    {
        if (torre[i] != ' ')
        {
            return i;
        }
    }
    return 3; // torre vazia
}

int podeMover(char origem[3], char destino[3])
{
    int to = topo(origem);
    int td = topo(destino);

    if (to == 3)
        return 0; // origem vazia
    if (td == 3)
        return 1; // destino vazia

    return origem[to] < destino[td]; // só pode se disco for menor
}

void mover(char origem[3], char destino[3])
{
    int to = topo(origem);
    int td = topo(destino);
    destino[td - 1] = origem[to];
    origem[to] = ' ';
}

int main()
{
    char torre1[3] = {'C', 'B', 'A'};
    char torre2[3] = {' ', ' ', ' '};
    char torre3[3] = {' ', ' ', ' '};
    int origem, destino;
    int jogadas = 0;

    while (1)
    {
        mostrarTorres(torre1, torre2, torre3);

        printf("\nDigite a torre de origem (1-3): ");
        scanf("%d", &origem);
        printf("Digite a torre de destino (1-3): ");
        scanf("%d", &destino);

        char *tO, *tD;
        if (origem == 1)
            tO = torre1;
        else if (origem == 2)
            tO = torre2;
        else
            tO = torre3;

        if (destino == 1)
            tD = torre1;
        else if (destino == 2)
            tD = torre2;
        else
            tD = torre3;

        if (podeMover(tO, tD))
        {
            mover(tO, tD);
            jogadas++;
        }
        else
        {
            printf("Movimento inválido! Tente novamente.\n");
        }

        // Verifica vitória
        if (torre3[0] == 'C' && torre3[1] == 'B' && torre3[2] == 'A')
        {
            mostrarTorres(torre1, torre2, torre3);
            printf("\nParabéns! Você completou o jogo em %d jogadas.\n", jogadas);
            break;
        }
    }

    return 0;
}