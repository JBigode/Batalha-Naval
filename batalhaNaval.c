#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main (){

    //1. Criando o tabuleiro (Matriz 10x10)
    int tabuleiro [LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] =0;
        }
    }

    // Posicionar navio em F7 (vertical) 
    for (int i = 6; i < 9; i++) { // ocupar 3 casas pra baixo
        tabuleiro[i][5] = 3; // 3 representa navio
    }

    // Posicionar navio em C3 (horizontal) 
    for (int j = 3; j < 6; j++) { // ocupar 3 casas pra direita
        tabuleiro[3][j] = 3; // 3 representa navio
    }

    // Posicionar navio na diagonal principal 
    for (int i = 0; i <= 2; i++) {
        tabuleiro[i][i] = 3;
    }

    // Posicionar navio na diagonal secundária 
    for (int i = 0; i <= 2; i++) {
        tabuleiro[i][9 - i] = 3;
    }
    
    // Imprimindo o tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n\n");
    printf("   ");
    for (char letra = 'A'; letra <= 'J'; letra++)
    {
        printf("%c ", letra);
    }
    printf("\n");

    // Imprimindo o tabuleiro
    for (int i = 0; i < 10; i++){
        printf("%2d", i + 1);
        for (int j = 0; j < 10; j++){
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}