#include <stdio.h>
#define N 3
#define M 3

int leMatriz(int matriz[M][N]) {

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
int esparsa(int matriz[M][N]) {

    int contador;
    
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            if(matriz[i][j] == 0) {
                contador += 1;
                if (contador >= 4) {
                    return 1;
                }
            }
        }
    }

    return 0;
}
int main()
{
    int matriz[M][N];

    leMatriz(matriz);

    if (esparsa(matriz)) {
        printf("A matriz e esparsa\n");
    }else {
        printf("A matriz nao e esparsa\n");
    }
    return 0;
}
