/*Faça um programa que, utilizando a função abaixo, que inicialmente leia a quantidade de automóveis
diferentes produzidos por uma empresa. A seguir, para cada automóvel, o programa deverá ler o código do
modelo e a quantidade em estoque. Ao final, o programa deverá exibir a quantidade de automóveis
diferentes que tem quantidade em estoque acima de 1000. Faça uma função que recebe como parâmetro
a quantidade de automóveis diferentes produzidos por uma empresa. A função irá ler os dados de cada
automóvel, calcular e retornar a quantidade de automóveis diferentes que tem quantidade em estoque
acima de 1000*/

#include <stdio.h>

int acimaDeMil(int quantidadeAutomoveis) {

    int codigo, quantidadeEstoque, maiorQueMil = 0;

    for (int i = 1; i <= quantidadeAutomoveis; i++)
    {
        printf("Digite o codigo do modelo do automovel %d: ", i);
        scanf("%d", &codigo);
        printf("Digite o a quantidade em estoque do automovel %d: ", i);
        scanf("%d", &quantidadeEstoque);

        if(quantidadeEstoque > 1000) {
            maiorQueMil += 1;
        }
    }

    return maiorQueMil;
}

int main() {

    int quantidadeAutomoveis;

    printf("Digite a quantidade de automoveis produzidos pela empresa: ");
    scanf("%d", &quantidadeAutomoveis);

    printf("Quantidade de automoveis diferentes que tem quantidade em estoque acima de 1000 = %d", acimaDeMil(quantidadeAutomoveis));

    return 0;
}