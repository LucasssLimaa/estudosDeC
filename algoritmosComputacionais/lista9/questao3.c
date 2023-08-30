#include <stdio.h>

struct Aluno
{
    char nome[30];
    float notas[2];
};

typedef struct Aluno aluno;


int exibe(aluno vetor[], float mediaTurma) {

    for(int i = 0; i < 20; i++) {
        float mediaAluno = (vetor[i].notas[0] + vetor[i].notas[1]) / 2;
        printf("Nome aluno %d: %s\n", i + 1, vetor[i].nome);
        printf("Media aluno %d: %.2f\n", i + 1, mediaAluno);
        if(mediaAluno > mediaTurma){
            printf("Acima da media da turma\n");
        } else if(mediaAluno == mediaTurma) {
            printf("Na media da turma\n");
        } else {
            printf("Abaixo da media da turma\n");
        }
    }
}

int main() {

    aluno vetor[20];
    float mediaTurma = 0;

    for (int i = 0; i < 20; i++){
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", vetor[i].nome);
        for(int j = 0; j < 2; j++) {
            printf("Digite a nota do %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &vetor[i].notas[j]);
            mediaTurma += vetor[i].notas[j];
        }
    }

    mediaTurma /= 40;

    exibe(vetor, mediaTurma);

    return 0;
}