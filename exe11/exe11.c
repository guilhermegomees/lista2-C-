#include <stdlib.h>
#include <stdio.h>

/*
    Faça um programa que leia um número indeterminado de valores, 
    correspondentes a notas, encerrando a entrada de dados quando 
    for informado um valor igual a -1 (que não deve ser armazenado). 
    Após esta entrada de dados, faça:
        1.Mostre a quantidade de valores que foram lidos;
        2.Exiba todos os valores na ordem em que foram informados, um ao lado do outro;
        3.Exiba todos os valores na ordem inversa à que foram informados, um abaixo do outro;
        4.Calcule e mostre a soma dos valores;
        5.Calcule e mostre a média dos valores;
        6.Calcule e mostre a quantidade de valores acima da média calculada;
        7.Calcule e mostre a quantidade de valores abaixo de sete;
        8.Encerre o programa com uma mensagem;
*/

int main(){
    float notas[999], soma = 0, media = 0;
    int i = 0, y = 0, z = 0;

    for(;;){
        printf("POSICAO %d: ", i);
        scanf("%f", &notas[i]);
        if(notas[i] < 0) {
            break;
        }
        i++;
    }

    for(int j = 0; j < i; j++) {
        soma += notas[j];
    }

    media = soma / i;

    for(int j = 0; j < i; j++) {
        if(media < notas[j]) {
            y++;
        }
    }

    for(int j = 0; j < i; j++) {
        if(7 > notas[j]) {
            z++;
        }
    }

    system("cls");

    printf("====================================");
    printf("\n VALORES LIDOS: %d", i);
    printf("\n SOMA DOS VALORES: %.2f", soma);
    printf("\n MEDIA: %.2f", media);
    printf("\n VALORES ACIMA DA MEDIA: %d", y);
    printf("\n VALORES MENORES QUE 7: %d", z);
    printf("\n====================================\n");

    printf("\nORDEM NORMAL:\n");
    for(int j = 0; j < i; j++) {
        printf(" '%.2f'", notas[j]);
    }

    printf("\n\nORDEM INVERSA:\n");
    for(int j = i - 1; j > - 1; j--) {
        printf(" '%.2f'", notas[j]);
    }

    printf("\n\nPROGRAMA FINALIZADO.");
}