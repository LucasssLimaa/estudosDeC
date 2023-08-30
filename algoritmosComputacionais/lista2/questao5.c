/*
5 - Faça um programa, utilizando a função abaixo, que processe um aluno de uma turma. O programa deverá
ler as seguintes informações do aluno: matrícula, nota da primeira prova, nota da segunda prova, nota do
primeiro trabalho e nota do segundo trabalho. Este programa deverá calcular e exibir: matrícula, média das
provas, média dos trabalhos e média final. Todas as médias são aritméticas. Faça a seguinte função:
a) calcula_media: esta função deverá receber os dois valores para o cálculo da média aritmética como
parâmetros, calcular e retornar a média aritmética.
*/

#include <stdio.h>

float calcula_media(float mediaProva, float mediaTrabalho){

    float mediaFinal = (mediaProva + mediaTrabalho) / 2;
    printf("Media final = %.2f\n", mediaFinal);
}

int main() {

    int matricula;
    float notaProva1, notaProva2, notaTrabalho1, notaTrabalho2, mediaProva, mediaTrabalho;
    
    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);

    printf("Digite a nota da primeira e segunda prova respectivamente: ");
    scanf("%f%f", &notaProva1, &notaProva2);

    printf("Digite a nota do primeiro e segundo trabalho respectivamente: ");
    scanf("%f%f", &notaTrabalho1, &notaTrabalho2);

    mediaProva = (notaProva1 + notaProva2) / 2;
    mediaTrabalho = (notaTrabalho1 + notaTrabalho2) / 2;

    printf("Matricula = %d\n", matricula);
    printf("Media das provas = %.2f\n", mediaProva);
    printf("Media dos trabalhos = %.2f\n", mediaTrabalho);

    calcula_media(mediaProva, mediaTrabalho);

    return 0;
}