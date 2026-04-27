// Leia 5 números e crie outro vetor com 1 para par e 0 para ímpar
#include <stdio.h>
int main() { 
    int numeros[5], parOuImpar[5];

    printf("Digite 5 números:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
        parOuImpar[i] = (numeros[i] % 2 == 0) ? 1 : 0;
    }

    printf("Vetor de par ou ímpar (1 para par, 0 para ímpar):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", parOuImpar[i]);
    }
    printf("\n");

    return 0;
}