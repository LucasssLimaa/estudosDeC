/*
Uma loja especializada em microcomputadores possui vários modelos à venda. Cada modelo possui sua
própria configuração. O cliente, ao comprar, não pode modificar a configuração dos modelos existentes,
mas pode comprar periféricos não oferecidos na configuração por ele escolhida. Para cada venda efetuada
pela loja, o cliente escolhe um dos modelos comercializados e o número de periféricos adicionais (0- se não
deseja nenhum, ou a quantidade de periféricos desejados). O valor a ser pago pelo computador será o preço
do modelo básico escolhido mais o montante pago pelos periféricos. Faça um programa para processar as
vendas de uma loja. O programa deverá ler para cada venda o código do modelo escolhido, o preço do
modelo escolhido, a quantidade de periféricos desejados e, para cada periférico o seu preço e exibir o valor
da venda. Término da leitura: código do modelo escolhido = 0. No final, o programa deverá exibir a
quantidade de vendas sem periféricos adicionais e o valor médio de todas as vendas. Faça uma função que
receba como parâmetro a quantidade de periféricos desejados de uma venda. Esta função deverá ler o
preço de cada periférico e retornar o valor a ser pago pelos periféricos
*/

#include <stdio.h>

float perireficos(int quantidadePerifericos) {

    float precoPeriferico, precoTotal = 0;

    for(int i = 1; i <= quantidadePerifericos; i++) {
        printf("Digite o valor do periferico %d: ", i);
        scanf("%f", &precoPeriferico);
        precoTotal += precoPeriferico;
    }

    return precoTotal;
}

int main() {

    int codigo, quantidadePerifericos;
    float preco;

    printf("Digite o codigo do modelo escolhido: ");
    scanf("%d", &codigo);

    printf("Digite o preco do modelo escolhido: ");
    scanf("%f", &preco);

    printf("Digite a quantidade de perifericos desejada: ");
    scanf("%d", &quantidadePerifericos);

    printf("Valor da compra = R$%.2f", preco + perireficos(quantidadePerifericos));
}