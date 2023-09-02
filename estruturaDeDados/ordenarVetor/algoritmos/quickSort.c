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

void troca(int *x, int *y) {

    int temp = *x;
    *x = *y;
    *y = temp;
}

int divisao(int vetor[], int inicio, int fim) {

    int pivo = vetor[fim];
    int i = inicio;

    for(int j = inicio; j < fim; j++) {
        if(vetor[j] <= pivo) {
            troca(&vetor[i], &vetor[j]); 
            i++;
        }
    }

    troca(&vetor[i], &vetor[fim]);

    return i;
}

void quickSort(int vetor[], int inicio, int fim)
{

    if (inicio < fim) {
        int pivo = divisao(vetor, inicio, fim);
        quickSort(vetor, inicio, pivo - 1);
        quickSort(vetor, pivo + 1, fim);
    }
}

int main() {

    int vetor[TAM];

    preencherVetor(vetor);

    printf("Ordem atual do vetor: ");
    mostrarVetor(vetor);

    quickSort(vetor, 0, TAM - 1);

    printf("\nVetor em ordem crescente: ");
    mostrarVetor(vetor);

    return 0;
}