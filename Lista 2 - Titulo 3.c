3 - 
As maças custam R$1, 30 cada se forem compradas menos de uma d´uzia, e R$1, 00 se forem compradas pelo
menos 12. Escreva um programa que leia o n´umero de ma¸c˜as compradas, calcule e escreva o custo total da
compra.

#include <stdio.h>

int main() {
    int numeroMacas;
    float custoTotal;

    // Solicita a entrada do número de maçãs
    printf("Digite o número de maçãs compradas: ");
    scanf("%d", &numeroMacas);

    // Calcula o custo total com base no número de maçãs
    if (numeroMacas < 12) {
        custoTotal = numeroMacas * 1.30;
    } else {
        custoTotal = numeroMacas * 1.00;
    }

    // Exibe o custo total
    printf("O custo total da compra é: R$%.2f\n", custoTotal);

    return 0;
}
