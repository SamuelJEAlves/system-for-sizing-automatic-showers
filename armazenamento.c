#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include "library.h"

void tabela5(CHUVEIRO *chuveiro)
{

    if (chuveiro->altura <= 6.1 && chuveiro->teto <= 7.6)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 200, 240, 320 e 360 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 200 && chuveiro->fatorK != 240 && chuveiro->fatorK != 320 && chuveiro->fatorK != 360);
        switch (chuveiro->fatorK)
        {
        case 200:
            chuveiro->pressao = 3.4;
            break;
        case 240:
            chuveiro->pressao = 2.4;
            break;
        case 320:
            chuveiro->pressao = 1.7;
            break;
        case 360:
            chuveiro->pressao = 1.0;
            break;
        }

        chuveiro->tempo = 1;
        chuveiro->nChuveiros = 12;
    }

    else if (chuveiro->altura <= 7.6 && chuveiro->teto <= 9.1)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 200, 240, 320 e 360 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 200 && chuveiro->fatorK != 240 && chuveiro->fatorK != 320 && chuveiro->fatorK != 360);
        switch (chuveiro->fatorK)
        {
        case 200:
            chuveiro->pressao = 3.4;
            break;
        case 240:
            chuveiro->pressao = 2.4;
            break;
        case 320:
            chuveiro->pressao = 1.7;
            break;
        case 360:
            chuveiro->pressao = 1.0;
            break;
        }
        chuveiro->tempo = 1;
        chuveiro->nChuveiros = 12;
    }
    else if (chuveiro->altura <= 7.6 && chuveiro->teto <= 9.8)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 200, 240 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 200 && chuveiro->fatorK != 240);
        switch (chuveiro->fatorK)
        {
        case 200:
            chuveiro->pressao = 4.1;
            break;
        case 240:
            chuveiro->pressao = 2.9;
            break;
        }
        chuveiro->tempo = 1;
        chuveiro->nChuveiros = 12;
    }
}