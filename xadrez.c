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

    printf("Movimento do Bispo\n"); //movimento do Bispo (Cima / Direita)
    int i = 1;

    while (i <= bispo)  //usando while
    {
        printf("Cima direita\n");
        i++;
    }

    printf("Movimento da Rainha\n");    //movimento da Rainha (Esquerda)
    int r = 1;

    do  //usando Do while
    {
        printf("Esquerda.\n");
        r++;
    } while (r <= rainha);
    
    
    
    

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
