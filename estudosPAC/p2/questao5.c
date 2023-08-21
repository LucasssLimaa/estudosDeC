#include <stdio.h>

struct Produto {
    int quantidade;
    float preco;
};

typedef struct Produto produto;

float calcularPreco(produto produtos[], int tamanho) {

    float valorTotal = 0;

    for(int i = 0; i < tamanho; i++) {
        valorTotal += produtos[i].quantidade * produtos[i].preco;
    }
    
    return valorTotal;
}

int main() {

    produto produtos[3];
    int tamanho = 3;

    for(int i = 0; i < 3; i++) {
        produtos[i].quantidade = i + 1;
        produtos[i].preco = (i + 1) * 1000;
        /*printf("Digite a quantidade deste produto: ");
        scanf("%d", produtos[i].quantidade);
        printf("Digite o preco por unidade: ");
        scanf("%f", produtos[i].preco);*/
    }
    
    printf("Valor total = %f", (produtos, tamanho));

    return 0;
}