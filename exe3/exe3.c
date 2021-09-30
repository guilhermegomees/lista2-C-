#include <stdlib.h>
#include <stdio.h>

int main() {
    /*
        Faça  um  Programa  que  leia  20  números  inteiros  e  
        armazene-os  num vetor. Armazene os números pares no vetor PAR 
        e os números IMPARES no vetor impar. Imprima os três vetores.
    */

    int i, num[20], par[10], impar[10], x = 0, y = 0;

    for(i = 0; i < 20; i++){
        printf("DIGITE O VALOR PARA A POSICAO %d: ", i);
        scanf("%d", &num[i]);
        if(num[i] % 2 == 0) {
            par[x] = num[i];
            x++;
        }
        else{
            impar[y] = num[i];
            y++;
        }
    }
    printf("\nNUMEROS DIGITADOS: ");
    for(i = 0; i < 20; i++){
        printf(" %d ", num[i]);
    }

    printf("\nNUMEROS PARES: ");
    for(i = 0; i < x; i++){
        printf(" %d ",par[i]);
    }

    printf("\nNUMEROS IMPARES: ");
    for(i = 0; i < y; i++){
        printf(" %d ",impar[i]);
    }
}