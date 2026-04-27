//Leia 5 números e mostre a soma dos pares e dos ímpares


#include <stdio.h>
int main() {
    int numeros[5], somaPares = 0, somaImpares = 0;

    printf("Digite 5 números:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
        } else {
            somaImpares += numeros[i];
        }
    }

    printf("Soma dos números pares: %d\n", somaPares);
    printf("Soma dos números ímpares: %d\n", somaImpares);

    return 0;
}