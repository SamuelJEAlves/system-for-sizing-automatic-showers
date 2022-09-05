#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include "library.h"
#include "armazenamento.c"
#include "geral.c"


void coletaDados(CHUVEIRO *chuveiro)
{
    printf("Informe a altura do teto: ");
    scanf("%f", &chuveiro->teto);
    printf("Informe a altura do armazenamento: ");
    scanf("%f", &chuveiro->altura);
}


int main()
{
    CHUVEIRO chuveiro;
	COBERTURA cobertura;
    int op;
    //setlocale(LC_ALL, "Portuguese");
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
	
	

	if(chuveiro.riscoCodigo == 6){
		coletaDados(&chuveiro);
		tabela5(&chuveiro);}
		else{
			tipoCobertura(&chuveiro, &cobertura);
			teto(&cobertura);			
			usoGeral(&chuveiro);}
	
	  

    chuveiro.vazao = chuveiro.fatorK * sqrt(chuveiro.pressao);
    chuveiro.rti = chuveiro.vazao * chuveiro.nChuveiros * chuveiro.tempo;

    printf("Vazão: %.2f m³/h\n", chuveiro.vazao);
    printf("RTI: %.2f m³", chuveiro.rti);
    
 
    return 0;
}
