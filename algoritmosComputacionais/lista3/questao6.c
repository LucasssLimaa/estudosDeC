/*
6 - Faça um programa para calcular o pagamento de um funcionário de uma empresa. Este programa deverá
ler os seguintes dados do funcionário: matrícula, valor da hora de trabalho e quantidade de horas
trabalhadas. Este programa deverá exibir a matrícula, o salário base, o desconto do INSS, o desconto do
imposto de renda e o salário líquido do funcionário. Faça as seguintes funções:
a) Para calcular e retornar o salário base. Esta função deverá receber o valor da hora de trabalho e a
quantidade horas trabalhadas.
b) Para calcular e retornar o desconto do INSS. Esta função deverá receber o salário base. O desconto do
INSS é de 11% do salário base, não podendo ultrapassar R$450,27.
c) Para calcular e retornar o desconto do imposto de renda. Esta função deverá receber o salário base. O
desconto do imposto de renda é calculado da seguinte forma:
• salário base até 1800,00 à isento (desconto = 0)
• salário base acima de 1800,00 até 2900,00 à desconto é de 15% do salário base
• salário base acima de 2900,00 à desconto é de 27,5% do salário base
*/

#include <stdio.h>

float calcularSalarioBase(float valorHora, int quantidadeHoras){

    return valorHora * quantidadeHoras;
}

float calcularDescontoInss(float salarioBase){
    
    float descontoInss = salarioBase * 0.11;

    if(descontoInss > 450.27){
        descontoInss = 450.27;
    }

    return descontoInss;
}

float calcularImpostos(float salarioBase){

    if(salarioBase <= 1800){
        return 0;
    } else if(salarioBase <= 2900){
        return salarioBase * 0.15;
    } else {
        return salarioBase * 0.275;
    }
}

int main()
{

    int matricula, quantidadeHoras;
    float valorHora, salarioBase;

    printf("Digite a matricula de um funcionario: ");
    scanf("%d", &matricula);

    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valorHora);

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &quantidadeHoras);

    salarioBase = calcularSalarioBase(valorHora, quantidadeHoras);

    printf("Matricula = %d\n", matricula);
    printf("Salario Base = %.2f\n", salarioBase);
    printf("Desconto do INSS = %.2f\n", calcularDescontoInss(salarioBase));
    printf("Desconto de Imposto de Renda = %.2f\n", calcularImpostos(salarioBase));

    return 0;
}