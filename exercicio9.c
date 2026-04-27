//Leia 5 números e substitua os  valores negativos por 0.
#include <stdio.h>
int main() { 
    int numeros[5];

    printf("Digite 5 números:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] < 0) {
            numeros[i] = 0;
        }
    }

    printf("Vetor após substituir negativos por 0:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}