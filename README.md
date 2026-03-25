# Exerc-cios-em-C
Exercícios em C

---

Exercício: Encontrando Produtos Complementares
em um Carrinho de Compras

Você está desenvolvendo um sistema de e-commerce que permite aos usuários adicionar
produtos a um carrinho de compras. Foi solicitado implementar uma recomendação de produtos
complementares. Para isso, você precisa encontrar dois produtos no carrinho de compras que,
juntos, somem a um valor específico, como um desconto ou uma promoção.
Dada uma lista de preços de produtos no carrinho de compras e um valor alvo (por exemplo, um
valor de desconto), encontre dois produtos cujos preços somem ao valor alvo. Retorne os índices
desses dois produtos. 
-
    #include <stdio.h>

    int main() {
    int precos[] = {10, 20, 35, 50, 75};
    int tamanho = 5;
    int alvo = 55;

    int i, j;
    int encontrado = 0;

    for(i = 0; i < tamanho; i++) {
        for(j = i + 1; j < tamanho; j++) {
            if(precos[i] + precos[j] == alvo) {
                printf("Indices encontrados: [%d, %d]\n", i, j);
                encontrado = 1;
                break;
            }
        }
        if(encontrado) {
            break;
        }
    }

    if(!encontrado) {
        printf("Nenhum par encontrado.\n");
    }

    ---

Exercício: Análise de Popularidade de Músicascom Soma de Reproduções Consecutivas

Contexto: Você trabalha em uma empresa que gerencia um sistema de streaming de música. Uma das
análises que você precisa fazer é identificar as músicas mais populares com base no número de
reproduções em dias consecutivos. Isso pode ajudar a entender quais músicas estão ganhando
popularidade rapidamente e ajustar as recomendações para os usuários.
Problema: Dada uma lista de reproduções diárias de uma música, encontre o par de dias consecutivos
que tem a maior soma de reproduções e retorne essa soma. Isso pode indicar um aumento
significativo na popularidade da música.
Exemplo: Suponha que você tenha a lista de reproduções diárias [120, 150, 80, 200, 300, 250]. A
maior soma de reproduções consecutivas é 550, que é a soma das reproduções nos dias 300 e 250.
- 

    #include <stdio.h>

    int main() {
    int reproducoes[] = {120, 150, 80, 200, 300, 250};
    int tamanho = 6;

    int maiorSoma = 0;
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

---

Exercício: Avaliação de
Desempenho dos Funcionários

Contexto: Você trabalha no departamento de Recursos Humanos de uma empresa. A empresa realiza avaliações de
desempenho dos funcionários em três categorias: produtividade, qualidade do trabalho e pontualidade. Cada
funcionário recebe uma nota em cada categoria. A tarefa é comparar as notas de dois funcionários e determinar
quem teve o melhor desempenho em cada categoria.
Problema: Dadas as notas de desempenho de dois funcionários em três categorias, compare as notas e atribua
pontos com base nas seguintes regras:
◦ Se a nota do Funcionário A em uma categoria for maior que a do Funcionário B, o Funcionário A recebe 1 ponto.
◦ Se a nota do Funcionário B em uma categoria for maior que a do Funcionário A, o Funcionário B recebe 1 ponto.
◦ Se as notas forem iguais, nenhum ponto é atribuído.
Você deve calcular e retornar os pontos de ambos os funcionários.


Exemplo: Se as notas do Funcionário A forem [8, 7, 9] e as notas do Funcionário B forem [6, 7,
10], a comparação seria:
Categoria 1: Funcionário A (8) vs Funcionário B (6) -> Funcionário A ganha 1 ponto.
Categoria 2: Funcionário A (7) vs Funcionário B (7) -> Nenhum ponto.
Categoria 3: Funcionário A (9) vs Funcionário B (10) -> Funcionário B ganha 1 ponto.
Resultado: Funcionário A 1 ponto, Funcionário B 1 ponto
-
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

---

Exercício – Contagem de vogais e consoantes

ØDada uma string s, escreva um programa que conte o número de vogais e consoantes presentes na
string; Considere apenas letras minúsculas do alfabeto, ignorando espaços, números ou caracteres
especiais.
ØEntrada: String s (1 ≤ |s| ≤ 50), onde |s| é o comprimento da string.
ØSaída: Dois números inteiros, representando o número de vogais e o número de consoantes na string,
respectivamente
ØExemplo: Caso entre com o texto “ola, mundo", deverá aparecer: 4 4, pois são 4 vogais e 4 consoantes
ØNão use funções da biblioteca string.h, use somente estrutura de condição e laços de repetição
-

#include <stdio.h>

int main() {
    char s[51];
    int vogais = 0, consoantes = 0;

    printf("Digite uma string: ");
    fgets(s, 51, stdin);

    for (int i = 0; s[i] != '\0'; i++) {

        // verifica se é letra minúscula
        if (s[i] >= 'a' && s[i] <= 'z') {

            // verifica se é vogal
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

---

1. Declare um vetor de inteiros e apresente os valores de trás para frente;

       #include <stdio.h>

       int main() {
       int vetor[] = {10, 20, 30, 40, 50};
       int tamanho = 5;

       printf("Vetor ao contrário:\n");

       for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

       printf("\n");

       return 0;
}

---

2. Declare um vetor de inteiros com números aleatórios e apresente somente números acima de
5; Declare um vetor de char com seu sobrenome e exiba somente letras alternadas, por
exemplo, caparroz, irá exibir: cpro

       #include <stdio.h>

       int main() {
       // Parte 1
       int vetor[] = {3, 7, 2, 9, 5, 8, 1};
       int tamanho = 7;

       printf("Numeros maiores que 5:\n");

       for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > 5) {
            printf("%d ", vetor[i]);
        }
     }

       printf("\n");

       // Parte 2
       char sobrenome[] = "rolim"; // coloque o seu sobrenome aqui

       printf("Letras alternadas:\n");

       for (int i = 0; sobrenome[i] != '\0'; i += 2) {
        printf("%c", sobrenome[i]);
    }

       printf("\n");

       return 0;
}

---

Declare um vetor de inteiros com idades e exiba somente números impares
-

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

    return 0;
}
