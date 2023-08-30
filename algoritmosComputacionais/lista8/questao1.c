/*
Faça um programa que leia as notas (número inteiro de 0 a 10) dos alunos de uma turma e exiba a quantidade de
alunos em cada nota, conforme exemplo abaixo. Término da leitura: nota = -1. Faça as seguintes funções:
a) inicializa: recebe como parâmetro um vetor de números inteiros e inicializa-o apropriadamente.
b) exibe:recebe como parâmetro um vetor de números inteiros já preenchido e exibe a quantidade de alunos em
cada nota conforme exemplo abaixo.
Nota 0: 2
Nota 1: 4
…
Nota 10: 8
*/

#include <stdio.h>

int inicializa(int vetor[]) {

    for(int i = 0; i < 11; i++) {
       vetor[i] = 0;
    }
}

int exibe(int vetor[]) {

    for(int i = 0; i < 11; i++){
        printf("Nota %d: %d\n", i, vetor[i]);
    }
}

int main() {

    int vetor[11], nota = 0;

    inicializa(vetor);
    
    while (nota != -1) {
        printf("Digite a quantidade de notas dos alunos (0 a 10): ");
        scanf("%d", &nota);
        if(nota <= 10 && nota >= 0) {
            vetor[nota] += 1;
        }
    }

    exibe(vetor);

    return 0;
}