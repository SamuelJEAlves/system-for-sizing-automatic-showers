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

void teto(COBERTURA *cobertura)
{
    do
    {
        printf("Informe o tipo de teto: \n");
        printf("1 - Não combustível obstruído e não obstruído; combustível não obstruído\n");
        printf("2 - Combustível obstruído\n");
        printf("3 - Combustível com elementos estruturais distanciados a menos de 0,90 m\n");
        printf("Opção: ");
        scanf("%d", &cobertura->tetoCodigo);
    } while (cobertura->tetoCodigo < 1 || cobertura->tetoCodigo > 3);
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

void tipoCobertura(CHUVEIRO *chuveiro, COBERTURA *cobertura)
{
    int op;
    printf("Como deseja calcular a área de cobertura?\n");
    printf("1 - Informando área\n");
    printf("2 - Cálculo\n");
    printf("3 - Deixar o programa cálcular a melhor área de cobertura padrão\n");
    printf("4 - Deixar o programa cálcular a melhor área de cobertura extendida\n");
    do
    {
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Informe a área de cobertura: ");
            scanf("%f", &chuveiro->areaCobertura);
            break;
        case 2:
            areaCobertura(&*chuveiro, &*cobertura);
            break;
        case 3:
            printf("O programa calculará a melhor área de cobertura padrão\n");
            chuveiro->coberturaCodigo = 1;
            break;
        case 4:
            printf("O programa calculará a melhor área de cobertura extendida\n");
            chuveiro->coberturaCodigo = 2;
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
    } while (op < 1 || op > 4);
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
