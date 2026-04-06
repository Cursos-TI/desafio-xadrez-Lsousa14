#include <stdio.h>

int main(){

  // TORRE (usando FOR)

 int i;
    int casas_torre = 5;

    printf("Movimento da Torre:\n");

    for (i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    
    // BISPO (usando WHILE)
  

    int movimento_bispo = 0;
    int casas_bispo = 5;

    printf("\nMovimento do Bispo:\n");

    while (movimento_bispo < casas_bispo) {
        printf("Cima, Direita\n");
        movimento_bispo++;
    }

    // RAINHA (usando DO-WHILE)
    

    int movimento_rainha = 0;
    int casas_rainha = 8;

    printf("\nMovimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        movimento_rainha++;
    } while (movimento_rainha < casas_rainha);

    return 0;
}


