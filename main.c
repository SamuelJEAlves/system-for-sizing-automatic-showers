#include <stdio.h>
#include <math.h>
#include <string.h>
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
    printf("Bem vindo ao programa de dimensionamento de chuveiros automáticos!\n");
    do
    {
        printf("Escolha o risco da edificação: \n");
        printf("1 - Risco Leve\n");
        printf("2 - Risco Ordinário - Grupo I\n");
        printf("3 - Risco Ordinário - Grupo II\n");
        printf("4 - Risco Extra - Grupo I\n");
        printf("5 - Risco Extra - Grupo II\n");
        printf("6 - Armazenamento\n");
        scanf("%d", &chuveiro.riscoCodigo);
        if (chuveiro.riscoCodigo < 1 || chuveiro.riscoCodigo > 6)
        {
            printf("Opção inválida!\n");
        }
    } while (chuveiro.riscoCodigo < 1 || chuveiro.riscoCodigo > 6);

    if (chuveiro.riscoCodigo == 6)
    {
        coletaDados(&chuveiro);
        tabela5(&chuveiro);
    }
    else
    {
        usoGeral(&chuveiro);                  // Define a densidade, área de aplicação, tempo e VGA
        tipoChuveiro(&chuveiro);              // Define o tipo de chuveiro utilizado
        teto(&cobertura);                     // define o tipo de teto
        tipoCobertura(&chuveiro, &cobertura); // Define o método de cálculo da área de cobertura
        // Conferencia da cobertura.
        do
        {
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
    }

    chuveiro.vazao = chuveiro.fatorK * sqrt(chuveiro.pressao);
    chuveiro.rti = chuveiro.vazao * chuveiro.nChuveiros * chuveiro.tempo;

    printf("Vazão: %.2f m³/h\n", chuveiro.vazao);
    printf("RTI: %.2f m³", chuveiro.rti);

    return 0;
}
