/*
Faça uma função que receba como parâmetro um vetor de números inteiros e a quantidade de números
armazenados no vetor. Esta função deverá calcular a quantidade de números pares e a quantidade de
números ímpares, armazenando-as nas variáveis cujos endereços são fornecidos na chamada da função.
*/

#include <stdio.h>

int paresOuImpares(int vetor[], int tamanho, int *pares, int *impares) {

    *pares = 0;
    *impares = 0;

    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] % 2 == 0) {
            *pares += 1;
        } else {
            *impares += 1;
        }
    }
}

int main() {

    int vetor[] = {1, 2, 3, 4, 5, 6};
    int tamanho, pares, impares;

    tamanho = sizeof(vetor) / sizeof(int);

    paresOuImpares(vetor, tamanho, &pares, &impares);

    printf("Total de numeros pares: %d\nTotal de numeros impares: %d", pares, impares);

    return 0;
}