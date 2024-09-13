12 - 
Fa¸ca um algoritmo para ler: n´umero da conta do cliente, saldo, d´ebito e cr´edito. Ap´os, calcular e escrever o
saldo atual (saldo atual = saldo - d´ebito + cr´edito). Tamb´em testar se saldo atual for maior ou igual a zero
escrever a mensagem ’Saldo Positivo’, sen˜ao escrever a mensagem ’Saldo Negativo’.


#include <stdio.h>

int main() {
    int numeroConta;
    float saldo, debito, credito, saldoAtual;

    // Solicita o número da conta, saldo, débito e crédito ao usuário
    printf("Digite o número da conta do cliente: ");
    scanf("%d", &numeroConta);
    printf("Digite o saldo da conta: R$ ");
    scanf("%f", &saldo);
    printf("Digite o valor do débito: R$ ");
    scanf("%f", &debito);
    printf("Digite o valor do crédito: R$ ");
    scanf("%f", &credito);

    // Calcula o saldo atual
    saldoAtual = saldo - debito + credito;

    // Exibe o saldo atual
    printf("Saldo atual da conta %d: R$ %.2f\n", numeroConta, saldoAtual);

    // Verifica se o saldo atual é positivo ou negativo
    if (saldoAtual >= 0) {
        printf("Saldo Positivo\n");
    } else {
        printf("Saldo Negativo\n");
    }

    return 0;
}
