/*
6 - Escreva um programa que capture do teclado as coordenadas dos 3 vértices de um triângulo, calcule e exiba
o perímetro deste triângulo. Este programa deve utilizar a função que calcula a distância. Obs: Perímetro de
um polígono é a soma das medidas dos seus lados. Considerando a fórmula abaixo para o cálculo da
distância entre dois pontos (x1, y1) e (x2, y2), escreva uma função que receba como parâmetros as
coordenadas de dois pontos e retorne a distância entre eles
*/

#include <stdio.h>
#include <math.h>

float calcularDistancia(float x1, float x2, float y1, float y2){

    float distancia = sqrt((pow(x1, 2) - (2 * x1 * x2) + pow(x2, 2)) + (pow(y1, 2) - (2 * y1 * y2) + pow(y2, 2)));
    return distancia;
}

int main() {

    float x1, x2, x3, y1, y2, y3, ladoA, ladoB, ladoC, perimetro;

    printf("Digite as coordenadas do vertice 1: ");
    scanf("%f%f", &x1, &y1);

    printf("Digite as coordenadas do vertice 2: ");
    scanf("%f%f", &x2, &y2);

    printf("Digite as coordenadas do vertice 3: ");
    scanf("%f%f", &x3, &y3);

    ladoA = calcularDistancia(x1, x2, y1, y2);   
    ladoB = calcularDistancia(x2, x3, y2, y3);
    ladoC = calcularDistancia(x3, x1, y3, y1);

    perimetro = ladoA + ladoB + ladoC; 

    printf("perimetro = %f", perimetro);

    return 0;
}