#include <iostream>
#define TAM 50

using namespace std;

struct empresa {
    int matricula;
    float salario;
};

typedef struct empresa Empresa;

void inserirFuncionarios(Empresa *funcionarios) {
    cout << "Insira a matricula e o salario de " << TAM  << " funcionarios respectivamente: ";
    for(int i = 0; i < TAM; i++) {
        cin >> funcionarios[i].matricula >> funcionarios[i].salario;
    }
}

void mostrarFuncionarios(Empresa *funcionarios) {
    for(int i = 0; i < TAM; i++) {
        cout << "Matricula = " << funcionarios[i].matricula << " Salario = " << funcionarios[i].salario << endl;
    }
}

void selectionSort(Empresa *funcionarios) {

    int menor, aux, auxMatricula;

    for(int i = 0; i < TAM - 1; i++) {
        menor = i;
        for(int j = i + 1; j < TAM; j++) {
           if(funcionarios[menor].salario < funcionarios[j].salario) {
               menor = j;
           }
        }

        aux = funcionarios[i].salario;
        auxMatricula = funcionarios[i].matricula;
        funcionarios[i].salario = funcionarios[menor].salario;
        funcionarios[i].matricula = funcionarios[menor].matricula;
        funcionarios[menor].salario = aux;
        funcionarios[menor].matricula = auxMatricula;
    }
}

float somarSalarios(Empresa *funcionarios) {
    float total = 0;

    for(int i = 0; i < TAM; i++) {
        total += funcionarios[i].salario;
    }

    return total;
}

float mediaSalarios(Empresa *funcionarios) {

    return somarSalarios(funcionarios) / TAM;

}

void abaixoDaMedia(Empresa *funcionarios) {
    int qntdAbaixo = 0;
    for(int i = 0; i < TAM; i++) {
        if(funcionarios[i].salario < mediaSalarios(funcionarios)) {
            qntdAbaixo += 1;
            cout << "Matricula do salario menor que a media: " << funcionarios[i].matricula << endl;
        } 
    }

    cout << "\nTotal de salarios menor que a media salarial = " << qntdAbaixo;
}

int main() {

    Empresa funcionarios[TAM];

    inserirFuncionarios(funcionarios);

    selectionSort(funcionarios);
    mostrarFuncionarios(funcionarios);

    cout << "\nSoma de todos os salarios: ";
    cout << somarSalarios(funcionarios);

    abaixoDaMedia(funcionarios);

    return 0;
}