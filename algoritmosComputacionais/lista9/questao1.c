#include <stdio.h>

int lerMatriz(int qntdVendas[6][12]) {

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 12; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &qntdVendas[i][j]);
        }
    }
}

int lerVetor(float preco[]) {

    for(int i = 0; i < 6; i++) {
        printf("Digite o valor dos carros no ano de %d: ", i);
        scanf("%f", &preco[i]);
    }
}

float valorTotal(int qntdVendas[6][12], float preco[]) {

    float precoTotal = 0;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 12; j++) {
            precoTotal += qntdVendas[i][j] * preco[i];
        }
    }

    return precoTotal;
}

int main() {

    int qntdVendas[6][12];
    float preco[6];

    lerMatriz(qntdVendas);
    lerVetor(preco);

    printf("Preco total = R$%.2f", valorTotal(qntdVendas, preco));

    return 0;
}