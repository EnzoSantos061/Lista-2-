5 - 
Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem que diga se ela poder´a ou
não votar este ano (n˜ao ´e necess´ario considerar o mˆes em que a pessoa nasceu).

#include <stdio.h>

int main() {
    int anoAtual, anoNascimento, idade;

    // Solicita o ano atual e o ano de nascimento
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    // Calcula a idade da pessoa
    idade = anoAtual - anoNascimento;

    // Exibe a idade calculada
    printf("A idade da pessoa é: %d anos\n", idade);

    // Verifica se a pessoa pode votar
    if (idade >= 16) {
        printf("A pessoa pode votar este ano.\n");
    } else {
        printf("A pessoa não pode votar este ano.\n");
    }

    return 0;
}
