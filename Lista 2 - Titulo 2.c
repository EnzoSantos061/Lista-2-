2 - 
Ler um valor e escrever se ´e positivo ou negativo (considere o valor zero como positivo).

#include <stdio.h>

int main() {
    int valor;

    // Solicita a entrada do usuário
    printf("Digite um valor: ");
    scanf("%d", &valor);

    // Verifica se o valor é positivo ou negativo
    if (valor >= 0) {
        printf("O valor e positivo.\n");
    } else {
        printf("O valor e negativo.\n");
    }

    return 0;
}
