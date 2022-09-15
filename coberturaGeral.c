#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include "library.h"

void coberturaSprayPe(CHUVEIRO *chuveiro, COBERTURA *cobertura)
{

    if (chuveiro->riscoCodigo == 1)
    { // Risco Leve

        if (chuveiro->areaCobertura <= 12.1 && cobertura->tetoCodigo == 3)
        {
            if (cobertura->b > 4.6 || cobertura->d > 4.6)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 4,6 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende aos requistos de cobetura padrão.\n");
                chuveiro->coberturaCodigo = 1;
            }
        }

        else if (chuveiro->areaCobertura <= 15.6 && cobertura->tetoCodigo == 2)
        {
            if (cobertura->b > 4.6 || cobertura->d > 4.6)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 4,6 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende a requistos de cobetura padrão.\n");
                chuveiro->coberturaCodigo = 1;
            }
        }

        else if (chuveiro->areaCobertura <= 20.8 && cobertura->tetoCodigo == 1)
        {
            if (cobertura->b > 4.6 || cobertura->d > 4.6)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 4,6 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende a requistos de cobetura padrão.\n");
                chuveiro->coberturaCodigo = 1;
            }
        }

        else if (cobertura->tetoCodigo == 2 || cobertura->tetoCodigo == 3)
        {
            wprintf(L"Área de cobertura inválida para teto combustível!\n");
            chuveiro->coberturaCodigo = 0;
        }

        else if (chuveiro->areaCobertura <= 24)
        {
            if (cobertura->b > 4.9 || cobertura->d > 4.9)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 4,9 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende a requistos de cobetura extendida.\n");
                chuveiro->coberturaCodigo = 2;
            }
        }

        else if (chuveiro->areaCobertura <= 30.2)
        {
            if (cobertura->b > 5.5 || cobertura->d > 5.5)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 5,5 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende a requistos de cobetura extendida.\n");
                chuveiro->coberturaCodigo = 2;
            }
        }

        else if (chuveiro->areaCobertura <= 37.2)
        {
            if (cobertura->b > 6.1 || cobertura->d > 6.1)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 6,1 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende a requistos de cobetura extendida.\n");
                chuveiro->coberturaCodigo = 2;
            }
        }

        else
        {
            wprintf(L"Área de cobertura inválida para o risco leve!\n");
            chuveiro->coberturaCodigo = 0;
        }
    }

    else if (chuveiro->riscoCodigo == 2 || chuveiro->riscoCodigo == 3 || chuveiro->riscoCodigo == 4)
    { // Risco Ordinário - Grupo

        if (chuveiro->areaCobertura <= 12.1)
        {
            if (cobertura->b > 4.6 || cobertura->d > 4.6)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 4,6 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende aos requistos de cobetura padrão.\n");
                chuveiro->coberturaCodigo = 1;
            }
        }

        else if (cobertura->tetoCodigo == 2 || cobertura->tetoCodigo == 3)
        {
            wprintf(L"Área de cobertura inválida para teto combustível!\n");
            chuveiro->coberturaCodigo = 0;
        }

        else if (chuveiro->areaCobertura <= 13.7)
        {
            if (cobertura->b > 3.7 || cobertura->d > 3.7)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 3,7 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende a requistos de cobetura extendida.\n");
                chuveiro->coberturaCodigo = 2;
            }
        }

        else if (chuveiro->areaCobertura <= 18.5)
        {
            if (cobertura->b > 4.3 || cobertura->d > 4.3)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 4,3 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende a requistos de cobetura extendida.\n");
                chuveiro->coberturaCodigo = 2;
            }
        }

        else if (chuveiro->areaCobertura <= 24)
        {
            if (cobertura->b > 4.9 || cobertura->d > 4.9)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 4,9 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende a requistos de cobetura extendida.\n");
                chuveiro->coberturaCodigo = 2;
            }
        }

        else if (chuveiro->areaCobertura <= 30.2)
        {
            if (cobertura->b > 5.5 || cobertura->d > 5.5)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 5,5 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende a requistos de cobetura extendida.\n");
                chuveiro->coberturaCodigo = 2;
            }
        }

        else if (chuveiro->areaCobertura <= 37.2)
        {
            if (cobertura->b > 6.1 || cobertura->d > 6.1)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 6,1 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende a requistos de cobetura extendida.\n");
                chuveiro->coberturaCodigo = 2;
            }
        }

        else
        {
            wprintf(L"Área de cobertura inválida para o risco ordinário!\n");
            chuveiro->coberturaCodigo = 0;
        }
    }
    else
    { // Risco Extra
        if (chuveiro->areaCobertura <= 9.3 && chuveiro->densidade >= 10.2)
        {
            if (cobertura->b > 3.7 || cobertura->d > 3.7)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros, para densidades maiores do que 10,2 mm/min, deve ser de no máximo 3,7 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende aos requistos de cobetura padrão.\n");
                chuveiro->coberturaCodigo = 1;
            }
        }

        else if (chuveiro->areaCobertura <= 12.1 && chuveiro->densidade < 10.2)
        {
            if (cobertura->b > 4.6 || cobertura->d > 4.6)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros, para densidades menores do que 10,2 mm/min, deve ser de no máximo 4,7 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende aos requistos de cobetura padrão.\n");
                chuveiro->coberturaCodigo = 1;
            }
        }

        else if (cobertura->tetoCodigo == 2 || cobertura->tetoCodigo == 3)
        {
            wprintf(L"Área de cobertura inválida para teto combustível!\n");
            chuveiro->coberturaCodigo = 0;
        }

        else if (chuveiro->areaCobertura <= 13.7)
        {
            if (cobertura->b > 3.7 || cobertura->d > 3.7)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 3,7 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende a requistos de cobetura extendida.\n");
                chuveiro->coberturaCodigo = 2;
            }
        }

        else if (chuveiro->areaCobertura <= 18.5)
        {
            if (cobertura->b > 4.3 || cobertura->d > 4.3)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 4,3 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende a requistos de cobetura extendida.\n");
                chuveiro->coberturaCodigo = 2;
            }
        }

        else
        {
            wprintf(L"Área de cobertura inválida para o risco extra!\n");
            chuveiro->coberturaCodigo = 0;
        }
    }

    if ((cobertura->b < 1.8 || cobertura->b < 1.8) && chuveiro->coberturaCodigo == 1)
    {
        wprintf(L"Distância mínima entre chuveiros automáticos tipo spray em pé e pendentes de cobertura-padrão é de 1.8 metros \n");
        chuveiro->coberturaCodigo = 0;
    }

    if ((cobertura->b < 2.4 || cobertura->b < 2.4) && chuveiro->coberturaCodigo == 2)
    {
        wprintf(L"Distância mínima entre chuveiros automáticos tipo spray em pé e pendentes de cobertura estendida é de 2.4 metros \n");
        chuveiro->coberturaCodigo = 0;
    }

    if (chuveiro->coberturaCodigo == 0)
        wprintf(L"Refaça os cálculos da área de cobertura");
}

