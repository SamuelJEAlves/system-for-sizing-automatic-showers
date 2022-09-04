#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include "library.h"

void areaCobertura(CHUVEIRO *chuveiro)
{
    int a, b, c, d, s, l;
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
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);
    printf("Informe o valor de C: ");
    scanf("%d", &c);
    printf("Informe o valor de D: ");
    scanf("%d", &d);

    if (a*2 > b){
        s = a*2;
    }else {
        s = b;
    }

    if(c*2 > d){
        l = c*2;
    }else{
        l = d;
    }
    
    chuveiro->areaCobertura = s*l;

}

void usoGeral(CHUVEIRO *chuveiro)
{
    int n;
    do
    {
        printf("Escolha o risco da edificação: \n");
        printf("1 - Risco Leve\n");
        printf("2 - Risco Ordinário - Grupo I\n");
        printf("3 - Risco Ordinário - Grupo II\n");
        printf("4 - Risco Extra - Grupo I\n");
        printf("5 - Risco Extra - Grupo II\n");
        scanf("%d", &n);
        if (n < 1 || n > 5)
        {
            printf("Opção inválida!\n");
        }
    } while (n < 1 || n > 5);

    switch (n)
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