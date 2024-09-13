9 -
A jornada de trabalho semanal de um funcion´ario ´e de 40 horas. O funcion´ario que trabalhar mais de 40
horas receber´a hora extra, cujo c´alculo ´e o valor da hora regular com um acr´escimo de 50%. Escreva um
algoritmo que leia o n´umero de horas trabalhadas em um mˆes, o sal´ario por hora e escreva o sal´ario total do
funcion´ario, que dever´a ser a


#include <stdio.h>

int main() {
    int horasTrabalhadas, horasExtras;
    float salarioPorHora, salarioTotal, salarioHoraExtra, salarioHorasNormais;

    // Solicita o número de horas trabalhadas no mês e o salário por hora
    printf("Digite o número total de horas trabalhadas no mês: ");
    scanf("%d", &horasTrabalhadas);
    printf("Digite o salário por hora: R$ ");
    scanf("%f", &salarioPorHora);

    // Calcula o número de horas extras
    if (horasTrabalhadas > 40 * 4) {  // 40 horas/semana * 4 semanas
        horasExtras = horasTrabalhadas - 40 * 4;
    } else {
        horasExtras = 0;
    }

    // Calcula o salário para horas normais e horas extras
    salarioHoraExtra = salarioPorHora * 1.50;
    salarioHorasNormais = (40 * 4 - horasExtras) * salarioPorHora;
    salarioTotal = salarioHorasNormais + horasExtras * salarioHoraExtra;

    // Exibe o salário total do funcionário
    printf("O salário total do funcionário é: R$ %.2f\n", salarioTotal);

    return 0;
}
