#include <stdio.h>

// Desafio Batalha Naval - Introdução à programação de computadores (Tema 4)
// Karina Salvadeo Pereira (Engenharia de software)

int main() {
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posição dos 4 navios (tamanho 3) - sem sobreposição
    // Horizontal
    int linha1 = 1, coluna1 = 1;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha1][coluna1 + i] = 3;
    }

    // Vertical
    int linha2 = 4, coluna2 = 3;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha2 + i][coluna2] = 3;
    }

    // Diagonal principal
    int linha3 = 6, coluna3 = 0;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha3 + i][coluna3 + i] = 3;
    }

    // Diagonal secundária
    int linha4 = 6, coluna4 = 9;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha4 + i][coluna4 - i] = 3;
    }

    // MATRIZ DE HABILIDADE - CONE (5x5)
    int cone[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i) {
                cone[i][j] = 1;
            } else {
                cone[i][j] = 0;
            }
        }
    }

    // MATRIZ DE HABILIDADE - CRUZ (5x5)
    int cruz[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || j == 2) {
                cruz[i][j] = 1;
            } else {
                cruz[i][j] = 0;
            }
        }
    }

    // MATRIZ DE HABILIDADE - OCTAEDRO (5x5)
    int octaedro[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (abs(i - 2) + abs(j - 2) <= 2) {
                octaedro[i][j] = 1;
            } else {
                octaedro[i][j] = 0;
            }
        }
    }

    // SOBREPOR HABILIDADES NO TABULEIRO

    // Habilidade CONE - centro (2,2)
    int origem_linha = 2, origem_coluna = 2;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int lin = origem_linha + i - 2;
            int col = origem_coluna + j - 2;
            if (lin >= 0 && lin < 10 && col >= 0 && col < 10 && cone[i][j] == 1 && tabuleiro[lin][col] == 0) {
                tabuleiro[lin][col] = 5;
            }
        }
    }

    // Habilidade CRUZ - centro (5,5)
    origem_linha = 5;
    origem_coluna = 5;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int lin = origem_linha + i - 2;
            int col = origem_coluna + j - 2;
            if (lin >= 0 && lin < 10 && col >= 0 && col < 10 && cruz[i][j] == 1 && tabuleiro[lin][col] == 0) {
                tabuleiro[lin][col] = 5;
            }
        }
    }

    // Habilidade OCTAEDRO - centro (7,7)
    origem_linha = 7;
    origem_coluna = 7;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int lin = origem_linha + i - 2;
            int col = origem_coluna + j - 2;
            if (lin >= 0 && lin < 10 && col >= 0 && col < 10 && octaedro[i][j] == 1 && tabuleiro[lin][col] == 0) {
                tabuleiro[lin][col] = 5;
            }
        }
    }

    // IMPRIMIR O TABULEIRO FINAL
    printf("Tabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
