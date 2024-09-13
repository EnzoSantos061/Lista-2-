6 - 
Ler dois valores (considere que n˜ao ser˜ao lidos valores iguais) e escrever o maior deles

#include <stdio.h>

int main() {
    int valor1, valor2;

    // Solicita os dois valores ao usuário
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    // Verifica qual valor é o maior e exibe-o
    if (valor1 > valor2) {
        printf("O maior valor é: %d\n", valor1);
    } else {
        printf("O maior valor é: %d\n", valor2);
    }

    return 0;
}