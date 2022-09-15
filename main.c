#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include "library.h"
#include "armazenamento.c"
#include "geral.c"
#include "coberturaGeral.c"
#include "basico.c"

int main()
{
    CHUVEIRO chuveiro;
    COBERTURA cobertura;
    int op;
    chuveiro.coberturaCodigo = 0;

    setlocale(LC_ALL, "Portuguese");
    wprintf(L"Bem vindo ao programa de dimensionamento de chuveiros automáticos!\n\n");
    do
    {
        wprintf(L"Escolha o risco da edificação: \n");
        wprintf(L"1 - Risco Leve\n");
        wprintf(L"2 - Risco Ordinário - Grupo I\n");
        wprintf(L"3 - Risco Ordinário - Grupo II\n");
        wprintf(L"4 - Risco Extra - Grupo I\n");
        wprintf(L"5 - Risco Extra - Grupo II\n");
        wprintf(L"6 - Armazenamento\n");
        wprintf(L"Opção: ");
        scanf("%d", &chuveiro.riscoCodigo);
        if (chuveiro.riscoCodigo < 1 || chuveiro.riscoCodigo > 6)
        {
            wprintf(L"Opção inválida!\n");
        }
    } while (chuveiro.riscoCodigo < 1 || chuveiro.riscoCodigo > 6);

    if (chuveiro.riscoCodigo == 6)
    {
        coletaDados(&chuveiro);
        tabela5(&chuveiro);
    }
    else
    {
        printf("\nInforme a altura do teto: ");
        scanf("%f", &chuveiro.teto);
        usoGeral(&chuveiro);     // Define a densidade, área de aplicação, tempo e VGA
        tipoChuveiro(&chuveiro); // Define o tipo de chuveiro utilizado
        cobertura.tetoCodigo = 0;
        teto(&cobertura); // define o tipo de teto

        do
        {
            tipoCobertura(&chuveiro, &cobertura); // Define o método de cálculo da área de cobertura
            if (chuveiro.coberturaCodigo == 0)
            {
                switch (chuveiro.chuveiroCodigo)
                {
                case 1:
                    coberturaSprayPe(&chuveiro, &cobertura);
                    break;

                default:
                    break;
                }
            }
        } while (chuveiro.coberturaCodigo == 0);
        fatorKGeral(&chuveiro);                                                   // Define o fator K
        chuveiro.vazao = chuveiro.densidade * chuveiro.areaAplicacao * 0.06 * 12; // 0.06 é o fator de conversão de litros/minuto para m³/horaa

        chuveiro.rti = chuveiro.vazao * chuveiro.tempo;
    }

    wprintf(L"\nVazão: %.2f m³/h\n", chuveiro.vazao);
    wprintf(L"RTI: %.2f m³", chuveiro.rti);

    return 0;
}
