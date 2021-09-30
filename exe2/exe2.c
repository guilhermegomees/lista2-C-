#include <stdlib.h>
#include <stdio.h>

int main(){
    /*
        Faça um Programa que leia um vetor de 10 caracteres, e diga quantas
        consoantes foram lidas. Imprima as consoantes.
    */
    
    int tam = 10;
    char vet[tam];

    printf("DIGITE ATE 10 CARACTERES: ");
    scanf("%s", vet);

    system("cls");

    printf("FOI DIGITADO: %s", vet);
    
    printf("\n\nAS CONSOANTES FORAM:");
    for(int i = 0; i < 11; i++){
        if(vet[i] != 'a' && vet[i] != 'e' && vet[i] != 'i' && vet[i] != 'o' && vet[i] != 'u'){
            printf(" %c ", vet[i]);
        }
    }
}