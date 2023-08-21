/*
7 - Sabe-se que o volume de uma caixa de lados a, b e c é dado por Vcaixa = a x b x c e que o volume de um
cilindro de raio r e altura h é dado por Vcilindro = πhr2. Pede-se:
a) Escreva uma função para calcular e retornar o volume de uma caixa de lados a, b e c. Esta função deverá
receber como parâmetro os lados a, b e c.
b) Escreva uma função para calcular e retornar o volume de um cilindro de raio r e altura h. Esta função
deverá receber como parâmetro o raio e a altura.
c) Usando as funções dos itens anteriores, escreva um programa para calcular o volume de uma caixa com
um furo cilíndrico, com as dimensões ilustradas na figura abaixo.
O programa deve capturar do teclado os valores das dimensões da peça e deve exibir o valor do volume
calculado.
*/

#include <stdio.h>

float calculaVolumeCilindro(float h, float r) {

    return 3,1415 * h * (r * r);
}

float calculaVolumeCaixa(float a, float b, float c) {

    return a * b * c;
}

int main() {

    float a, b, c, h, r, areaTotal;

    printf("Digite a altura, comprimento e largura respectivamente: ");
    scanf("%f%f%f", &a, &b, &c);

    printf("Digite a altura e o raio do cilindro respectivamente: ");
    scanf("%f%f", &h, &r);

    areaTotal = calculaVolumeCaixa(a, b, c) - calculaVolumeCilindro(h, r);
    printf("Area total da figura = %f", areaTotal);

    return 0;
}