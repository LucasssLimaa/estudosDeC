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

void insertionSort(int *vetor) {

    for(int i = 1; i < TAM; i++) {
        int chave = vetor[i];
        int j = i - 1;
        while(j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        } 
        vetor[j + 1] = chave;
    }
    
}

int main()
{

    int vetor[TAM];
    int i, aux;

    preencherVetor(vetor);

    printf("Ordem atual do vetor: ");
    mostraVetor(vetor);

    insertionSort(vetor);

    printf("\nVetor em ordem crescente: ");
    mostraVetor(vetor);

    return 0;
}