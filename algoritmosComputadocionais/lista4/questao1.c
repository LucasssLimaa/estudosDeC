/*
1)
a) Faça uma função que receba como parâmetro um número inteiro (N) e exiba a tabuada de N.
b) Faça um programa, utilizando a função acima, que exiba as tabuadas de 1 a 10
*/

#include <stdio.h>

int tabuada(int N) {

    for(int i = 0; i <= 10; i++) {
        int resultado = N * i;
        printf("%d x %d = %d\n", N, i, resultado);
    }
}

int main() {

    for(int i = 0; i <= 10; i++) {
        tabuada(i);
    }
    return 0;
}