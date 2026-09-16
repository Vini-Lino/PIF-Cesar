#include <stdio.h>

int main() {
    int horas, minutos, segundos;
    int duracao;
    int total_segundos;
    int hora_final, minuto_final, segundo_final;

    printf("Digite o horario de inicio (horas minutos segundos): ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    printf("Digite a duracao do experimento em segundos: ");
    scanf("%d", &duracao);

    /* Converte o horario inicial inteiro para segundos */
    total_segundos = horas * 3600 + minutos * 60 + segundos;

    /* Soma a duracao do experimento */
    total_segundos += duracao;

    /* Calcula o horario final usando divisao e resto */
    hora_final = (total_segundos / 3600) % 24;
    minuto_final = (total_segundos % 3600) / 60;
    segundo_final = total_segundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n",
           hora_final, minuto_final, segundo_final);

    return 0;
}
