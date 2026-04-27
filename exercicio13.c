/*Tentando descobrir se um dado era viciado, um dono de cassino honesto o lançou n vezes. 
Dados os n resultados dos lançamentos, determinar o número de ocorrências de cada face.
*/

#include <stdio.h>
int main() {
    int n, i, face, ocorrencias[6] = {0};

    printf("Digite o número de lançamentos: ");
    scanf("%d", &n);

    printf("Digite os resultados dos lançamentos (1 a 6):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &face);
        if (face >= 1 && face <= 6) {
            ocorrencias[face - 1]++;
        } else {
            printf("Face inválida: %d. Ignorando.\n", face);
        }
    }

    printf("Número de ocorrências de cada face:\n");
    for (i = 0; i < 6; i++) {
        printf("Face %d: %d vezes\n", i + 1, ocorrencias[i]);
    }

    return 0;
}
