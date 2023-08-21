/*
4 - Faça um programa, usando a função abaixo, que leia a matrícula de um aluno e exiba uma mensagem
informando se a matrícula é válida ou inválida. Faça uma função que receba como parâmetro a matrícula
de um aluno (número inteiro no seguinte formato AASNN). Está função deverá retornar 0, caso a matrícula
seja inválida ou 1, caso a matrícula seja válida. Sabe-se:
AA: representa o ano (10 a 22)
S: representa o semestre (1 ou 2)
NN: representa o número sequencial (01 a 90)
*/

#include <stdio.h>

int validaMatricula(int matricula) {

    if ((((matricula / 1000) >= 10) && (matricula / 1000) <= 22) && (((matricula % 1000) / 100 >= 1) && (matricula % 1000) / 100 <= 2) && (((matricula % 1000) % 100) >= 01 && ((matricula % 1000) % 100) <= 90)){
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int matricula;

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    if (validaMatricula(matricula) == 1){
        printf("Matricula Valida");
    } else {
        printf("Matricula Invalida");
    }
    

    return 0;
}