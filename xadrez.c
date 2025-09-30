#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

/* int main() {
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

   return 0;
}  */

 
// Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    //  Configurações 
    int TORRE_PASSES = 5;    // Torre: 5 casas para a direita
    int BISPO_PASSES = 5;    // Bispo: 5 casas na diagonal (Cima + Direita)
    int RAINHA_PASSES = 8;   // Rainha: 8 casas para a esquerda
    int CAVALO_CIMA = 2;       // Cavalo: 2 casas para cima
    int CAVALO_DIREITA = 1;    // Cavalo: 1 casa para a direita


//   Funções recursivas

// Torre: recursiva, move "Direita" 
void torre_recursiva(int passos) {
    if (passos > 0) {
    printf("Direita\n");
    torre_recursiva(passos - 1);
    }
}

// Rainha: recursiva, move "Esquerda" 
void rainha_recursiva(int passos) {
    if (passos > 0){ 
    printf("Esquerda\n");
    rainha_recursiva(passos - 1);
    }
}

/* Bispo: recursiva + loops aninhados
   Loop externo = vertical (Cima)
   Loop interno = horizontal (Direita) */
void bispo_recursivo(int passos) {
    if (passos <= 0) return;

    int v;
    for (v = 0; v < 1; v++) {   // vertical
        printf("Cima ");
        int h;
        for (h = 0; h < 1; h++) {   // horizontal
            printf("Direita");
        }
        printf("\n");
    }

    bispo_recursivo(passos - 1);
}


//   Cavalo — loops complexo

void cavalo_movimento_complexo(int passoscima, int passosdireita) {
    int repeticao = 1;
    int externo;
    for (externo = 0; externo < repeticao; externo++) {
        int moverCima = 0;
        int vertical = passoscima;

        while (1) {
            if (moverCima >= vertical) {
                break;
            }
            printf("Cima\n");
            moverCima++;

            if (moverCima < vertical) {
                continue;
            }
        }

        int r, tentativas;
        for (r = 0, tentativas = 0; r < passosdireita && tentativas < 10; tentativas++) {
            if (tentativas > 5) {
                break;
            }
            if (tentativas == 0) {
                printf("Direita\n");
                r++;
            } else {
                continue;
            }
            if (r >= passosdireita) {
                break;
            }
        }
    }
}


//   Função main

int main() {
    printf("Movimento da Torre:\n");
    torre_recursiva(TORRE_PASSES);

    printf("\nMovimento do Bispo:\n");
    bispo_recursivo(BISPO_PASSES);

    printf("\nMovimento da Rainha:\n");
    rainha_recursiva(RAINHA_PASSES);

    printf("\nMovimento do Cavalo:\n");
    cavalo_movimento_complexo(CAVALO_CIMA, CAVALO_DIREITA);

    return 0;
}