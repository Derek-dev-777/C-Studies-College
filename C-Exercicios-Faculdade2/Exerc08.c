#include <stdio.h>

// Função para duplicar corrigida.
void duplica(int *x)
{

    // Modifica o valor apontado pelo ponteiro.
    *x = 2 * (*x);
}

// Função principal.
int main()
{
    int x = 10;

    // Passa o endereço de x
    duplica(&x);

    printf("%d", x);
    return 0;
}