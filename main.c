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
    int op, calcArea=0;
    //setlocale(LC_ALL, "Portuguese");
    printf("Bem vindo ao programa de dimensionamento de chuveiros automáticos!\n");
	printf("Como deseja calcular a área de cobertura?\n");
	printf("1 - Informando área\n");
	printf("2 - Cálculo\n");
	printf("3 - Deixar o programa cálcular a melhor área de cobertura padrão\n");
	printf("4 - Deixar o programa cálcular a melhor área de cobertura extendida\n");
	do{scanf("%d", &op);
	switch (op)
	{
		case 1:
			printf("Informe a área de cobertura: ");
			scanf("%f", &chuveiro.areaCobertura);
			break;
		case 2:
			areaCobertura(&chuveiro);
			break;
		case 3:
			printf("O programa calculará a melhor área de cobertura padrão\n");
			calcArea = 1;
			break;
		case 4:
			printf("O programa calculará a melhor área de cobertura extendida\n");
			calcArea = 2;
			break;
		default:
			printf("Opção inválida!\n");
			break;
	}}while(op != 1 && op != 2);
	
	areaCobertura(&chuveiro);  
		
	printf("Em qual tipo de instalação será utilizado o chuveiro?\n");
	printf("1 - Geral\n");
	printf("2 - Armazenamento\n");
	scanf("%d", &op);
	switch (op){
		case 1:
			coletaDados(&chuveiro);
			usoGeral(&chuveiro);
			break;
		case 2:
			coletaDados(&chuveiro);
			chuveiro.vga = 3700;
			tabela5(&chuveiro);
			break;
		default:
			printf("Opção inválida!\n");
			break;			
		}
   

    chuveiro.vazao = chuveiro.fatorK * sqrt(chuveiro.pressao);
    chuveiro.rti = chuveiro.vazao * chuveiro.nChuveiros * chuveiro.tempo;

    printf("Vazão: %.2f m³/h\n", chuveiro.vazao);
    printf("RTI: %.2f m³", chuveiro.rti);
    
 
    return 0;
}
