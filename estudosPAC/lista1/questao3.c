#include <stdio.h>

float calculaNovoPreco(float preco){

    return preco + (preco * 0.20);
}

int main(){

    float preco, novoPreco;

    printf("Digite o preco de um produto: ");
    scanf("%f", &preco);

    novoPreco = calculaNovoPreco(preco);

    printf("O preco do produto com aumento de 20%% eh de R$ %.2f", novoPreco);

    return 0;
}