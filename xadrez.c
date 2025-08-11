#include <stdio.h>

int main(){
    int torre;
    int bispo;
    int rainha;

    // Mover a Torre 5 casas para a direita
        printf("::::Torre::::\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }

    // Mover o Bispo 5 casas para cima e direita

        printf("::::Bispo::::\n");
    for (int i = 0; i < 5; i++){
        printf("Cima, Direita\n");
    }

    // Mover Rainha 8 casas para a esquerda
        printf("::::Rainha::::\n");
    for (int i = 0; i < 8; i++){
        printf("Esquerda\n");
    }

    return 0;
}
                    