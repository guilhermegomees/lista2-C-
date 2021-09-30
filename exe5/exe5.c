#include <stdlib.h>
#include <stdio.h>

int main() {
    /*
        Faça um Programa que peça a idade e a altura de 5 pessoas, 
        armazene cada informação no seu respectivo vetor. Imprima 
        a idade e a altura na ordem inversa a ordem lida.
    */

    float pessoa[5][5];

    for(int i = 0; i < 5; i++){
        printf("[ PESSOA %d ]", i + 1);
        printf("\nIDADE: ");
        scanf("%f", &pessoa[i][1]);
        printf("ALTURA: ");
        scanf("%f", &pessoa[i][2]);
        printf("\n");
    }

    system("cls");

    for(int i = 0; i < 5; i++){
        printf("[ PESSOA %d ]\n", i + 1);
        printf("IDADE: %.2f", pessoa[i][2]);
        printf("\nALTURA: %.0f", pessoa[i][1]);
        printf("\n\n");
    }
}