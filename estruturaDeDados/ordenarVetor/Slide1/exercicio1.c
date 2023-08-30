#include <stdio.h>
#define TAM 5

int preencherVetor(int *vetor) {

    printf("Digite %d numeros diferentes: ", TAM);
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &vetor[i]);
    }
}

int mostrarVetor(int *vetor) {
    for(int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
}

int bubbleSort(int *vetor) {

    int aux;

    for(int i = 0; i < TAM - 1; i++) {
        for(int j = i + 1; j < TAM; j++) {
            if(vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

int selectionSort(int *vetor) {
    int aux, menor;

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

int main() {

    int vetor[TAM];

    preencherVetor(vetor);
    printf("Vetor fora de ordem\n");
    mostrarVetor(vetor);

    bubbleSort(vetor);
    printf("\nVetor ordenado com Bubble Sort\n");
    mostrarVetor(vetor);

    selectionSort(vetor);
    printf("\nVetor ordenado com Selection Sort\n");
    mostrarVetor(vetor);

    return 0;
}
