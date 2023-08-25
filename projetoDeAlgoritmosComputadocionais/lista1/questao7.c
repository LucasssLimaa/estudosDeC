#include <stdio.h>

int sacar(int valor){

    int notas100, notas50, notas20, notas10, notas5, notas2, notas1;
    notas100 = valor / 100;
    notas50 = (valor % 100) / 50;
    notas20 = ((valor % 100) % 50) / 20;
    notas10 = (((valor % 100) % 50) % 20) / 10;
    notas5 = ((((valor % 100) % 50) % 20) % 10) / 5;
    notas2 = (((((valor % 100) % 50) % 20) % 10) % 5) / 2;
    notas1 = ((((((valor % 100) % 50) % 20) % 10) % 5) % 2) / 1;

    printf(" %d notas de 100\n %d notas de 50\n %d notas de 20\n %d notas 10\n %d notas de 5\n %d notas de 2\n %d notas de 1\n", notas100, notas50, notas20, notas10, notas5, notas2, notas1);
}

int main() {

    int valor;

    printf("Digite quanto deseja sacar: ");
    scanf("%d", &valor);
    
    sacar(valor);

    return 0;
}