10 - 
Crie um algoritmo para, tendo como dados de entrada o nome, a altura e o sexo (M ou F) de uma pessoa,
calcule e mostre seu peso ideal, utilizando as seguintes f´ormulas:
• para sexo masculino: peso ideal = (72, 7 × altura) − 58
• para sexo feminino: peso ideal = (62, 1 × altura) − 44, 7


#include <stdio.h>

int main() {
    char nome[100];
    char sexo;
    float altura, pesoIdeal;

    // Solicita o nome, altura e sexo ao usuário
    printf("Digite o nome da pessoa: ");
    fgets(nome, sizeof(nome), stdin);  // Usa fgets para ler o nome, permitindo espaços
    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &altura);
    printf("Digite o sexo da pessoa (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);  // O espaço antes de %c é para ignorar qualquer caractere de nova linha pendente

    // Calcula o peso ideal com base no sexo
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo inválido. Use 'M' para masculino ou 'F' para feminino.\n");
        return 1;  // Encerra o programa com um código de erro
    }

    // Exibe o resultado
    printf("Nome: %s", nome);
    printf("Altura: %.2f metros\n", altura);
    printf("Sexo: %c\n", sexo);
    printf("Peso Ideal: %.2f kg\n", pesoIdeal);

    return 0;
}
