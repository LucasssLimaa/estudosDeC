#include <stdio.h>
#define TAM 10

int preencherVetor(int *vetor) {
    for (int i = 0; i < TAM; i++) {
        printf("Digite um numero: ", i);
        scanf("%d", &vetor[i]);
    }
}

int mostraVetor(int *vetor) {

    for (int i = 0; i < TAM; i++) {
        printf("%4d", vetor[i]);
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

    for(int j = inicio; j < TAM; j++) {
        if(vetor[j] <= pivo) {
            troca(&vetor[i], &vetor[j]);
            i++;
        } 
    }

    troca(&vetor[i], &vetor[fim]);

    return pivo;
}

void quickSort(int vetor[], int inicio, int fim) {

    if(inicio < fim) {
        int pivo = divisao(vetor, inicio, fim);
        quickSort(vetor, inicio, pivo - 1);
        quickSort(vetor, pivo + 1, fim);
    }
}

void buscaBinaria(int vetor[], int entrada, int inicio, int fim) {

    int meio = (inicio + fim) / 2;

    if(entrada == meio) {
        printf("O valor esta na posicao %d", meio + 1);
    } else {
        if(entrada < meio) {
            if(inicio == meio) {
                printf("Valor nao encontrado");
            } else {
                buscaBinaria(vetor, entrada, inicio, meio);
            }
        } else {
            if (inicio == fim) {
                printf("Valor nao encontrado");
            }
            else {
                buscaBinaria(vetor, entrada, meio + 1, fim);
            }
        }
    }
}

int main() {

    int vetor[TAM] = {9, 8, 7, 6, 5, 4, 3 ,2, 1, 0}, entrada;

    //Caso o vetor esteja desordenado, é necessário fazer a ordenação, aqui usei o Quick Sort.
    quickSort(vetor, 0, TAM - 1);
    mostraVetor(vetor);

    printf("\nDigite o valor que deseja encontrar no vetor: ");
    scanf("%d", &entrada);
    
    buscaBinaria(vetor, entrada, 0, TAM - 1);

    return 0;
}