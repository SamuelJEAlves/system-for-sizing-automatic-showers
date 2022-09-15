#include <stdio.h>
#include <math.h>
#include <string.h>
#ifndef LIBRARY
#define LIBRARY

typedef struct
{
    float altura, teto, vazao, rti, tempo, pressao;
    float densidade, areaAplicacao, areaCobertura;
    int fatorK, nChuveiros, vga;
    int riscoCodigo;     // 1 - leve, 2 - ordinário I, 3 - ordinário II, 4 - extra I, 5 - extra II, 6 - armazenamento
    int coberturaCodigo; // 1 - cobertura padrão, 2 - cobertura extendida, 0 - erro
    char risco[50];
    int chuveiroCodigo; // 1 - Spray em pé, 2 - CCAE, 3 - ESFR

} CHUVEIRO;

typedef struct
{
    float a, b, c, d, s, l;
    int tetoCodigo; // 1 - Não combustível, 2 - Combustível, 3 - Combustível com estrutura;
} COBERTURA;

void usoGeral(CHUVEIRO *chuveiro);
void tabela5(CHUVEIRO *chuveiro);
void tipoCobertura(CHUVEIRO *chuveiro, COBERTURA *cobertura);
void areaCobertura(CHUVEIRO *chuveiro, COBERTURA *cobertura);
void coberturaSprayPe(CHUVEIRO *chuveiro, COBERTURA *cobertura);
void teto(COBERTURA *cobertura);
void tipoChuveiro(CHUVEIRO *chuveiro);
void coberturaCCAE(CHUVEIRO *chuveiro, COBERTURA *cobertura);
void coberturaESFR(CHUVEIRO *chuveiro, COBERTURA *cobertura);

#endif
