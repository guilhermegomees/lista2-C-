#include <stdlib.h>
#include <stdio.h>

/*
    Utilizando listas faça um programa que faça 5 perguntas para uma pessoa 
    sobre um crime. As perguntas são:
        1."Telefonou para a vítima?"
        2."Esteve no local do crime?"
        3."Mora perto da vítima?"
        4."Devia para a vítima?"
        5."Já trabalhou com a vítima?"
    O programa deve no final emitir uma classificação sobre a participação 
    da pessoa no crime. Se a pessoa responder  positivamente a 2 questões  
    ela deve ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" 
    e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".
*/

void getPerg(int perguntas){
    switch(perguntas){
        case 0:
            printf("Telefonou para a vitima ? - ");
            break;
        case 1:
            printf("Esteve no local do crime ? - ");
            break;
        case 2:
            printf("Mora perto da vitima ? - ");
            break;
        case 3:
            printf("Devia para a vitima ? - ");
            break;
        case 4:
            printf("Ja trabalhou com a vitima ? - ");
            break;
        }
}

int main(){
    int perg[5];
    int i, s = 0;
    
    printf("VOCE FOI SELECIONADO PARA RESPONDER ALGUMAS PERGUNTAS SOBRE UM CRIME!\n");
    printf("DIGITE:\n\t1 PARA 'SIM'\n\t0 PARA 'NAO'\n\n");

    for(i = 0; i < 5; i++){
        getPerg(i);
        scanf("%d", &perg[i]);
        if(perg[i] == 1){
            s++;
        }
    }

    if(s < 2){
        printf("\nSITUACAO DE PARTICIPACAO NO CRIME: INOCENTE!");
    }
    else if(s == 2){
        printf("\nSITUACAO DE PARTICIPACAO NO CRIME: SUSPEITO(A)!");
    }
    else if(s == 3 || s == 4){
        printf("\nSITUACAO DE PARTICIPACAO NO CRIME: CUMPLICE!");
    }
    else if(s == 5){
        printf("\nSITUACAO DE PARTICIPACAO NO CRIME: ASSASSINO(A)!");
    }
}