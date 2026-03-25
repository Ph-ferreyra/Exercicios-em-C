/*
Lista: 01
Exercício: 03
Aluno: Pedro Henrique Ferreira Rolim
Descrição: Comparar desempenho de dois funcionários
*/

#include <stdio.h>

int main() {
    int A[] = {8, 7, 9};
    int B[] = {6, 7, 10};
    int tamanho = 3;

    int pontosA = 0;
    int pontosB = 0;

    for (int i = 0; i < tamanho; i++) {
        if (A[i] > B[i]) {
            pontosA++;
        } else if (B[i] > A[i]) {
            pontosB++;
        }
    }

    printf("Funcionario A: %d ponto(s)\n", pontosA);
    printf("Funcionario B: %d ponto(s)\n", pontosB);

    return 0;
}