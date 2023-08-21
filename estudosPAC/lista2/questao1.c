#include <stdio.h>

int calcula_soma(int a, int b, int c) {

    return a + b + c;
}

int calcula_media(int a, int b, int c) {

    float media = calcula_soma(a, b, c) / 3;
    printf("Media de %d, %d, %d = %.2f\n", a, b, c, media);
}

int main() {

    int a, b, c, soma, media;

    printf("Digite 3 numeros: ");
    scanf("%d%d%d", &a, &b, &c);

    soma = calcula_soma(a, b, c);
    calcula_media(a, b, c);

    printf("%d + %d + %d = %d", a, b, c, soma);

    return 0;   
}