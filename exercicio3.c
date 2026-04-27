// Leia 6 números e mostre o maior e o menor valor.
#include <stdio.h>
void main() {
    int numeros[6];
    int i;
    int maior, menor;

    for (i = 0; i < 6; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = menor = numeros[0];

    for (i = 1; i < 6; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    
}