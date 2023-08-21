#include <stdio.h>
#define TAM 10

int preencherVetor(int *vetor)
{
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
}

int mostraVetor(int *vetor)
{

    for (int i = 0; i < TAM; i++)
    {
        printf("%4d", vetor[i]);
    }
}

int insertionSort(int *vetor)
{
    int aux, j;

    for (int i = 0; i < TAM - 1; i++)
    {
        if (vetor[i] > vetor[i + 1])
            ;
        aux = vetor[i + 1];
        vetor[i + 1] = vetor[i];
        vetor[i] = aux;
        j = i - 1;
        while (j >= 0)
        {
            if (aux < vetor[j])
            {
                vetor[j + 1] = vetor[j];
            }
        }
    }
}

int main()
{

    int vetor[TAM];
    int i, aux;

    preencherVetor(vetor);

    printf("Ordem atual do vetor: ");
    mostraVetor(vetor);

    bubbleSort(aux, vetor);

    printf("\nVetor em ordem crescente: ");
    mostraVetor(vetor);

    return 0;
}