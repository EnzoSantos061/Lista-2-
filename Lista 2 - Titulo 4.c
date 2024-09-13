4 - 
Ler as notas da 1ª. e 2ª. avalia¸c˜oes de um aluno. Calcular a m´edia aritm´etica simples e escrever uma
mensagem que diga se o aluno foi ou n˜ao aprovado (considerar que nota igual ou maior que 7 o aluno ´e
aprovado). Escrever tamb´em a m´edia calculada.

#include <stdio.h>

int main() {
    float nota1, nota2, media;

    // Solicita as notas das avaliações
    printf("Digite a nota da 1ª avaliação: ");
    scanf("%f", &nota1);
    printf("Digite a nota da 2ª avaliação: ");
    scanf("%f", &nota2);

    // Calcula a média aritmética simples
    media = (nota1 + nota2) / 2;

    // Exibe a média calculada
    printf("A média das avaliações é: %.2f\n", media);

    // Verifica se o aluno foi aprovado
    if (media >= 7.0) {
        printf("O aluno foi aprovado.\n");
    } else {
        printf("O aluno não foi aprovado.\n");
    }

    return 0;
}