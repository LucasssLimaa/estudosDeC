#include <stdio.h>

/*int compara(char nome[], char nome2[]) {
    for (int i = 0; i < 10; i++)
    {
        if (nome[i] != nome2[i])
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}*/

int main() {

    char nome[10] = "Lucas";
    char nome2[10] = "Lucas";
    int tamanho = 0;

    if(compara(nome, nome2)) {
        printf("Iguais");
    } else {
        printf("Diferentes");
    }

    /*for(int i = 0; i < 10; i++) {
        
        if(nome[i] != '\0') {
            tamanho++;
        }
        printf("%c", nome[i]);
    }

    printf("\n%d",tamanho);*/

    /*printf("Nome: %s", nome);*/

    return 0;
}