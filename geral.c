#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include "library.h"

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

void fatorKGeral(CHUVEIRO *chuveiro)
{
    switch (chuveiro->riscoCodigo)
    {
    case 1:
        if (chuveiro->teto <= 9)
            chuveiro->fatorK = 80;
        else if (chuveiro->teto <= 18 && chuveiro->coberturaCodigo == 1)
            chuveiro->fatorK = 115;
        else
            chuveiro->fatorK = 360;
        break;

    case 2:
        if (chuveiro->teto <= 9)
            chuveiro->fatorK = 115;
        else if (chuveiro->teto <= 18 && chuveiro->coberturaCodigo == 1)
            chuveiro->fatorK = 115;
        else
            chuveiro->fatorK = 360;
        break;

    case 3:
        if (chuveiro->teto <= 9)
            chuveiro->fatorK = 115;
        else if (chuveiro->teto <= 18 && chuveiro->coberturaCodigo == 1)
            chuveiro->fatorK = 115;
        else
            chuveiro->fatorK = 360;
        break;

    case 4:
        if (chuveiro->teto <= 9)
            chuveiro->fatorK = 160;
        else if (chuveiro->teto <= 18 && chuveiro->coberturaCodigo == 1)
            chuveiro->fatorK = 160;
        else
            chuveiro->fatorK = 360;
        break;

    case 5:
        if (chuveiro->teto <= 9)
            chuveiro->fatorK = 160;
        else if (chuveiro->teto <= 18 && chuveiro->coberturaCodigo == 1)
            chuveiro->fatorK = 160;
        else
            chuveiro->fatorK = 360;
        break;

    default:
        printf("Erro encontrado no risco");
        break;
    }
}

void calculoVazao(CHUVEIRO *chuveiro, COBERTURA *cobertura)
{
    int n, i;
    cobertura->ladoMaior = 1.2 * sqrt(chuveiro->areaAplicacao);
    cobertura->nLadoMaior = ceil(cobertura->ladoMaior / cobertura->b);
    cobertura->nRamais = flor(chuveiro->nChuveiros / cobertura->ladoMaior);
    n = cobertura->nRamais;
    cobertura->q[0] = chuveiro->densidade * chuveiro->areaCobertura;
    cobertura->p[0] = sqrt(cobertura->q[0] * chuveiro->fatorK);
    cobertura->qRamal[0] = cobertura->q[0];
    foi(i = 1; i < n; i++)
    {
        cobertura->p[i] = cobertura->p[i - 1] + 0.2;
        cobertura->q[i] = chuveiro->fatorK * sqrt(cobertura->p[i]);
        cobertura->qRamal[0] += cobertura->q[i];
    }
}