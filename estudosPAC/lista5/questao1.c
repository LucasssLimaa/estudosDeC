/*
Um site especializado em programação em C possui vários arquivos disponíveis para download. Os usuários
podem fazer download dos arquivos desejados, pagando um preço fixo por MByte. Faça um programa,
utilizando a função abaixo, para processar os downloads dos usuários do site. Inicialmente, o programa
deverá ler o preço que o site cobra por Mbytes. Para cada usuário, o programa deverá ler a quantidade de
downloads desejada e para cada download o tamanho em MBytes, calcular e exibir o valor a ser pago pelo
usuário. Término da leitura dos usuários: quantidade de downloads desejada = 0. No final, o programa
deverá fornecer o valor médio pago pelos usuários e o maior valor pago.
Faça uma função para processar os downloads de um usuário. A função recebe como parâmetro a
quantidade de downloads de um usuário e o preço que o site cobra por Mbyte. A função deverá ler o
tamanho de cada download, calcular, exibir e retornar o valor a ser pago pelo usuário.
*/

#include <stdio.h>

int processarDownload(int quantidadeDownload, float precoMbyte) {

    float tamanhoDownload, somaTamanhos = 0;

    for(int i = 1; i <= quantidadeDownload; i++) {
        printf("Digite quantos Mbytes o download %d possui", i);
        scanf("%f", &tamanhoDownload);
        somaTamanhos += tamanhoDownload;
    }

    printf("Valor a ser pago pelo usuario = R$%.2f\n", somaTamanhos * precoMbyte);
    return somaTamanhos * precoMbyte;
}

int main(){

    int quantidadeDownload;
    float precoMbyte, valorMedio, maiorValor = 0, valorPorUsuario, valorTotal = 0;

    while(quantidadeDownload != 0) {
        printf("Digite a quantidade de downloads desejados e o preco por Mbyte cobrado pelo site, respectivamente: ");
        scanf("%d %f", &quantidadeDownload, &precoMbyte);
        valorPorUsuario = processarDownload(quantidadeDownload, precoMbyte);
        valorTotal += valorPorUsuario;
        if(valorPorUsuario > maiorValor) {
            maiorValor = valorPorUsuario;
        }
    }

    valorMedio = valorTotal/quantidadeDownload;
    printf("Valor medio = R$%.2f\nMaior valor = R$%.2f", valorMedio, maiorValor);
    
    return 0;
}