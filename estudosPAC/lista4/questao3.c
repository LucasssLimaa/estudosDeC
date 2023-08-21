/*Faça um programa, utilizando a função abaixo, para processar os 20 postos de combustível de uma franquia.
Para cada posto, o programa deverá ler o código do posto e o valor total arrecadado com as vendas de todos
os combustíveis. Ao final, o programa deverá exibir o maior valor total arrecadado com as vendas de todos
os combustíveis por um posto e o valor geral total arrecadado pelos 20 postos de combustível. Considere
que não ocorrerá empate. Faça uma função para processar os 20 postos de combustível. A função irá ler os
dados de cada posto, calcular e exibir o maior valor total arrecadado com as vendas de todos os
combustíveis por um posto e calcular e retornar o valor geral total arrecadado pelos 20 postos de
combustível*/

#include <stdio.h>

int calculaPosto() {

    int codigo, maiorCodigo, valor, maiorValor = 0, valorTotal = 0;

    for(int i = 1; i <= 20; i++) {
        printf("Digite o codigo do posto %d: ", i);
        scanf("%d", &codigo);
        printf("Dogite o valor arrecadado pelo posto %d: ", i);
        scanf("%d", &valor);
        valorTotal += valor;
        if(valor > maiorValor){
            maiorValor = valor;
            maiorCodigo = codigo;
        }
    }

    printf("O maior valor arrecadado foi do posto %d, com um total de R$%d\n", maiorCodigo, maiorValor);
    return valorTotal;
}

int main() {

    printf("O valor total arrecadado pelos 20 postos foi de R$%d\n", calculaPosto());

    return 0;
}