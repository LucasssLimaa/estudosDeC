#include <stdio.h>
#define TAM 6

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
        while(j >= 0 && vetor[j] > chave) { // loop que permite percorrer o vetor para a esquerda.
            vetor[j + 1] = vetor[j]; // a posição atual recebe o mesmo valor da posição anterior.
            j = j - 1; // Altera o valor de J para que seja possível sair do loop ou comparar valores mais a esquerda
        } 
        vetor[j + 1] = chave;  //posiciona no lugar certo o elemento chave
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