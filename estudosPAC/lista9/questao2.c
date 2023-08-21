#include <stdio.h>

int lerMatriz(int qntdVendas[6][12]) {

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 12; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &qntdVendas[i][j]);
        }
    }
}