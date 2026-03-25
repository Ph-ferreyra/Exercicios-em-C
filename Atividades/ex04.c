/*
Lista: 01
Exercício: 04
Aluno: Pedro Henrique Ferreira Rolim
Descrição: Contar vogais e consoantes
*/

#include <stdio.h>

int main() {
    char s[51];
    int vogais = 0, consoantes = 0;

    printf("Digite uma string: ");
    fgets(s, 51, stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                vogais++;
            } else {
                consoantes++;
            }
        }
    }

    printf("%d %d\n", vogais, consoantes);

    return 0;
}