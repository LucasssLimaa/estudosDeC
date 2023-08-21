#include <stdio.h>

int verificarNegativos(float vetor[], int tamanho) {

    int negativos = 0;

    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] < 0) {
            negativos += 1;
        }
    }

    return negativos;
}

int main(){

    float vetor[] = {1, 2, 3, -2, -1};
    int tamanho;

    tamanho = sizeof(vetor) / sizeof(float);

    printf("Quantidade de numeros negativos = %d", verificarNegativos(vetor, tamanho));

    return 0;
}