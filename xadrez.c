#include <stdio.h>

// Torre (recursivo)

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Bispo (recursivo + loops aninhados)

void moverBispo(int casas) {
    if (casas > 0) {
        for (int i = 0; i < 1; i++) {         
            for (int j = 0; j < 1; j++) {     
                printf("Cima, Direita\n");
            }
        }
        moverBispo(casas - 1);
    }
}

// Rainha (recursivo)

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Cavalo (loops aninhados com break e continue)

void moverCavalo(int cima, int direita) {
    for (int i = 0; i < cima; i++) {
        
        
        printf("Cima\n");

        if (i == cima - 1) {
            for (int j = 0; j < direita + 2; j++) {
                if (j == direita) {
                    break;
                }
                printf("Direita\n");
            }
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo(2, 1);

    return 0;

}