void coberturaCCAE(CHUVEIRO *chuveiro, COBERTURA *cobertura)
{
    int op;
    do
    {
        wprintf(L"A área protegida possui estruturas porta-paletes?\n");
        wprintf(L"1 - Sim\n");
        wprintf(L"2 - Não\n");
        wprintf(L"Opção: ");
        scanf("%d", &op);
    } while (op != 1 && op != 2);

    if (op == 2)
    {
        if (chuveiro->areaCobertura < 7.4)

        {
            wprintf(L"A área mínima de cobertura para chuveiros CCAE deve ser de 7,4 m²");
            chuveiro->chuveiroCodigo = 0;
        }

        else if ((cobertura->tetoCodigo == 1 || cobertura->tetoCodigo == 2) && chuveiro->areaCobertura <= 12.1)
        {
            if (cobertura->b > 3.7 || cobertura->d > 3.7)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 3,7 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende aos requistos de cobetura padrão.\n");
                chuveiro->coberturaCodigo = 1;
            }
        }

        else if (chuveiro->areaCobertura <= 9.3)
        {

            if (cobertura->b > 3.1 || cobertura->d > 3.1)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 3,1 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende aos requistos de cobetura padrão.\n");
                chuveiro->coberturaCodigo = 1;
            }
        }

        else
        {
            wprintf(L"Área de cobertura maior do que a área máxima permitida\n");
            chuveiro->coberturaCodigo = 0;
        }
    }

    if (op == 1)
    {
        if (chuveiro->areaCobertura < 7.4)

        {
            wprintf(L"A área mínima de cobertura para chuveiros CCAE deve ser de 7,4 m²");
            chuveiro->chuveiroCodigo = 0;
        }

        else if ((cobertura->tetoCodigo == 1 || cobertura->tetoCodigo == 2) && chuveiro->areaCobertura <= 9.3)
        {
            if (cobertura->b > 3.7 || cobertura->d > 3.7)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 3,7 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende aos requistos de cobetura padrão.\n");
                chuveiro->coberturaCodigo = 1;
            }
        }

        else if (chuveiro->areaCobertura <= 9.3)
        {

            if (cobertura->b > 3.1 || cobertura->d > 3.1)
            {
                wprintf(L"A cobertura não atende os requisitos de segurança.\n");
                wprintf(L"A distância entre os chuveiros deve ser de no máximo 3,1 metros.\n");
                chuveiro->coberturaCodigo = 0;
            }
            else
            {
                wprintf(L"Área de cobertura atende aos requistos de cobetura padrão.\n");
                chuveiro->coberturaCodigo = 1;
            }
        }

        else
        {
            wprintf(L"Área de cobertura maior do que a área máxima permitida\n");
            chuveiro->coberturaCodigo = 0;
        }
    }
}

void coberturaESFR(CHUVEIRO *chuveiro, COBERTURA *cobertura)
{

    if (cobertura->tetoCodigo == 3)
    {
        wprintf(L"Não é permitida uso de chuveiro ESFR para este tipo de teto.\n");
        chuveiro->coberturaCodigo = 0;
    }

    else if (chuveiro->teto <= 9.3)
    {
        if (cobertura->b > 3.7 || cobertura->d > 3.7)
        {
            wprintf(L"A cobertura não atende os requisitos de segurança.\n");
            wprintf(L"A distância entre os chuveiros deve ser de no máximo 3,7 metros.\n");
            chuveiro->coberturaCodigo = 0;
        }
        else
        {
            wprintf(L"Área de cobertura atende aos requistos de cobetura padrão.\n");
            chuveiro->coberturaCodigo = 1;
        }
    }

    else if (cobertura->b > 3.1 || cobertura->d > 3.1)
    {
        wprintf(L"A cobertura não atende os requisitos de segurança.\n");
        wprintf(L"A distância entre os chuveiros deve ser de no máximo 3,1 metros.\n");
        chuveiro->coberturaCodigo = 0;
    }

    else
    {
        wprintf(L"Área de cobertura atende aos requistos de cobetura padrão.\n");
        chuveiro->coberturaCodigo = 1;
    }
}