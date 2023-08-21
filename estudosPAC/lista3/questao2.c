/*
2 - Faça um programa, utilizando a função abaixo, que leia a idade de uma pessoa e exiba a sua situação
eleitoral.
a) Faça uma função que receba como parâmetro a idade de uma pessoa e exiba uma das mensagens
abaixo:
• Não eleitor: idade < 16
• Eleitor facultativo: 16 <= idade < 18 ou idade > 70
• Eleitor: 18<= idade <= 70
*/

#include <stdio.h>

int calculaSituacaoEleitoral(int idade){

    if(idade < 16) {
        printf("Nao eleitor");
    } else if(idade >= 16 && idade < 18 || idade > 70 ) {
        printf("Eleitor facultativo");
    } else {
        printf("Eleitor");
    }
}

int main() {

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    calculaSituacaoEleitoral(idade);

    return 0;

}