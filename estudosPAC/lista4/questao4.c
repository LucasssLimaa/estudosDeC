/*
Faça um programa, utilizando as funções descritas, que calcula e exibe o salário de 50 pessoas. O programa
deverá apresentar para cada pessoa, um menu com as opções abaixo, calcular e exibir o salário. Faça a
função menu que exibe as opções abaixo, lê e retorna a opção escolhida pelo usuário. Para cada uma das
opções do menu o seu programa deverá chamar a função apropriada para o cálculo do salário. Nestas
funções deverão ser lidos os dados de entrada apropriados e o valor do salário deverá ser retornado. O
menu deverá possuir as seguintes opções:
1 – Horista (dados a serem lidos: valor da hora de trabalho e quantidade de horas trabalhadas)
2 – Contratado (dado a ser lido: salário)
3 – Prestador de serviço (dados a serem lidos: quantidade de serviços prestados e para cada serviço o
seu valor)
*/

#include <stdio.h>

int menu() {

    int opcaoEscolhida;

    printf("Escolha uma das opcoes abaixo:\n");
    printf("1 - Horista\n2 - Contratado\n3 - Prestador de servico\n");
    scanf("%d", &opcaoEscolhida);

    return opcaoEscolhida;
}

float horista() {

    int quantidadeHora;
    float valorHora;

    printf("Digite o valor da sua hora de trabalho: ");
    scanf("%f", &valorHora);
    printf("Digite a quantidade de horas que trabalhou: ");
    scanf("%d", &quantidadeHora);

    return valorHora * quantidadeHora;
}

float contratado() {

    float salario;

    printf("Digite o valor do seu salario: ");
    scanf("%f", &salario);

    return salario;
}

float prestador() {

    int quantidadeServico;
    float valorServico, valorTotal;

    printf("Digite a quantidade de servicos prestados: ");
    scanf("%d", &quantidadeServico);

    for(int i = 1; i <= quantidadeServico; i++) {
        printf("Digite o valor do servico: ");
        scanf("%f", &valorServico);
        valorTotal += valorServico;
    }

    return valorTotal;
}

int main() {

    float salario;
    int opcaoEscolhida;

    for(int i = 1; i <= 50; i++) {
        opcaoEscolhida = menu();
        if(opcaoEscolhida == 1) {
            salario = horista();
            printf("Seu salario foi de R$%.2f\n", salario);
        } else if(opcaoEscolhida == 2) {
            salario = contratado();
            printf("Seu salario foi de R$%.2f\n", salario);
        } else if(opcaoEscolhida == 3){
            salario = prestador();
            printf("Seu salario foi de R$%.2f\n", salario);
        }
    } 

    return 0;
}

