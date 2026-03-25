/*
Lista: 01
Exercício: 02
Aluno: Pedro Henrique Ferreira Rolim
Descrição: Encontrar a maior soma de reproduções consecutivas
*/

#include <stdio.h>

int main() {
    int reproducoes[] = {120, 150, 80, 200, 300, 250};
    int tamanho = 6;

    int maiorSoma = reproducoes[0] + reproducoes[1];
    int indice = 0;

    for (int i = 0; i < tamanho - 1; i++) {
        int soma = reproducoes[i] + reproducoes[i + 1];

        if (soma > maiorSoma) {
            maiorSoma = soma;
            indice = i;
        }
    }

    printf("Maior soma: %d\n", maiorSoma);
    printf("Dias: %d e %d\n", indice, indice + 1);

    return 0;
}