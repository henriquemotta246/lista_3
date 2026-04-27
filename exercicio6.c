// Leia 5 números inteiros e mostre o vetor invertido.
#include <stdio.h>
void main() {
    int numeros[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("O vetor invertido : ");
    for (i = 4; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    
}