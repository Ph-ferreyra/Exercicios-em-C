/*
Lista: 01
Exercício: 06
Aluno: Pedro Henrique Ferreira Rolim
Descrição: Mostrar números maiores que 5 e letras alternadas
*/

#include <stdio.h>

int main() {
    int vetor[] = {3, 7, 2, 9, 5, 8, 1};
    int tamanho = 7;

    printf("Numeros maiores que 5:\n");

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > 5) {
            printf("%d ", vetor[i]);
        }
    }

    printf("\n");

    char sobrenome[] = "rolim";

    printf("Letras alternadas:\n");

    for (int i = 0; sobrenome[i] != '\0'; i += 2) {
        printf("%c", sobrenome[i]);
    }

    printf("\n");

    return 0;
}