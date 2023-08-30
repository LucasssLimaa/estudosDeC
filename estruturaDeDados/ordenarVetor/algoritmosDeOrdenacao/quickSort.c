#include <stdio.h>
#define TAM 10

int preencherVetor(int vetor[]) {

    printf("Digite %d numeros diferentes: ", TAM);
    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", &vetor[i]);
    }
}

int mostrarVetor(int vetor[]) {

    for (int i = 0; i < TAM; i++)
    {
        printf("%4d", vetor[i]);
    }
}

int quickSort(int vetor[], int inicio, int fim) {
    
}

int main() {

    int vetor[TAM];

    preencherVetor(vetor);

    printf("Ordem atual do vetor: ");
    mostrarVetor(vetor);

    mergeSort(vetor, 0, TAM - 1);

    printf("\nVetor em ordem crescente: ");
    mostrarVetor(vetor);

    return 0;
}