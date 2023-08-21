/*
Faça uma função que receba como parâmetro um vetor de números reais, a quantidade de números
armazenados no vetor e a média dos números. Esta função deverá retornar a quantidade de números acima
da média dos números
*/

#include <stdio.h>

int mediaVetor(float vetor[], int tamanho, float media) {

    int acimaDaMedia = 0;
    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] > media) {
            acimaDaMedia += 1;
        }
    }

    return acimaDaMedia;
}

int main() {

    int tamanho, soma;
    float vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float media;

    tamanho = sizeof(vetor) / sizeof(float);

    for(int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    media = soma / tamanho;
    
    printf("Media dos numeros = %.2f\n", media);
    printf("Quantidade de numeros acima da media dos numeros = %d", mediaVetor(vetor, tamanho, media));

    return 0;
}