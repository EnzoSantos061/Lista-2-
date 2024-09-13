8 - 
#include <stdio.h>

int main() {
    int horaInicio, horaFim, duracao;

    // Solicita a hora de início e a hora de fim ao usuário
    printf("Digite a hora de início do jogo (0 a 23): ");
    scanf("%d", &horaInicio);
    printf("Digite a hora de fim do jogo (0 a 23): ");
    scanf("%d", &horaFim);

    // Calcula a duração do jogo
    if (horaFim >= horaInicio) {
        duracao = horaFim - horaInicio;
    } else {
        duracao = (24 - horaInicio) + horaFim;
    }

    // Exibe a duração do jogo
    printf("A duração do jogo é de %d horas.\n", duracao);

    return 0;
}