#include <stdio.h>

int mcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mcd(b, a % b);
    }
}

int main() {
    int num1, num2;

    printf("Digite dois numeros inteiros positivos:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Por favor, insira apenas numeros inteiros positivos.\n");
    } else {
        printf("O Minimo Comum Divisor de %d e %d é: %d\n", num1, num2, mcd(num1, num2));
    }

    return 0;
}