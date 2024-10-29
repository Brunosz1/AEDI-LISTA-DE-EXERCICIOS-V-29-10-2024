#include <stdio.h>

int soma(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + soma(n - 1);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Por favor, insira um numero inteiro positivo.\n");
    } else {
        printf("A soma de 1 ate %d e: %d\n", n, soma(n));
    }

    return 0;
}