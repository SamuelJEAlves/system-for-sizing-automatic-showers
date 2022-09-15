#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include "library.h"

void coletaDados(CHUVEIRO *chuveiro)
{
    wprintf(L"Informe a altura do teto: ");
    scanf("%f", &chuveiro->teto);
    wprintf(L"Informe a altura do armazenamento: ");
    scanf("%f", &chuveiro->altura);
}

void teto(COBERTURA *cobertura)
{
    do
    {
        wprintf(L"\nInforme o tipo de teto: \n");
        wprintf(L"1 - Não combustível obstruído e não obstruído; combustível não obstruído\n");
        wprintf(L"2 - Combustível obstruído\n");
        wprintf(L"3 - Combustível com elementos estruturais distanciados a menos de 0,90 m\n");
        wprintf(L"Opção: ");
        scanf("%d", &cobertura->tetoCodigo);
    } while (cobertura->tetoCodigo < 1 || cobertura->tetoCodigo > 3);
}

void tipoChuveiro(CHUVEIRO *chuveiro)
{
    wprintf(L"\nInforme o tipo de chuveiro da edificação\n");
    wprintf(L"1 - Spray em pé e pendente\n");
    wprintf(L"2 - Controle de aplicação específica (CCAE)\n");
    wprintf(L"3 - Resposta rápida (ESFR)\n");
    wprintf(L"Opção: ");
    scanf("%d", &chuveiro->chuveiroCodigo);
}

void tipoCobertura(CHUVEIRO *chuveiro, COBERTURA *cobertura)
{
    int op = 0;
    wprintf(L"\nComo deseja calcular a área de cobertura?\n");
    wprintf(L"1 - Informando área\n");
    wprintf(L"2 - Cálculo\n");
    wprintf(L"3 - Deixar o programa cálcular a melhor área de cobertura padrão\n");
    wprintf(L"4 - Deixar o programa cálcular a melhor área de cobertura extendida\n");
    do
    {
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            wprintf(L"Informe a área de cobertura: ");
            scanf("%f", &chuveiro->areaCobertura);
            break;
        case 2:
            areaCobertura(&*chuveiro, &*cobertura);
            break;
        case 3:
            wprintf(L"O programa calculará a melhor área de cobertura padrão\n");
            chuveiro->coberturaCodigo = 1;
            break;
        case 4:
            wprintf(L"O programa calculará a melhor área de cobertura extendida\n");
            chuveiro->coberturaCodigo = 2;
            break;
        default:
            wprintf(L"Opção inválida!\n");
            break;
        }
    } while (op < 1 || op > 4);
}

void areaCobertura(CHUVEIRO *chuveiro, COBERTURA *cobertura)
{

    wprintf(L"_______________________________________________\n");
    wprintf(L"|                       ^\n");
    wprintf(L"|                       C\n");
    wprintf(L"|                       v\n");
    wprintf(L"|       O ------------- O ------------- O -----\n");
    wprintf(L"| <-A-> | <-----B-----> |        ^\n");
    wprintf(L"|                                D\n");
    wprintf(L"|                                v\n");
    wprintf(L"|       O ------------- O ------------- O -----\n");
    wprintf(L"O = Chuveiro\n");
    wprintf(L"---- = Ramal\n\n\n");
    wprintf(L"Informe o valor de A: ");
    scanf("%f", &cobertura->a);
    wprintf(L"Informe o valor de B: ");
    scanf("%f", &cobertura->b);
    wprintf(L"Informe o valor de C: ");
    scanf("%f", &cobertura->c);
    wprintf(L"Informe o valor de D: ");
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
    wprintf(L"A área de cobertura é: %.2f\n\n", chuveiro->areaCobertura);
}
