#include <iostream>
#define TAM 10

using namespace std;

void preencherVetor(int *vetor) {

    cout << "Digite " << TAM << " numeros diferentes: "; 
    for (int i = 0; i < TAM; i++) {
        cin >> vetor[i];
    }
}

void mostrarVetor(int *vetor) {

    for (int i = 0; i < TAM; i++) {
        cout << vetor[i] << " ";
    }
}

void bubbleSort(int *vetor) {

    int aux;

    for (int i = 0; i < TAM - 1; i++) {
        for (int j = i + 1; j < TAM; j++) {
            if (vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

void selectionSort(int *vetor) {

    int aux, menor;

    for (int i = 0; i < TAM - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < TAM; j++) {
            if (vetor[menor] > vetor[j]) {
                menor = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = aux;
    }
}

void insertionSort(int *vetor) {

    for(int i = 1; i < TAM; i++) {
        int chave = vetor[i];
        int j = i - 1;
        while(j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = chave;
    }

}

int main()
{

    int vetor[TAM];

    preencherVetor(vetor);
    cout << "Vetor fora de ordem: ";
    mostrarVetor(vetor);

    bubbleSort(vetor);
    cout << "\nVetor ordenado com Bubble Sort: ";
    mostrarVetor(vetor);

    selectionSort(vetor);
    cout << "\nVetor ordenado com Selection Sort: ";
    mostrarVetor(vetor);

    insertionSort(vetor);
    cout << "\nVetor ordenado com Insertion Sort: ";
    mostrarVetor(vetor);

    return 0;
}
