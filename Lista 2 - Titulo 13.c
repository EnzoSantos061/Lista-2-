13 - 
Fa¸ca um algoritmo para ler: quantidade atual em estoque, quantidade m´axima em estoque e quantidade
m´ınima em estoque de um produto. Calcular e escrever a quantidade m´edia ((quantidade m´edia = quantidade
m´axima + quantidade m´ınima)/2). Se a quantidade em estoque for maior ou igual a quantidade m´edia escrever
a mensagem ’N˜ao efetuar compra’, sen˜ao escrever a mensagem ’Efetuar compra’.


#include <stdio.h>

int main() {
    int quantidadeAtual, quantidadeMaxima, quantidadeMinima;
    float quantidadeMedia;

    // Solicita a quantidade atual em estoque, quantidade máxima e mínima ao usuário
    printf("Digite a quantidade atual em estoque: ");
    scanf("%d", &quantidadeAtual);
    printf("Digite a quantidade máxima em estoque: ");
    scanf("%d", &quantidadeMaxima);
    printf("Digite a quantidade mínima em estoque: ");
    scanf("%d", &quantidadeMinima);

    // Calcula a quantidade média
    quantidadeMedia = (quantidadeMaxima + quantidadeMinima) / 2.0;  // Usa 2.0 para garantir que a divisão seja feita como float

    // Exibe a quantidade média
    printf("Quantidade média em estoque: %.2f\n", quantidadeMedia);

    // Verifica se é necessário efetuar uma compra
    if (quantidadeAtual >= quantidadeMedia) {
        printf("Não efetuar compra\n");
    } else {
        printf("Efetuar compra\n");
    }

    return 0;
}
