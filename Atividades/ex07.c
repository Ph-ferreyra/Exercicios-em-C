/*
Lista: 01
Exercício: 07
Aluno: Pedro Henrique Ferreira Rolim
Descrição: Exibir apenas idades ímpares
*/

#include <stdio.h>

int main() {
    int idades[] = {18, 21, 30, 17, 25, 40, 33};
    int tamanho = 7;

    printf("Idades impares:\n");

    for (int i = 0; i < tamanho; i++) {
        if (idades[i] % 2 != 0) {
            printf("%d ", idades[i]);
        }
    }

    printf("\n");

    return 0;
}