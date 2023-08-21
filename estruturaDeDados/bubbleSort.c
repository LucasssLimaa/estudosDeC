#include <stdio.h>
#define TAM 10

int preencherVetor(int *vetor) {
    for (int i = 0; i < TAM; i++) {
        printf("Digite vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
}

int mostraVetor(int *vetor) {

    for (int i = 0; i < TAM; i++) {
        printf("%4d", vetor[i]);
    }
}

int bubbleSort(int *vetor) {
    int aux;
    
    for (int i = 0; i < TAM - 1; i++) {
        for (int j = i + 1; j < TAM; j++) {
            if (vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

int main() {

    int vetor[TAM];
    int i, aux;

    //Bubble Sort
    /*for(contador = 1; contador < TAM; contador++) {
        for(int i = 0; i < TAM - 1; i++) {
            if(vetor[i] > vetor[i + 1]) {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
        }
    }*/

    preencherVetor(vetor);

    printf("Ordem atual do vetor: ");
    mostraVetor(vetor);

    bubbleSort(vetor);

    printf("\nVetor em ordem crescente: ");
    mostraVetor(vetor);

    return 0;
}