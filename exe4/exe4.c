#include <stdlib.h>
#include <stdio.h>

int main() {
    /*
        Faça  um  Programa  que  peça  as  quatro  notas  de  10  alunos,  
        calcule  e armazene num vetor a média de cada aluno, imprima o 
        número de alunos com média maior ou igual a 7.0.
    */

    float notas[10][4], media[10];
    int i, j, alunos = 0;

    for(i = 0; i < 10; i++){
        printf("[ ALUNO %d ]\n", i + 1);
        for(j = 0; j < 4; j++){
            printf("NOTA %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
        printf("\n");
    }

    system("cls");

    for(i = 0; i < 10; i++){
        media[i] = (notas[i][0] + notas[i][1] + notas[i][2] + notas[i][3]) / 4;
        if(media[i] > 7){
            alunos++;
        }
    }

    printf("\t%d ALUNOS TIVERAM NOTAS SUPERIORES A 7!", alunos);
}