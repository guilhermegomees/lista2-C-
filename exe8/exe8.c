#include <stdlib.h>
#include <stdio.h>

int main() {
    /*
        Foram anotadas as idades e alturas de 30 alunos. 
        Faça um Programa que determine quantos alunos com 
        mais de 13 anos possuem altura inferior à média de 
        altura desses alunos.
    */

    float altura[5], media;
    int idade[5], inf = 0;

    printf("ALTURA\n");
    for(int i = 0; i < 3; i++){
        printf("ALUNO %d: ", i + 1);
        scanf("%i", &altura[i]);
    }

    printf("\nIDADE\n");
    for(int i = 0; i < 3; i++){
        printf("ALUNO %d: ", i + 1);
        scanf("%i", &idade[i]);
    }

    for(int i = 0; i < 3; i++){
        media += altura[i];
    }

    media = media / 3;

    for(int i = 0; i < 3; i++){
        if(idade[i] > 13 && altura[i] < media){
            inf++;
        }
    }

    printf("\nALUNOS COM MAIS DE 13 ANOS QUE POSSUEM ALTURA INFERIOR A MEDIA: %d.\n", inf);
}