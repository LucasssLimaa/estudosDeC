#include <stdio.h>

int le_calcula_soma(int a, int b, int c){

    return a + b + c;
}

int calcula_media(int soma){

    float media = soma / 3;
    printf("Media dos numeros = %.2f\n", media);
}

int main(){

    int a, b, c, soma;

    printf("Digite 3 numeros: ");
    scanf("%d%d%d", &a, &b, &c);

    soma = le_calcula_soma(a, b, c);
    calcula_media(soma);

    printf("%d + %d + %d = %d\n", a, b, c, soma);

    return 0;
}