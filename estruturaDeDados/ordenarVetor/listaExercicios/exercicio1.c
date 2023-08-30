#include<stdio.h>
#define TAM 50

void preencherVetor(int vetor[]) {

    printf("Digite %d numeros diferentes: ", TAM);
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &vetor[i]);
    }
}

void mostrarVetor(int vetor[]) {

    for (int i = 0; i < TAM; i++) {
        printf("[%d]", vetor[i]);
    }

    printf("\n");
}

void algoritmo(int vetor[]) {

    int aux, menorPos;

    for (int i = 0; i < TAM - 1; i++) {
        for (int j = i + 1; j < TAM; j++) {
            if (vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
        mostrarVetor(vetor);
    }
}

int main() {

    int vetor[TAM];

    preencherVetor(vetor);

    printf("Ordem atual do vetor: ");
    mostrarVetor(vetor);

    algoritmo(vetor);

    printf("\nVetor em ordem crescente: ");
    mostrarVetor(vetor);

    return 0;
}