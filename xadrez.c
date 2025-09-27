#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre = 5, rainha = 8, bispo = 5;   //variaveis e as quantidades de casas podem andar

    printf("Movimento da Torre:\n");  //movimento da torre (Direita)
    for (int i = 1; i <= torre; i++)  //usando for
    {
        printf("Direita.\n");
    }

    printf("\nMovimento do Bispo\n"); //movimento do Bispo (Cima / Direita)
    int i = 1;

    while (i <= bispo)  //usando while
    {
        printf("Cima direita\n");
        i++;
    }

    printf("\nMovimento da Rainha\n");    //movimento da Rainha (Esquerda)
    int j = 1;

    do  //usando Do while
    {
        printf("Esquerda.\n");
        j++;
    } while (j <= rainha);
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    printf("\nMovimento do Cavalo.\n");
    int casasbaixo = 2;
    int casasesquerda = 1;

    for(int k = 1; k <= casasbaixo; k++){   //movimento para baixo usando for.
        printf("Baixo.\n");

        if(k == casasbaixo) {
            int l = 1;
            while (l <= casasesquerda) {    //movimento para esquerda utilizando while
                printf("Esquerda\n");
                l++;
            }
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
