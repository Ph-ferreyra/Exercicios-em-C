/*
Lista: 01
Exercício: 01
Aluno: Pedro Henrique Ferreira Rolim
Descrição: Encontrar dois produtos cuja soma seja igual ao valor alvo
*/

#include <stdio.h>

int main() {
    int precos[] = {10, 20, 35, 50, 75};
    int tamanho = 5;
    int alvo = 55;

    int encontrado = 0;

    for(int i = 0; i < tamanho; i++) {
        for(int j = i + 1; j < tamanho; j++) {
            if(precos[i] + precos[j] == alvo) {
                printf("Indices encontrados: [%d, %d]\n", i, j);
                encontrado = 1;
                break;
            }
        }
        if(encontrado) break;
    }

    if(!encontrado) {
        printf("Nenhum par encontrado.\n");
    }

    return 0;
}