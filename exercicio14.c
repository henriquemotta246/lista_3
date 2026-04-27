/*(COMP 89) dados dois string (um contendo uma frase  e outro contendo  uma palavra), 
determine o número de vezes que a palavra ocorre na frase.
Exemplo:
	Para a palavra Ana e a frase:

	Ana e mariana gostam de banana (2).

	Temos que a palavra ocorre 4 vezes na frase.
*/
#include <stdio.h>
#include <string.h>
int main() {
    char frase[100], palavra[20];
    int count = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; // Remove o newline

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    char *token = strtok(frase, " ");
    while (token != NULL) {
        if (strcmp(token, palavra) == 0) {
            count++;
        }
        token = strtok(NULL, " ");
    }

    printf("A palavra '%s' ocorre %d vezes na frase.\n", palavra, count);
    return 0;
}