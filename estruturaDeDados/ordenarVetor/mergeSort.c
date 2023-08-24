#include <stdio.h>
#define TAM 10

int preencherVetor(int vetor[]) {

    printf("Digite %d numeros diferentes: ", TAM);
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &vetor[i]);
    }
}

int mostrarVetor(int vetor[]) {

    for (int i = 0; i < TAM; i++) {
        printf("%4d", vetor[i]);
    }
}

int merge(int vetor[], int inicio, int meio, int fim) {

    int i, aux[TAM], posLivre = inicio, vetorEsquerda = inicio, vetorDireita = meio + 1;

    while (vetorEsquerda <= meio && vetorDireita <= fim) {

        if (vetor[vetorEsquerda] > vetor[vetorDireita]) {
            aux[posLivre] = vetor[vetorDireita];
            vetorDireita++;
        }
        else {
            aux[posLivre] = vetor[vetorEsquerda];
            vetorEsquerda++;
        }

        posLivre++;
    }

    for (i = vetorEsquerda; i <= meio; i++)
    {
        aux[posLivre] = vetor[i];
        posLivre++;
    }

    for (i = vetorDireita; i <= fim; i++)
    {
        aux[posLivre] = vetor[i];
        posLivre++;
    }

    for (i = inicio; i <= fim; i++)
    {
        vetor[i] = aux[i];
    }
}

int mergeSort(int vetor[], int inicio, int fim) {

    int meio;

    if (inicio < fim) {
        meio = (inicio + fim) / 2;
        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, fim);
        merge(vetor, inicio, meio, fim);
    }
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