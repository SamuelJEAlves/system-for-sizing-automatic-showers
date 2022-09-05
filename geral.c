#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include "library.h"

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
            do
            {
                areaCobertura(&chuveiro, &cobertura);
            } while (chuveiro->areaCobertura == 0);

            break;
        case 3:
            printf("O programa calculará a melhor área de cobertura padrão\n");
            chuveiro->coberturaCodigo = 1;
            break;
        case 4:
            printf("O programa calculará a melhor área de cobertura extendida\n");
            printf("Área de cobertura atende a requistos de cobetura extendida.\n");
            chuveiro->coberturaCodigo = 2;
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
    } while (op < 1 || op > 4);
}

void teto(COBERTURA *cobertura)
{
    do
    {
        printf("Informe o tipo de teto: \n");
        printf("1 - Não combustível obstruído e não obstruído combustível não obstruído\n");
        printf("2 - Combustível obstruído\n");
        printf("3 - Combustível com elementos estruturais distanciados a menos de 0,90 m\n");
        printf("Opção: ");
        scanf("%d", &cobertura->tetoCodigo);
    } while (cobertura->tetoCodigo < 1 || cobertura->tetoCodigo > 3);
}

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
