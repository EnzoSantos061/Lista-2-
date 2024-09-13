1 - 
Ler um valor e escrever a mensagem E MAIOR QUE 10! se o valor lido for maior que 10, caso contr´ario ´
escrever NAO˜ E MAIOR QUE 10!

#include <stdio.h>

int main() {
    int valor;

    // Solicita a entrada do usuário
    printf("Digite um valor: ");
    scanf("%d", &valor);

    // Verifica se o valor é maior que 10
    if (valor > 10) {
        printf("E MAIOR QUE 10!\n");
    } else {
        printf("NAO E MAIOR QUE 10!\n");
    }

    return 0;
}

