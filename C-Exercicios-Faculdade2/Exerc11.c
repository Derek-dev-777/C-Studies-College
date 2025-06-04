#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int dado;
    struct no *prox;
} No;

typedef No *p_no;

// Função para adicionar elemento no início
p_no adicionar_elemento(p_no lista, int x)
{
    p_no novo = malloc(sizeof(No));
    novo->dado = x;
    novo->prox = lista;
    return novo;
}

// Função para adicionar elemento no final
p_no adicionar_elemento_fim(p_no lista, int x)
{
    p_no novo = malloc(sizeof(No));
    novo->dado = x;
    novo->prox = NULL;

    if (lista == NULL)
    {
        return novo;
    }

    p_no aux = lista;
    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }
    aux->prox = novo;

    return lista;
}

int main()
{
    p_no lista = NULL;

    lista = adicionar_elemento(lista, 1);
    lista = adicionar_elemento(lista, 2);
    lista = adicionar_elemento_fim(lista, 3);

    // Impressão da lista para verificar o resultado
    p_no aux = lista;
    while (aux != NULL)
    {
        printf("%d -> ", aux->dado);
        aux = aux->prox;
    }
    printf("NULL\n");

    return 0;
}