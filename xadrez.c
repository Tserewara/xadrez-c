// xadrez.c
// Simula movimentos das peças de xadrez usando estruturas de repetição e recursividade
// Autor: [Seu Nome]

#include <stdio.h>

// --- Torre com recursividade ---
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// --- Bispo com recursividade e loops aninhados ---
void moverBispo(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
}

// --- Rainha com recursividade ---
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// --- Cavalo com loops complexos (2 para cima, 1 para direita) ---
void moverCavalo() {
    int i, j;
    for (i = 0, j = 0; i < 2 || j < 1; ) {
        if (i < 2) {
            printf("Cima\n");
            i++;
            continue;
        }
        if (j < 1) {
            printf("Direita\n");
            j++;
        } else {
            break;
        }
    }
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do Cavalo
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
