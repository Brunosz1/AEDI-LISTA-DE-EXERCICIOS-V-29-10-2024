#include <stdio.h>
#include <stdlib.h>

int* gerarPA(int quantidade, int valorInicial, int razao) {
    int* array = (int*)malloc(quantidade * sizeof(int));
    for (int i = 0; i < quantidade; i++) {
        array[i] = valorInicial + i * razao;
    }
    return array;
}
void imprimirArray(int* array, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int quantidade, valorInicial, razao;

    printf("Digite a quantidade de elementos da PA: ");
    scanf("%d", &quantidade);
    printf("Digite o valor inicial: ");
    scanf("%d", &valorInicial);
    printf("Digite a razao da PA: ");
    scanf("%d", &razao);

    int* arrayPA = gerarPA(quantidade, valorInicial, razao);
    printf("Progressao Aritmetica: ");
    imprimirArray(arrayPA, quantidade);
    free(arrayPA);
    return 0;
}