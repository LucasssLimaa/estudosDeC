/*
Faça um programa, utilizando a função abaixo, para processar os 30 departamentos de uma empresa. Para
cada departamento, o programa deverá ler o código e a quantidade de funcionários do departamento e
para cada funcionário a matrícula e o salário e exibir o código do departamento e a soma dos salários dos
funcionários do departamento. Ao final, o programa deverá exibir a soma dos salários dos funcionários de
todos os departamentos. Faça uma função para processar um departamento. A função deverá receber como
parâmetros o código e a quantidade de funcionários do departamento, ler a matrícula e o salário de cada
funcionário, calcular a soma dos salários dos funcionários do departamento e exibir o código e a soma dos
salários dos funcionários do departamento e retornar a soma dos salários dos funcionários do
departamento
*/

#include <stdio.h>

float processarDepartamento(int codigoDepartamento, int quantidadeFuncionariosDepartameto) {

    int matricula;
    float salario, somaSalarios;

    for(int i = 1; i <= quantidadeFuncionariosDepartameto; i++) {
        printf("Digite a matricula e o salario do funcionario %d respectivamente: ", i);
        scanf("%d %f", &matricula, &salario);
        somaSalarios += salario;
    }

    return somaSalarios;
}

int main() {

    int codigoDepartamento, quantidadeFuncionariosDepartamento;
    
    for(int i = 1; i <= 30; i++) {
        printf("Digite o codigo e a quantidade de funcionarios do departamento %d respectivamente: ", i);
        scanf("%d %d", &codigoDepartamento, &quantidadeFuncionariosDepartamento);
        printf("Soma dos salarios do departamento %d = R$%.2f\n", i, processarDepartamento(codigoDepartamento, quantidadeFuncionariosDepartamento));
    }

    return 0;
}