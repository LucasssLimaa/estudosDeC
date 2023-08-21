#include <stdio.h>

int calcula_soma(int a, int b, int c){

    int soma;
    soma = a + b + c;
    printf("%d + %d + %d = %d\n", a, b, c, soma);
    return soma;
}

int calcula_media(int a, int b, int c){

    float media = calcula_soma(a, b, c) / 3;
    printf("Media de %d, %d, %d = %.2f\n", a, b, c, media);
}

int main(){

    int a, b, c;

    printf("Digite 3 numeros: ");
    scanf("%d%d%d", &a, &b, &c);

    calcula_media(a, b, c);

    return 0;
}