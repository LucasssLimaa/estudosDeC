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
        printf("[%d] ", vetor[i]);
    }
}

void troca(int *x, int *y) {

    int aux = *x;
    *x = *y;
    *y = aux;
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

void quickSort(int vetor[], int inicio, int fim) {

    if(inicio < fim) {
        int pivo = divisao(vetor, inicio, fim);
        quickSort(vetor, inicio, pivo - 1);
        quickSort(vetor, pivo + 1, fim);
    }
}

void merge(int vetor[], int inicio, int meio, int fim) {
    
    int i, vetorAux[TAM], posInicial = inicio, vetorEsq = inicio, vetorDir = meio + 1;

    while(vetorEsq <= meio && vetorDir <= fim) {

        if(vetor[vetorEsq] < vetor[vetorDir]) {
            vetorAux[posInicial] = vetor[vetorEsq];
            vetorEsq++;
        } else {
            vetorAux[posInicial] = vetor[vetorDir];
            vetorDir++;
        }
        posInicial++;
    }

    for(i = vetorEsq; i <= meio; i++) {
        vetorAux[posInicial] = vetor[i];
        posInicial++;
    }

    for (i = vetorDir; i <= fim; i++) {
        vetorAux[posInicial] = vetor[i];
        posInicial++;
    }

    for(int i = inicio; i <= fim; i++) {
        vetor[i] = vetorAux[i];
    }
}

void mergeSort(int vetor[], int inicio, int fim) {

    if(inicio < fim) {
        int meio = (inicio + fim) / 2;
        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, fim);
        merge(vetor, inicio, meio, fim);
    }
}

int main() {

    int vetor[TAM];

    preencherVetor(vetor);

    printf("Vetor desordenado: ");
    mostrarVetor(vetor);

    mergeSort(vetor, 0, TAM - 1);
    printf("\nVetor ordenado pelo Merge Sort: ");
    mostrarVetor(vetor);

    printf("\n\n");
    preencherVetor(vetor);

    printf("\nVetor desordenado: ");
    mostrarVetor(vetor);

    quickSort(vetor, 0, TAM - 1);
    printf("\nVetor ordenado pelo Quick Sort: ");
    mostrarVetor(vetor);

    return 0;
}