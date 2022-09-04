#include <stdio.h>
#include <math.h>
#include <string.h>
#ifndef LIBRARY.H
#define LIBRARY.H


typedef struct
{
    float altura, teto, vazao, rti, tempo, pressao;
    float densidade, areaAplicacao, areaCobertura;
    int fatorK, nChuveiros, vga;
    char risco[50];
} CHUVEIRO;

void usoGeral(CHUVEIRO *chuveiro);
void tabela5(CHUVEIRO *chuveiro);
void areaCobertura(CHUVEIRO *chuveiro);

#endif