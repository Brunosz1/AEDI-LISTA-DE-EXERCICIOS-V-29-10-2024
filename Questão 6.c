#include <stdio.h>

int maior(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1, num2, num3;

    printf("Digite tres numeros inteiros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("O maior numero e: %d\n", maior(num1, num2, num3));

    return 0;
}