/*
5 - Faça um programa, utilizando a função abaixo, que leia 3 números inteiros e exiba o maior, considerando
que os números são diferentes. Faça uma função que receba como parâmetros três números inteiros e
retorne o maior. Considere que os números são diferentes.
*/

#include <stdio.h>

int retornarMaior(int a, int b, int c){

    if(a > b && a > c) {
        return a;
    } else if(b > a && b > c) {
        return b;
    } else {
        return c;
    }
}

int main() {

    int a, b, c, maiorNumero;

    printf("Digite 3 numeros inteiros diferentes: ");
    scanf("%d%d%d", &a, &b, &c);

    maiorNumero = retornarMaior(a, b, c);

    printf("O maior numero entre %d-%d-%d = %d", a, b, c, maiorNumero);

    return 0;
}