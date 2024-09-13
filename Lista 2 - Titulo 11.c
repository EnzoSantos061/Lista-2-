11 - 
Ler o salario fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe
uma comiss˜ao de 3% sobre o total das vendas at´e R$1.500, 00 mais 5% sobre o que ultrapassar este valor,
calcular e escrever o seu salario total.


#include <stdio.h>

int main() {
    float salarioFixo, valorVendas, comissao, salarioTotal;

    // Solicita o salário fixo e o valor das vendas ao usuário
    printf("Digite o salário fixo do vendedor: R$ ");
    scanf("%f", &salarioFixo);
    printf("Digite o valor total das vendas efetuadas: R$ ");
    scanf("%f", &valorVendas);

    // Calcula a comissão com base no valor das vendas
    if (valorVendas <= 1500.00) {
        comissao = valorVendas * 0.03;  // 3% sobre o total das vendas
    } else {
        comissao = (1500.00 * 0.03) + ((valorVendas - 1500.00) * 0.05);  // 3% sobre R$1500,00 e 5% sobre o que ultrapassar
    }

    // Calcula o salário total
    salarioTotal = salarioFixo + comissao;

    // Exibe o salário total
    printf("O salário total do vendedor é: R$ %.2f\n", salarioTotal);

    return 0;
}