/*
Faça um programa, utilizando as funções abaixo, que permite que o usuário escolha a opção desejada,
quantas vezes desejar, até que escolha a opção 5 (FIM). A cada opção escolhida pelo usuário para cálculo
da área, o programa deverá ler os dados necessários, a área deverá ser calcula e exibida.
a) Faça a função menu que exibe as opções abaixo, lê e retorna a opção escolhida pelo usuário validada.
1 – Quadrado (Dado a ser lido: lado. Área: lado x lado).
2 – Retângulo (Dados a serem lidos: base e altura. Área: base x altura).
3 – Triângulo (Dados a serem lido: base e altura. Área: (base x altura) / 2).
4 – Trapézio (Dados a serem lidos: base maior, base menor e altura. Área: ((base maior + base menor) x
altura)/2).
5 – Fim.
b) Faça a função quadrado que irá ler o lado, calcular e retornar a área.
c) Faça a função retangulo que irá ler a base e a altura, calcular e retornar a área.
d) Faça a função triangulo que irá ler a base e a altura, calcular e retornar a área.
e) Faça a função trapezio que irá ler a base maior, a base menor e a altura, calcular e retornar a área.
*/

#include <stdio.h>

int menu() {

    int opcaoEscolhida;

    printf("\nEscolha uma das opcoes abaixo:\n1 - Quadrado\n2 - Retangulo\n3 - Triangulo\n4 - Trapezio\n5 - Fim\n");
    scanf("%d", &opcaoEscolhida);

    if(opcaoEscolhida <= 5 && opcaoEscolhida >= 1){
        return opcaoEscolhida;
    } else {
        printf("Opcao invalida");
    }
}

float quadrado() {

    float lado;

    printf("Digite o lado do Quadrado: ");
    scanf("%f", &lado);

    return lado * lado;
}

float retangulo() {

    float base, altura;

    printf("Digite a base do Retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do Retangulo: ");
    scanf("%f", &altura);

    return base * altura;
}

float triangulo() {

    float base, altura;

    printf("Digite a base do Triangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do Triangulo: ");
    scanf("%f", &altura);

    return (base * altura) / 2;
}

float trapezio() {

    float baseMaior, baseMenor, altura;

    printf("Digite a base maior do Trapezio: ");
    scanf("%f", &baseMaior);

    printf("Digite a base menor do Trapezio: ");
    scanf("%f", &baseMenor);

    printf("Digite a altura do Trapezio: ");
    scanf("%f", &altura);

    return ((baseMaior + baseMenor) * altura) / 2;
}

int main() {

    int opcaoEscolhida = menu();

    while(opcaoEscolhida != 5) {
        if(opcaoEscolhida == 1) {
            printf("Area do quadrado = %.2f\n", quadrado());
        } else if(opcaoEscolhida == 2) {
            printf("Area do retangulo = %.2f\n", retangulo());
        } else if (opcaoEscolhida == 3) {
            printf("Area do triangulo = %.2f\n", triangulo());
        } else if(opcaoEscolhida == 4) {
            printf("Area do trapezio = %.2f\n", trapezio());
        } else {
            printf("FIM\n");
        }
        opcaoEscolhida = menu();
    }
    
    return 0;
}