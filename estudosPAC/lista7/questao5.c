/*
Faça uma função que receba como parâmetro um vetor de struct, contendo a quantidade de funcionários
e a soma dos salários em cada um dos departamentos de uma empresa. Para cada departamento, esta
função deverá calcular o salário médio e exibir o código e o salário médio. Os departamentos possuem
códigos de 1 a 30. Utilize a struct abaixo.
*/

#include <stdio.h>

struct depto
{
    int qtd;
    float soma;
};

typedef struct depto Tdepto;

float calcularSalarioMedio(Tdepto departamentos[]) {

    float salarioMedio;
    
    for(int i = 0; i < 30; i++) {
        salarioMedio = departamentos[i].soma / departamentos[i].qtd;
        printf("Salario medio do departamento %d = %.2f\n", i + 1, salarioMedio);
    }

    return salarioMedio;
}

int main(){

    Tdepto departamentos[30];

    for (int i = 0; i < 30; i++) {
        departamentos[i].qtd = i + 1;
        departamentos[i].soma = (i + 1) * 1000;
    }

    calcularSalarioMedio(departamentos);

    return 0;
}