#include <stdio.h>

const int TORRESCASAS = 5;
const int BISPOCASAS = 8;
const int RAINHACASAS = 8;

const int CAVALOVERTICAL = 2;
const int CAVALOHORIZONTAL = 1;

// Funções recursivas
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima\n");
        printf("Direita\n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Função do Cavalo
void moverCavalo() {
    int movimentoCompleto = 1;
    while (movimentoCompleto--) { 
        for (int i = 0; i < CAVALOVERTICAL; i++)
            printf("Cima\n");
        for (int j = 0; j < CAVALOHORIZONTAL; j++)
            printf("Direita\n");
    }
    printf("Cima\nBaixo\nEsquerda\nDireita\n");
}

int main() {
    int escolha;

    printf("Escolha a peça para mover:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    printf("\n:::: Movimento da peça escolhida ::::\n");

    switch (escolha) {
        case 1:
            moverTorre(TORRESCASAS);
            break;
        case 2:
            moverBispo(BISPOCASAS);
            break;
        case 3:
            moverRainha(RAINHACASAS);
            break;
        case 4:
            moverCavalo();
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}