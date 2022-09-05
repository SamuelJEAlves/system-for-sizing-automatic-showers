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
    int riscoCodigo;  // 1 - leve, 2 - ordinário I, 3 - ordinário II, 4 - extra I, 5 - extra II, 6 - armazenamento
    int coberturaCodigo;
    char risco[50];
    
} CHUVEIRO;

typedef struct
{
    float a, b, c, d, s, l;
   
} COBERTURA;


void usoGeral(CHUVEIRO *chuveiro);
void tabela5(CHUVEIRO *chuveiro);
void areaCobertura(CHUVEIRO *chuveiro, COBERTURA *cobertura);
void confereCobertura(CHUVEIRO *chuveiro, COBERTURA *cobertura);

#endif
