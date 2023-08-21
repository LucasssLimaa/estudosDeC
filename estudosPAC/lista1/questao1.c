#include <stdio.h>

int funcaoSoma(int num1, int num2){

    return num1 + num2;
}

int main(){

    int num1, num2, soma;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    soma = funcaoSoma(num1, num2);

    printf("%d + %d = %d", num1, num2, soma);
    
    return 0;
}