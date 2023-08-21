#include <stdio.h> 

int converterEmSemanas(int dias){

    int semanas = dias / 7;
    int diasRestantes = dias % 7;
    printf("%d dia(s) = %d semana(s) e %d dia(s)", dias, semanas, diasRestantes);
}

int main() {

    int dias;

    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias);

    converterEmSemanas(dias);

    return 0;
}