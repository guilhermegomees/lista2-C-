#include <stdlib.h>
#include <stdio.h>

int main() {
    /*
        Faça um Programa que leia um vetor de 10 números reais e mostre-os na ordem inversa.
    */

    float vet[10];

    for(int i = 0; i < 10; i++){
        printf("DIGITE O VALOR PARA A POSICAO %d: ", i);
        scanf("%f", &vet[i]);
    }

    printf("\n");
    
    printf("VETOR INVERSO:\n");
    for(int i = 9; i >= 0; i--){
        printf("\t%.0f \n", vet[i]);
    }
}