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
    int op;
    //setlocale(LC_ALL, "Portuguese");
      
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
			tabela5(&chuveiro);
			break;
		}
   

    chuveiro.vazao = chuveiro.fatorK * sqrt(chuveiro.pressao);
    chuveiro.rti = chuveiro.vazao * chuveiro.nChuveiros * chuveiro.tempo;

    printf("Vazão: %.2f m³/h\n", chuveiro.vazao);
    printf("RTI: %.2f m³", chuveiro.rti);
    
 
    return 0;
}
