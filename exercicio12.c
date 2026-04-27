/*Deseja-se publicar o número de acertos de cada aluno em uma prova em forma de testes.
A prova consta de 30 questões, cada uma com cinco alternativas identificadas por A, B, C, De E.
Para isso são dados: o cartão gabarito; o cartão de respostas para cada aluno, contando o seu número e suas respostas.
Mostre quantas questões o aluno acertou e qual a porcentagem que acertou.
*/
#include <stdio.h>
#include <string.h>

void main() {
    char gabarito[31], respostas[31];
    int acertos = 0;
    double porcentagem;

    printf("Digite o gabarito (30 caracteres): ");
    fgets(gabarito, sizeof(gabarito), stdin);
    gabarito[strcspn(gabarito, "\n")] = '\0';

    printf("Digite as respostas do aluno (30 caracteres): ");
    fgets(respostas, sizeof(respostas), stdin);
    respostas[strcspn(respostas, "\n")] = '\0';

    for (int i = 0; i < 30; i++) {
        if (gabarito[i] == respostas[i]) {
            acertos++;
        }
    }

    porcentagem = (double)acertos / 30 * 100;

    printf("Numero de acertos: %d\n", acertos);
    printf("Porcentagem de acertos: %.2f%%\n", porcentagem);

    
}

