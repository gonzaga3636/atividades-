int main() {
    float numero1, numero2, soma;

    // Leitura dos dois números
    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    // Realiza a soma dos números
    soma = numero1 + numero2;

    // Verifica a condição e ajusta o valor da soma
    if (soma < 20) {
        soma += 8;  // Soma 8 caso o valor seja menor que 20
    } else {
        soma -= 5;  // Subtrai 5 caso o valor seja igual ou maior que 20
    }

    // Exibe o resultado final
    printf("O resultado é: %.2f\n", soma);

    return 0;
}
