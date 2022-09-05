#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include "library.h"

void areaCobertura(CHUVEIRO *chuveiro, COBERTURA *cobertura)
{
    
    printf("_______________________________________________\n");
    printf("|                       ^\n");
    printf("|                       C\n");
    printf("|                       v\n");       
    printf("|       O ------------- O ------------- O -----\n");
    printf("| <-A-> | <-----B-----> |        ^\n"); 
    printf("|                                D\n");
    printf("|                                v\n");
    printf("|       O ------------- O ------------- O -----\n");
    printf("O = Chuveiro\n");
    printf("---- = Ramal\n\n\n");
    printf("Informe o valor de A: ");
    scanf("%f", &cobertura->a);
    printf("Informe o valor de B: ");
    scanf("%f", &cobertura->b);
    printf("Informe o valor de C: ");
    scanf("%f", &cobertura->c);
    printf("Informe o valor de D: ");
    scanf("%f", &cobertura->d);

    if (cobertura->a*2 > cobertura->b){
        cobertura->s = cobertura->a*2;
    }else {
        cobertura->s = cobertura->b;
    }

    if(cobertura->c*2 > cobertura->d){
       cobertura->l = cobertura->c*2;
    }else{
        cobertura->l = cobertura->d;
    }
    
    chuveiro->areaCobertura = cobertura->s*cobertura->l;
    printf("A área de cobertura é: %.2f\n", chuveiro->areaCobertura);

}

void usoGeral(CHUVEIRO *chuveiro)

{
    
    switch (chuveiro->riscoCodigo)
    {
    case 1:
        strcpy(chuveiro->risco, "Risco Leve");
        chuveiro->densidade = 4.1;
        chuveiro->areaAplicacao = 140;
        chuveiro->tempo = 0.5;
        chuveiro->vga = 4800;
        break;
    case 2:
        strcpy(chuveiro->risco, "Risco Ordinário - Grupo I");
        chuveiro->densidade = 6.1;
        chuveiro->areaAplicacao = 140;
        chuveiro->tempo = 1;
        chuveiro->vga = 4800;
        break;
    case 3:
        strcpy(chuveiro->risco, "Risco Ordinário - Grupo II");
        chuveiro->densidade = 8.1;
        chuveiro->areaAplicacao = 140;
        chuveiro->tempo = 1;
        chuveiro->vga = 4800;
        break;
    case 4:
        strcpy(chuveiro->risco, "Risco Extra - Grupo I");
        chuveiro->densidade = 12.2;
        chuveiro->areaAplicacao = 230;
        chuveiro->tempo = 1.5;
        chuveiro->vga = 3700;
        break;
    case 5:
        strcpy(chuveiro->risco, "Risco Extra - Grupo II");
        chuveiro->densidade = 16.3;
        chuveiro->areaAplicacao = 230;
        chuveiro->tempo = 1.5;
        chuveiro->vga = 3700;
        break;
    }

}

void confereCobertura(CHUVEIRO *chuveiro, COBERTURA *cobertura)
{
    switch (chuveiro->riscoCodigo)
    {   
        
        case 1: //Risco Leve
            if (chuveiro->areaCobertura <= 20.8)
                {
                if (cobertura->b > 4.6 || cobertura->d > 4.6 ){
                printf("A cobertura não atende os requisitos de segurança.\n");
                printf("a distância entre os chuveiros deve ser de no máximo 4,6 metros.\n");
                chuveiro->riscoCodigo = 0;}
                chuveiro->coberturaCodigo = 1;
                 }
            
            else if  (chuveiro->areaCobertura <= 24){
                if (cobertura->b > 4.9 || cobertura->d > 4.9 ){
                printf("A cobertura não atende os requisitos de segurança.\n");
                printf("a distância entre os chuveiros deve ser de no máximo 4,9 metros.\n");
                chuveiro->riscoCodigo = 0;}
                chuveiro->coberturaCodigo = 2;}
            
            else if (chuveiro->areaCobertura <= 30.2){
                if (cobertura->b > 5.5 || cobertura->d > 5.5 ){
                printf("A cobertura não atende os requisitos de segurança.\n");
                printf("a distância entre os chuveiros deve ser de no máximo 5,5 metros.\n");
                chuveiro->riscoCodigo = 0;}
                chuveiro->coberturaCodigo = 2;
            }
            
            else if (chuveiro->areaCobertura <= 37.2){
                if (cobertura->b > 6.1 || cobertura->d > 6.1 ){
                printf("A cobertura não atende os requisitos de segurança.\n");
                printf("a distância entre os chuveiros deve ser de no máximo 6,1 metros.\n");
                chuveiro->riscoCodigo = 0;}
                chuveiro->coberturaCodigo = 2;
            }

            else {printf("Área de cobertura inválida para o risco leve!\n");
                chuveiro->riscoCodigo = 0;}            
                
            break;

    }
}