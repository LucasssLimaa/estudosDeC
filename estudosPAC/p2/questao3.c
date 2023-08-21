#include <stdio.h>
#define M 3
#define N 3

int lerMatriz(int matriz[M][N]) {

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int verificarSimetria(int matriz[M][N]) {

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if(matriz[i][j] != matriz[j][i]){
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int matriz[M][N];

    lerMatriz(matriz);

    if (verificarSimetria(matriz)) {
        printf("A matriz e simetrica\n");
    }else {
        printf("A matriz nao e simeterica\n");
    }
    return 0;
}
