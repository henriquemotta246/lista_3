// Leia 5 números e verifique se existe o número 50  no vetor
#include <stdio.h>
void main() {
    int numeros[5];
    int encontrado = 0;

    printf("Digite 5 números:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] == 50) {
            encontrado = 1;
        }
    }

    if (encontrado) {
        printf("O número 50 foi encontrado no vetor.\n");
    } else {
        printf("O número 50 não foi encontrado no vetor.\n");
    }

    
}