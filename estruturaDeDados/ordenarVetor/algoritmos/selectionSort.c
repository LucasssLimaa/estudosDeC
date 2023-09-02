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

int selectionSort(int *vetor) {

    int menor, aux;

    for(int i = 0; i < TAM - 1; i++) {
        menor = i;
        for(int j = i + 1; j < TAM; j++) {
            if(vetor[menor] > vetor[j]) {
                menor = j;
            }
        }

        aux = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = aux;
    }
    
}

int main()
{

    int vetor[TAM];

    preencherVetor(vetor);

    printf("Ordem atual do vetor: ");
    mostraVetor(vetor);

    selectionSort(vetor);

    printf("\nVetor em ordem crescente: ");
    mostraVetor(vetor);

    return 0;
}