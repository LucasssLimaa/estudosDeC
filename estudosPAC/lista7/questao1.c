/*
Faça uma função que receba como parâmetro um vetor de números inteiros e a quantidade de números
armazenados no vetor. Esta função deverá retornar o produto dos números
*/

#include <stdio.h>

int calculaProduto(int numeros[], int tamanho) {

    int produto = 1;

    for(int i = 0; i < tamanho; i++) {
        produto *= numeros[i];
    }

    return produto;
}

int main(){

    int numeros[] = {2, 3, 4, 6, 8, 10};
    int tamanho = sizeof(numeros) / sizeof(int);

    printf("%d", calculaProduto(numeros, tamanho));

    return 0;
}