#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça vai se mover
    int movimentoTorre = 5;   // Torre -> 5 casas para a direita
    int movimentoBispo = 5;   // Bispo -> 5 casas na diagonal para cima e direita
    int movimentoRainha = 8;  // Rainha -> 8 casas para a esquerda

    // ===================== TORRE (for) =====================
    // A Torre anda em linha reta (horizontal ou vertical).
    // Neste caso, ela vai se mover 5 casas para a direita.
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ===================== BISPO (while) =====================
    // O Bispo anda nas diagonais.
    // Aqui vamos simular 5 casas na diagonal "Cima Direita".
    printf("Movimento do Bispo:\n");
    int contadorBispo = 1;
    while (contadorBispo <= movimentoBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // ===================== RAINHA (do-while) =====================
    // A Rainha pode andar em todas as direções.
    // Neste exemplo, ela vai andar 8 casas para a esquerda.
    printf("Movimento da Rainha:\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    return 0;
}
