//Leia 4 números float e calcule a média.
#include <stdio.h>
int main() {
    float numeros[4];
    float soma = 0.0;
    int i;

    for (i = 0; i < 4; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    float media = soma / 4;
    printf("A média dos números digitados é: %.2f\n", media);

    return 0;
}