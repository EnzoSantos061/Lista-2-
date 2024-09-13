7 - 
Ler dois valores (considere que n˜ao ser˜ao lidos valores iguais) e escrevˆe-los em ordem crescente.

#include <stdio.h>

int main() {
    int valor1, valor2;

    // Solicita os dois valores ao usuário
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    // Verifica qual valor é menor e exibe-os em ordem crescente
    if (valor1 < valor2) {
        printf("Valores em ordem crescente: %d, %d\n", valor1, valor2);
    } else {
        printf("Valores em ordem crescente: %d, %d\n", valor2, valor1);
    }

    return 0;
}