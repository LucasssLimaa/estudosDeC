#include <stdio.h>
#define M 5
#define N 5

int lerMatriz(int matriz[M][N])
{

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int main() {

    int matriz[M][N], caminhos, qntdCaminhos;

    lerMatriz(matriz);

    printf("Digite qauntos caminhos foram feitos: %d", qntdCaminhos);
    scanf("%d", &qntdCaminhos);

    while (qntdCaminhos >= 0) {
        for(int i = 0; i < qntdCaminhos; i++) {
            printf("Digite o caminho: %d: ", i);
            scanf("%d", &caminhos);
        }
    }
    
    return 0;
}