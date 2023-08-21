/*
3 - A área da superfície corporal de um ser humano pode ser calculada, de forma aproximada, pela fórmula de
Mosteller.
Faça uma função que receba como parâmetros a altura e o peso de uma pessoa e retorne sua área
corporal de acordo com a fórmula de Mosteller.
b) Faça uma função que receba como parâmetro duas áreas (em m2) e exibe se “Manteve área inalterada”,
“Aumentou a área corporal” ou “Diminuiu a área corporal”.
c) Faça um programa, utilizando as funções acima, que leia os valores da altura e do peso no início do ano
e o valor do peso no final do ano e exiba uma das mensagens: “Manteve área inalterada”, “Aumentou a
área corporal” ou “Diminuiu a área corporal”
*/

#include <stdio.h>
#include <math.h>

float calculaAreaCorporal(float peso, int altura){

    return sqrt(peso * altura) / 60;
}

float comparaAreas(float areaInicial, float areaFinal) {

    if(areaInicial == areaFinal){
        printf("Manteve area inalterada");
    } else if(areaInicial > areaFinal) {
        printf("Diminui a area corporal");
    } else {
        printf("Aumentou a area corporal");
    }
}

int main(){

    int altura;
    float areaInicial, areaFinal, pesoInicial, pesoFinal;

    printf("Digite sua altura em cm: ");
    scanf("%d", &altura);

    printf("Digite seu peso em kg no inicio do ano: ");
    scanf("%f", &pesoInicial);

    printf("Digite seu peso em kg no final do ano: ");
    scanf("%f", &pesoFinal);

    areaInicial = calculaAreaCorporal(pesoInicial, altura);
    areaFinal = calculaAreaCorporal(pesoFinal, altura);

    comparaAreas(areaInicial, areaFinal);

    return 0;
}