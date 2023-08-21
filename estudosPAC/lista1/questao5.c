#include <stdio.h>

int calculaHorario(int hora, int minutos) {

    return (hora * 60) + minutos;
}

int calculaDiferenca(int horaPrevista, int minutoPrevisto, int horaEfetiva, int minutoEfetivo){

    int horarioPrevisto, horarioEfetivo;
    horarioPrevisto = calculaHorario(horaPrevista, minutoPrevisto);
    horarioEfetivo = calculaHorario(horaEfetiva, minutoEfetivo);
    return horarioPrevisto - horarioEfetivo;
}

int main() {

    int horaPrevista, minutoPrevisto, horaEfetiva, minutoEfetivo, diferenca;

    printf("Digite a hora e os minutos previstos, respectivamente, da chegada do voo: ");
    scanf("%d%d", &horaPrevista, &minutoPrevisto);

    printf("Digite a hora e os minutos, respectivamente, da chegada do voo: ");
    scanf("%d%d", &horaEfetiva, &minutoEfetivo);

    diferenca = calculaDiferenca(horaPrevista, minutoPrevisto, horaEfetiva, minutoEfetivo);

    printf("%d:%d - %d:%d = %d minutos", horaPrevista, minutoPrevisto, horaEfetiva, minutoEfetivo, diferenca);

    return 0;
}