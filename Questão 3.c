#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
         return 0;
    } else if (n == 1) {
         return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro para encontrar o termo correspondente na sequencia de Fibonacci: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, insira um numero inteiro nao-negativo.\n");
    } else {
        printf("O %d-ésimo termo da sequência de Fibonacci e: %d\n", n, fibonacci(n));
    }

    return 0;
}