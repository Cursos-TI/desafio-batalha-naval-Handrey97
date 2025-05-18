#include <stdio.h>

#define TAMANHO_TABULEIRO 10

void exibirTabuleiro(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    // Exibe o tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Inicializa o tabuleiro com a marcação de água ('~')
    char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = '~';
        }
    }

    // Declaração das variáveis para o posicionamento dos navios
    int x1, y1, x2, y2;
    int tamanhoNavioVertical = 3;  // Por exemplo, um navio com 3 partes
    int tamanhoNavioHorizontal = 4; // Outro navio com 4 partes

    // Posicionamento do navio vertical (exemplo de navio com 3 partes)
    printf("Posicionando o navio vertical (com 3 partes):\n");
    printf("Informe a coordenada X de inicio (0 a 9): ");
    scanf("%d", &x1);
    printf("Informe a coordenada Y de inicio (0 a 9): ");
    scanf("%d", &y1);

    // Posicionando o navio vertical
    for (int i = 0; i < tamanhoNavioVertical; i++) {
        if (x1 + i < TAMANHO_TABULEIRO) {
            tabuleiro[x1 + i][y1] = 'V'; // Marca a posição do navio vertical
            printf("Parte do navio vertical em: (%d, %d)\n", x1 + i, y1);
        }
    }

    // Posicionamento do navio horizontal (exemplo de navio com 4 partes)
    printf("\nPosicionando o navio horizontal (com 4 partes):\n");
    printf("Informe a coordenada X de inicio (0 a 9): ");
    scanf("%d", &x2);
    printf("Informe a coordenada Y de inicio (0 a 9): ");
    scanf("%d", &y2);

    // Posicionando o navio horizontal
    for (int i = 0; i < tamanhoNavioHorizontal; i++) {
        if (y2 + i < TAMANHO_TABULEIRO) {
            tabuleiro[x2][y2 + i] = 'H'; // Marca a posição do navio horizontal
            printf("Parte do navio horizontal em: (%d, %d)\n", x2, y2 + i);
        }
    }

    // Exibe o tabuleiro após o posicionamento dos navios
    exibirTabuleiro(tabuleiro);

    return 0;
}

