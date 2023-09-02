#include <iostream>
#define TAM 10

using namespace std;

void preencherVetor(int vetor[])
{

    for (int i = 0; i < TAM; i++)
    {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }
}

void mostrarVetor(int vetor[])
{

    for (int i = 0; i < TAM; i++)
    {
        cout << "[" << vetor[i] << "] ";
    }
    cout << endl;
}

void merge(int vetor[], int inicio, int meio, int fim)
{

    int i, vetorAux[TAM], posInicial = inicio, vetorEsquerda = inicio, vetorDireita = meio + 1;

    while (vetorEsquerda <= meio && vetorDireita <= fim)
    {
        if (vetor[vetorEsquerda] < vetor[vetorDireita])
        {
            vetorAux[posInicial] = vetor[vetorEsquerda];
            vetorEsquerda++;
        }
        else
        {
            vetorAux[posInicial] = vetor[vetorDireita];
            vetorDireita++;
        }
        posInicial++;
    }

    for (i = vetorEsquerda; i <= meio; i++)
    {
        vetorAux[posInicial] = vetor[i];
        posInicial++;
    }

    for (i = vetorDireita; i <= fim; i++)
    {
        vetorAux[posInicial] = vetor[i];
        posInicial++;
    }

    for (i = inicio; i <= fim; i++)
    {
        vetor[i] = vetorAux[i];
    }
}

void mergeSort(int vetor[], int inicio, int fim)
{

    if (inicio < fim)
    {
        int meio = (inicio + fim) / 2;
        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, fim);
        merge(vetor, inicio, meio, fim);
    }
}

int main()
{

    int vetor[TAM];

    preencherVetor(vetor);

    cout << "Ordem atual do vetor: ";
    mostrarVetor(vetor);

    mergeSort(vetor, 0, TAM - 1);

    cout << "\nVetor em ordem crescente: ";
    mostrarVetor(vetor);

    return 0;
}