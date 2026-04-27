//Leia 6 números e mostre apenas os números maiores que 10.
#include <stdio.h>
int main() {
    int numero[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite um numero: \n");
        scanf("%d", &numero[i]);
    }

    printf("Numeros maiores que 10:\n");
    for (i = 0; i < 6; i++) {
        if (numero[i] > 10) {
            printf("%d\n", numero[i]);
        }
    }

    return 0;
}