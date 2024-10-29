#include <stdio.h>

int buscaBinaria(int array[], int inicio, int fim, int valor) {
    if (inicio > fim) {
        return -1;
    }
    
    int meio = (inicio + fim) / 2;

    if (array[meio] == valor) {
        return meio; 
    } else if (array[meio] > valor) {
        return buscaBinaria(array, inicio, meio - 1, valor);
    } else {
        return buscaBinaria(array, meio + 1, fim, valor);
    }
}

int main() {
    int n, valor, resultado;

    printf("Digite o numero de elementos do array: ");
    scanf("%d", &n);

    int array[n];
    printf("Digite os elementos do array em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Digite o valor a ser procurado: ");
    scanf("%d", &valor);

    resultado = buscaBinaria(array, 0, n - 1, valor);

    if (resultado != -1) {
        printf("Elemento encontrado no indice: %d\n", resultado);
    } else {
        printf("Elemento nao encontrado.\n");
    }

    return 0;
}