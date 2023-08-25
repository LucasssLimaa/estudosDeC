#include <stdio.h>

int leValidaTipo() {

    int tipo;

    printf("Digite o tipo do produto:\n1 - fruta\n2 - legume\n3 - verdura\n");
    scanf("%d", &tipo);

    if(tipo >= 1 && tipo <= 3) {
        return tipo;
    } else {
        printf("Numero invalido");
    }
}

int separaTipos(int quantidadeProdutos) {

    int tipo, tipo1 = 0, tipo2 = 0, tipo3 = 0;

    for(int i = 1; i <= quantidadeProdutos; i++) {
        printf("Digite o codigo do produto %d", i);
        tipo = leValidaTipo();
        if(tipo == 1){
            tipo1 += 1;
        } else if(tipo == 2) {
            tipo2 += 1;
        } else if(tipo == 3) {
            tipo3 += 1;
        }
    }
}