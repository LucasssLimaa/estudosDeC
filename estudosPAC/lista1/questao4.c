#include <stdio.h>

float calculaValor(float valorDoLitro, float litrosAbastecidos){

    return litrosAbastecidos * valorDoLitro;

}

int main() {

    float valorLitro, litrosAbastecidos, valor;

    printf("Digite quantos custa o litro de combustivel: ");
    scanf("%f", &valorLitro);

    printf("Digite quantos litros deseja abastecer: ");
    scanf("%f", &litrosAbastecidos);

    valor = calculaValor(valorLitro, litrosAbastecidos);

    printf("O valor a ser pago eh de R$ %.2f", valor);
}

