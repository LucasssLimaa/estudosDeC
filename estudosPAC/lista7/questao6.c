/*
Faça uma função que receba como parâmetro um vetor de números reais, um número real a ser procurado
no vetor e a quantidade de números armazenados no vetor. Esta função deverá retornar -1 caso o número
não seja encontrado ou a posição onde o número foi encontrado
*/

#include <stdio.h>

int procurarNumero(float vetor[], float numero, int tamanho) {

    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] == numero){
            return i;
        }
    }

    return -1;
}

// Exemplo para rodar função
int main() {

    float vetor[] = {1.1, 5.5, 7.9, 10, 11, 12, 10.2}, numero = 12;
    int tamanho = sizeof(vetor) / sizeof(float);

    printf("Numero esta na posicao = %d", procurarNumero(vetor, numero, tamanho));
}