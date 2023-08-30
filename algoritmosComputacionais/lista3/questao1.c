/*
1 - O Índice de Desenvolvimento Humano (IDH) é uma medida do bem-estar de uma população. Engloba três
dimensões: educação (E), longevidade (L) e a riqueza (R). A dimensão educação (E) determina o método de
cálculo do IDH de uma localidade, de acordo com as seguintes regras:
• Caso a dimensão Educação seja maior ou igual à soma das demais dimensões a fórmula para o cálculo
do IDH é:
IDH = E * L * R / ((E + L + R)/3)
• Caso a dimensão Educação não seja maior ou igual a soma das demais dimensões a fórmula para o
cálculo do IDH é:
IDH = (E + L + R)/3
Escreva um programa, utilizando a função abaixo, que leia os valores das dimensões Educação (E),
Longevidade (L) e Riqueza (R) de uma localidade e exiba o IDH, calculado de acordo com a descrição acima.
Todos os valores são reais. Faça a função calculaIdh que recebe como parâmetro as 3 dimensões, calcula e
retorna o IDH.
*/

#include <stdio.h>

float calculaIdh(float E, float L, float R){

    float IDH;

    if(E >= L + R){
        IDH = E * L * R / ((E + L + R) / 3);
    } else {
        IDH = (E + L + R) / 3;
    }

    return IDH;
}

int main() {

    float E, L, R, IDH;

    printf("Digite a dimensao da educacao, logevidade e riqueza respectivamente: ");
    scanf("%f%f%f", &E, &L, &R);

    IDH = calculaIdh(E, L, R);

    printf("IDH = %f\n", IDH);

    return 0;
}