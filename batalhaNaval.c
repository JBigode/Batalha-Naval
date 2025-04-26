#include <stdio.h>

int main (){
    char linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'j'};
    //1. Criando o Tabuleiro (Matriz 10x10)
    int tabuleiro [10][10];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] =0;
        }
    }

    // Posicionar navio em F7 (vertical) 
    for (int i = 6; i < 9; i++) { 
        tabuleiro[i][5] = 3; // 3 representa navio
    }

    // Posicionar navio em C3 (horizontal) 
    for (int j = 2; j < 5; j++) { // ocupar 3 casas pra direita
        tabuleiro[2][j] = 3; // 3 representa navio
    }
    
    // Imprimindo o titulo
    printf("TABULEIRO BATALHA NAVAL\n\n ");
    for (int i = 0; i < 10; i++)
    {
        printf(" %c", linha[i]);
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