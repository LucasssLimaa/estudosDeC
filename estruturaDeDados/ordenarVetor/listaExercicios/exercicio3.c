#include <stdio.h>
#define TAM 5

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

    for(int i = 1; i < TAM; i++) {
        int chave = vetor[i];
        int j = i - 1;
        while(j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
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