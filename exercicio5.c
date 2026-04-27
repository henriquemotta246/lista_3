//Leia 5 números e conte quantos são positivos.
#include <stdio.h>
int main() {
    int numeros[5];
    int i;
    int contadorPositivos = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
        if (numeros[i] > 0) {
            contadorPositivos++;
        }
    }

    printf("O número de valores positivos digitados é: %d\n", contadorPositivos);

    return 0;
}