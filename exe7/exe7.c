#include <stdlib.h>
#include <stdio.h>
#define vet 10

int main() {
    /*
        Altere o programa anterior, intercalando 3 vetores de 10 elementos cada.
    */

    int vet1[vet], vet2[vet], vet3[vet], vet4[vet * 2], i;

    printf("VETOR 1\n");
    for(i = 0; i < vet; i++){
        printf("POSICAO %d: ", i);
        scanf("%i", &vet1[i]);
    }
    printf("\n");

    printf("VETOR 2\n");
    for(i = 0; i < vet; i++){
        printf("POSICAO %d: ", i);
        scanf("%i", &vet2[i]);
    }
    printf("\n");

    printf("VETOR 3\n");
    for(i = 0; i < vet; i++){
        printf("POSICAO %d: ", i);
        scanf("%i", &vet3[i]);
    }
    printf("\n");

    for(i = 0; i < vet; i++){
        vet4[i * 2] = vet1[i];
    }
    for(i = 0; i < vet; i++){
        vet4[i * 2 + 1] = vet2[i];
    }
    for(i = 0; i < vet; i++){
        vet4[i * 3] = vet3[i];
    }

    system("cls");

    printf("VETOR 1: ");
    for(i = 0; i < vet; i++) {
        printf("%i ", vet1[i]);
    }
    printf("\n");

    printf("VETOR 2: ");
    for (i = 0; i < vet; i++) {
        printf("%i ", vet2[i]);
    }
    printf("\n");

    printf("VETOR 3: ");
    for (i = 0; i < vet; i++) {
        printf("%i ", vet3[i]);
    }
    printf("\n");

    printf("VETOR GERADO: ");
    for (i = 0; i < vet * 2; i++) {
        printf("%i ", vet4[i]);
    }
}