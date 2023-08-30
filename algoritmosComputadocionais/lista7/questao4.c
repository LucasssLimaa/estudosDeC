/*
Faça uma função que receba como parâmetro um vetor de números reais e a quantidade de números
armazenados no vetor. Esta função deverá retornar a quantidade de números menores que o último
número armazenado no vetor
*/

#include <stdio.h>

int menorQueUltimo(float vetor[], int tamanho) {

    int menoresQueUltimo = 0;

    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] < vetor[tamanho - 1]){
            menoresQueUltimo += 1;
        } 
    }

    return menoresQueUltimo;
}

int main()
{

    float vetor[] = {1, 2, 3, 4, 5, 6};
    int tamanho;

    tamanho = sizeof(vetor) / sizeof(float);

    printf("Total de numeros menores que o ultimo = %d", menorQueUltimo(vetor, tamanho));

    return 0;
}