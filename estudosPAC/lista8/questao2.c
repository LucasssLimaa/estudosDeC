/*
Faça um programa para processar os 500 funcionários de uma empresa. Para cada funcionário, o programa deverá
ler o código do departamento no qual ele trabalha (número inteiro de 1 a 10) e o salário. O programa deverá
exibir o menor salário de cada departamento. Faça as seguintes funções:
a) inicializa: recebe como parâmetro um vetor de números reais e inicializa-o apropriadamente.
b) exibe: recebe como parâmetro um vetor de números reais já preenchido e exibe o menor salário de cada
departamento
*/

#include <stdio.h>

int inicializa(float menoresSalarios[]) {

    for (int i = 0; i < 10; i++) {
        menoresSalarios[i] = 0;
    }
}

int exibe(float menoresSalarios[]) {

    for (int i = 0; i < 10; i++) {
        printf("Menor salario do departamento %d = %.2f\n", i + 1, menoresSalarios[i]); 
    }
    
}

int main() {

    int departamento;
    float menoresSalarios[10], salario;

    inicializa(menoresSalarios);

    for(int i = 0; i < 500; i++) {
        printf("Digite o departamento do funcionario %d: ", i + 1);
        scanf("%d", &departamento);
        printf("Digite o salario do funcionario %d: ", i + 1);
        scanf("%f", &salario);

        if(departamento <= 10 && departamento >= 1) {
            if(menoresSalarios[departamento - 1] == 0) {
                menoresSalarios[departamento - 1] = salario;
            } else if(salario < menoresSalarios[departamento - 1]){
                menoresSalarios[departamento - 1] = salario;
            }
        } else {
            printf("Codido invalido\n");
        }
    }

    exibe(menoresSalarios);

    return 0;
}