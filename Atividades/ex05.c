/*
Lista: 01
Exercício: 05
Aluno: Pedro Henrique Ferreira Rolim
Descrição: Exibir vetor de trás para frente
*/

#include <stdio.h>

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = 5;

    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}