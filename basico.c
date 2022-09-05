#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include "library.h"

void coletaDados(CHUVEIRO *chuveiro)
{
    printf("Informe a altura do teto: ");
    scanf("%f", &chuveiro->teto);
    printf("Informe a altura do armazenamento: ");
    scanf("%f", &chuveiro->altura);
}

void tipoChuveiro(CHUVEIRO *chuveiro)
{
    printf("Informe o tipo de chuveiro da edificação\n");
    printf("1 - Spray em pé e pendente\n");
    printf("2 - Controle de aplicação específica (CCAE)\n");
    printf("3 - Resposta rápida (ESFR)\n");
    printf("Opção: ");
    scanf("%d", chuveiro->chuveiroCodigo);
}

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

    if (cobertura->a * 2 > cobertura->b)
    {
        cobertura->s = cobertura->a * 2;
    }
    else
    {
        cobertura->s = cobertura->b;
    }

    if (cobertura->c * 2 > cobertura->d)
    {
        cobertura->l = cobertura->c * 2;
    }
    else
    {
        cobertura->l = cobertura->d;
    }

    chuveiro->areaCobertura = cobertura->s * cobertura->l;
    printf("A área de cobertura é: %.2f\n\n", chuveiro->areaCobertura);
}