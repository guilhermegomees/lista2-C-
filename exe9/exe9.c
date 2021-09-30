#include <stdlib.h>
#include <stdio.h>

void getMes(int mes){
    switch(mes){
    case 0:
        printf("Janeiro = ");
        break;
    case 1:
        printf("Fevereiro = ");
        break;
    case 2:
        printf("Marco = ");
        break;
    case 3:
        printf("Abril = ");
        break;
    case 4:
        printf("Maio = ");
        break;
    case 5:
        printf("Junho = ");
        break;
    case 6:
        printf("Julho = ");
        break;
    case 7:
        printf("Agosto = ");
        break;
    case 8:
        printf("Setembro = ");
        break;
    case 9:
        printf("Outubro = ");
        break;
    case 10:
        printf("Novembro = ");
        break;
    default:
        printf("Dezembro = ");
    }
}

int main(){
    /*
        Faça um programa que receba a temperatura média de cada 
        mês do ano e  armazene-as  em  uma  lista.  Após  isto,  
        calcule  a  média  anual  das temperaturas  e  mostre  todas  
        as  temperaturas  acima  da  média  anual,  e em que mês elas 
        ocorreram (mostrar omês por extenso: 1 –Janeiro, 2 –Fevereiro, . . . ).
    */

    float meses[12], media = 0;
    int i;

    for(i = 0; i < 12;i++){
        getMes(i);
        scanf("%f%*c", &meses[i]);
    }

    for(i = 0; i < 12; i++)
        media += meses[i];
    
    media = media / 12;

    system("cls");

    printf("MESES COM A TEMPERATURA ACIMA DA MEDIA (%.2f GRAUS):\n\n", media);
    for(i = 0; i < 12; i++){
        if(meses[i] > media){
            printf("%d - ", i);
            getMes(i);
            printf("%.2f GRAUS\n", meses[i]);
        }
    }
}