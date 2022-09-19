#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include "library.h"

void tabela3(CHUVEIRO *chuveiro)
{
    int merc;
    printf("Escolha o tipo de mercadoria: \n");
    printf("Opções: 1, 2, 3 ou 4 \n");
    scanf("%d", &merc);

    switch (merc)
    {
        case 1:
        if (chuveiro->altura > 3.7 && chuveiro->altura <= 6.1)
        {
            printf("Demanda de hidrantes (L/min): 1900\n");
            printf("Duração (min): 90\n");
        }
        else if (chuveiro->altura > 6.1 && chuveiro->altura <=9.1)
        {
            printf("Demanda de hidrantes (L/min): 1900\n");
            printf("Duração (min): 120\n");   
        }
        break;

        case 2:
        if (chuveiro->altura > 3.7 && chuveiro->altura <= 6.1)
        {
            printf("Demanda de hidrantes (L/min): 1900\n");
            printf("Duração (min): 90\n");
        }
        else if (chuveiro->altura > 6.1 && chuveiro->altura <=9.1)
        {
            printf("Demanda de hidrantes (L/min): 1900\n");
            printf("Duração (min): 120\n");   
        }
        break;

        case 3:
        if (chuveiro->altura > 3.7 && chuveiro->altura <= 6.1)
        {
            printf("Demanda de hidrantes (L/min): 1900\n");
            printf("Duração (min): 90\n");
        }
        else if (chuveiro->altura > 6.1 && chuveiro->altura <=9.1)
        {
            printf("Demanda de hidrantes (L/min): 1900\n");
            printf("Duração (min): 120\n");   
        }
        break;

        case 4:
        if (chuveiro->altura > 3.7 && chuveiro->altura <= 6.1)
        {
            printf("Demanda de hidrantes (L/min): 1900\n");
            printf("Duração (min): 120\n");
        }
        else if (chuveiro->altura > 6.1 && chuveiro->altura <=9.1)
        {
            printf("Demanda de hidrantes (L/min): 1900\n");
            printf("Duração (min): 150\n");   
        }
        break;
    }
}
void tabela4(CHUVEIRO *chuveiro)
{
    int merc, chuv;

    printf("Escolha a classe da mercadoria: 1, 2, 3 ou 4 \n");
    printf("Opções: 1, 2, 3 ou 4 \n");
    scanf("%d", &merc);
    
    switch (merc)
    {
        case 1:
        if (chuveiro->altura <= 7.6 && chuveiro->teto <= 9.1)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 160, 240 e 280 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 160 && chuveiro->fatorK != 240 && chuveiro->fatorK != 280);
        switch (chuveiro->fatorK)
        {
        case 160:
            chuveiro->pressao = 1.7;
            break;
        case 240:
            chuveiro->pressao = 0.7;
            break;
        case 280:
            chuveiro->pressao = 1.1;
            break;
        }

        chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
    else if (chuveiro->altura <= 7.6 && chuveiro->teto <= 10.6)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 160 e 240 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 160 && chuveiro->fatorK != 240);
        switch (chuveiro->fatorK)
        {
        case 160:
            chuveiro->pressao = 1.7;
            break;
        case 240:
            chuveiro->pressao = 1.0;
            break;
        }

        chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
    else if (chuveiro->altura <= 9.1 && chuveiro->teto <= 10.6)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 280 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 280);
        switch (chuveiro->fatorK)
        {
        case 280:
            chuveiro->pressao = 1.7;
            break;
        }

        chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
    else if (chuveiro->altura <= 10.6 && chuveiro->teto <= 12.1)
	{
		 do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 280 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 280);
        switch (chuveiro->fatorK)
        {
        case 280:
            chuveiro->pressao = 2.1;
            break;
        }

		chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;

    }
    break;

        case 2:
        if (chuveiro->altura <= 7.6 && chuveiro->teto <= 9.1)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 160, 240 e 280 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 160 && chuveiro->fatorK != 240 && chuveiro->fatorK != 280);
        switch (chuveiro->fatorK)
        {
        case 160:
            chuveiro->pressao = 1.7;
            break;
        case 240:
            chuveiro->pressao = 0.7;
            break;
        case 280:
            chuveiro->pressao = 1.1;
            break;
        }

        chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
    else if (chuveiro->altura <= 7.6 && chuveiro->teto <= 10.6)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 160 e 240 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 160 && chuveiro->fatorK != 240);
        switch (chuveiro->fatorK)
        {
        case 160:
            chuveiro->pressao = 1.7;
            break;
        case 240:
            chuveiro->pressao = 1.0;
            break;
        }

        chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
    else if (chuveiro->altura <= 9.1 && chuveiro->teto <= 10.6)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 280 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 280);
        switch (chuveiro->fatorK)
        {
        case 280:
            chuveiro->pressao = 1.7;
            break;
        }

        chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
    else if (chuveiro->altura <= 10.6 && chuveiro->teto <= 12.1)
	{
		 do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 280 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 280);
        switch (chuveiro->fatorK)
        {
        case 280:
            chuveiro->pressao = 2.1;
            break;
        }

		chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;

    if (chuveiro->altura <= 7.6 && chuveiro->teto <= 9.1)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 160, 240 e 280 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 160 && chuveiro->fatorK != 240 && chuveiro->fatorK != 280);
        switch (chuveiro->fatorK)
        {
        case 160:
            chuveiro->pressao = 1.7;
            break;
        case 240:
            chuveiro->pressao = 0.7;
            break;
        case 280:
            chuveiro->pressao = 1.1;
            break;
        }

        chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
    else if (chuveiro->altura <= 7.6 && chuveiro->teto <= 10.6)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 160 e 240 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 160 && chuveiro->fatorK != 240);
        switch (chuveiro->fatorK)
        {
        case 160:
            chuveiro->pressao = 1.7;
            break;
        case 240:
            chuveiro->pressao = 1.0;
            break;
        }

        chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
    else if (chuveiro->altura <= 9.1 && chuveiro->teto <= 10.6)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 280 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 280);
        switch (chuveiro->fatorK)
        {
        case 280:
            chuveiro->pressao = 1.7;
            break;
        }

        chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
    else if (chuveiro->altura <= 10.6 && chuveiro->teto <= 12.1)
	{
		 do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 280 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 280);
        switch (chuveiro->fatorK)
        {
        case 280:
            chuveiro->pressao = 2.1;
            break;
        }

		chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
	else if (chuveiro->altura <= 10.7 && chuveiro->teto <= 12.2)
	{
		 do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 240, 320 e 360 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 240 && chuveiro->fatorK != 320 && chuveiro->fatorK != 360);
        switch (chuveiro->fatorK)
        {
        case 240:
            chuveiro->pressao = 3.6;
            break;
        case 320:
            chuveiro->pressao = 2.8;
            break;
        case 360:
            chuveiro->pressao = 1.7;
            break;
        }
		chuveiro->tempo = 1;
        chuveiro->nChuveiros = 12;
    }
	else if (chuveiro->altura <= 10.7 && chuveiro->teto <= 12.2)
	{
		 do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 240, 320 e 360 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 240 && chuveiro->fatorK != 320 && chuveiro->fatorK != 360);
        switch (chuveiro->fatorK)
        {
        case 240:
            chuveiro->pressao = 3.6;
            break;
        case 320:
            chuveiro->pressao = 2.8;
            break;
        case 360:
            chuveiro->pressao = 1.7;
            break;
        }
		chuveiro->tempo = 1;
        chuveiro->nChuveiros = 12;
    }
	else if (chuveiro->altura <= 10.7 && chuveiro->teto <= 13.7)
	{
		 do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 320 e 360 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 320 && chuveiro->fatorK != 360);
        switch (chuveiro->fatorK)
        {
        case 320:
            chuveiro->pressao = 2.8;
            break;
        case 360:
            chuveiro->pressao = 2.8;
            break;
        }
		chuveiro->tempo = 1;
        chuveiro->nChuveiros = 12;
    }
    else if (chuveiro->altura <= 12.2 && chuveiro->teto <= 13.7)
	{
		 do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 320 e 360 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 320 && chuveiro->fatorK != 360);
        switch (chuveiro->fatorK)
        {
        case 320:
            chuveiro->pressao = 2.8;
            break;
        case 360:
            chuveiro->pressao = 2.8;
            break;
        }
		chuveiro->tempo = 1;
        chuveiro->nChuveiros = 12;
	}
}
    break;

        case 3:
        if (chuveiro->altura <= 7.6 && chuveiro->teto <= 9.1)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 160, 240 e 280 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 160 && chuveiro->fatorK != 240 && chuveiro->fatorK != 280);
        switch (chuveiro->fatorK)
        {
        case 160:
            chuveiro->pressao = 1.7;
            break;
        case 240:
            chuveiro->pressao = 1.0;
            break;
        case 280:
            chuveiro->pressao = 1.1;
            break;
        }

        chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
    else if (chuveiro->altura <= 7.6 && chuveiro->teto <= 10.6)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 160 e 240 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 160 && chuveiro->fatorK != 240);
        switch (chuveiro->fatorK)
        {
        case 160:
            chuveiro->pressao = 1.7;
            break;
        case 240:
            chuveiro->pressao = 1.0;
            break;
        }

        chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
    else if (chuveiro->altura <= 9.1 && chuveiro->teto <= 10.6)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 280 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 280);
        switch (chuveiro->fatorK)
        {
        case 280:
            chuveiro->pressao = 1.7;
            break;
        }

        chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
    else if (chuveiro->altura <= 10.6 && chuveiro->teto <= 12.1)
	{
		 do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 280 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 280);
        switch (chuveiro->fatorK)
        {
        case 280:
            chuveiro->pressao = 2.1;
            break;
        }

		chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
    break;
        case 4:
        printf("Escolha o numero de chuveiros: 20 ou 15 \n");
        scanf("%d", &chuv);
        if (chuveiro->altura <= 6.1 && chuveiro->teto <= 9.1)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 160, 240 e 280 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 160 && chuveiro->fatorK != 240 && chuveiro->fatorK != 280);
        switch (chuveiro->fatorK)
        {
        case 160:
            if (chuv == 20){
                chuveiro->pressao = 1.7;
                chuveiro->tempo = 2;
                chuveiro->nChuveiros = 20;
            }
            else{
                chuveiro->pressao = 3.5;
                chuveiro->tempo = 1.5;
                chuveiro->nChuveiros = 15;
            }
            break;
        case 240:
            if (chuv == 20){
                chuveiro->pressao = 1.0;
                chuveiro->tempo = 2;
                chuveiro->nChuveiros = 20;
            }
            else{
                chuveiro->pressao = 1.5;
                chuveiro->tempo = 1.5;
                chuveiro->nChuveiros = 15;
            }
            break;
        case 280:
            chuveiro->pressao = 1.1;
            break;
        }
    }
    else if (chuveiro->altura <= 7.6 && chuveiro->teto <= 9.1)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 240 e 280 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 240 && chuveiro->fatorK != 280);
        switch (chuveiro->fatorK)
        {
        case 240:
            chuveiro->pressao = 1.5;
            break;
        case 280:
            chuveiro->pressao = 1.1;
            break;
        }

        chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
    else if (chuveiro->altura <= 9.1 && chuveiro->teto <= 10.6)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 280 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 280);
        switch (chuveiro->fatorK)
        {
        case 280:
            chuveiro->pressao = 1.7;
            break;
        }

        chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
    else if (chuveiro->altura <= 10.6 && chuveiro->teto <= 12.1)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 280 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 280);
        switch (chuveiro->fatorK)
        {
        case 280:
            chuveiro->pressao = 2.1;
            break;
        }

        chuveiro->tempo = 1.5;
        chuveiro->nChuveiros = 15;
    }
}
}
void tabela5(CHUVEIRO *chuveiro)

{

    if (chuveiro->altura <= 6.1 && chuveiro->teto <= 7.6)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 200, 240, 320 e 360 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 200 && chuveiro->fatorK != 240 && chuveiro->fatorK != 320 && chuveiro->fatorK != 360);
        switch (chuveiro->fatorK)
        {
        case 200:
            chuveiro->pressao = 3.4;
            break;
        case 240:
            chuveiro->pressao = 2.4;
            break;
        case 320:
            chuveiro->pressao = 1.7;
            break;
        case 360:
            chuveiro->pressao = 1.0;
            break;
        }

        chuveiro->tempo = 1;
        chuveiro->nChuveiros = 12;
    }

    else if (chuveiro->altura <= 7.6 && chuveiro->teto <= 9.1)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 200, 240, 320 e 360 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 200 && chuveiro->fatorK != 240 && chuveiro->fatorK != 320 && chuveiro->fatorK != 360);
        switch (chuveiro->fatorK)
        {
        case 200:
            chuveiro->pressao = 3.4;
            break;
        case 240:
            chuveiro->pressao = 2.4;
            break;
        case 320:
            chuveiro->pressao = 1.7;
            break;
        case 360:
            chuveiro->pressao = 1.0;
            break;
        }
        chuveiro->tempo = 1;
        chuveiro->nChuveiros = 12;
    }
    else if (chuveiro->altura <= 7.6 && chuveiro->teto <= 9.8)
    {
        do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 200, 240 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 200 && chuveiro->fatorK != 240);
        switch (chuveiro->fatorK)
        {
        case 200:
            chuveiro->pressao = 4.1;
            break;
        case 240:
            chuveiro->pressao = 2.9;
            break;
        }
        chuveiro->tempo = 1;
        chuveiro->nChuveiros = 12;
    }
    else if (chuveiro->altura <= 9.1 && chuveiro->teto <= 10.7)
	{
		 do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 200, 240, 320 e 360 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 200 && chuveiro->fatorK != 240 && chuveiro->fatorK != 320 && chuveiro->fatorK != 360);
        switch (chuveiro->fatorK)
        {
        case 200:
            chuveiro->pressao = 5.2;
            break;
        case 240:
            chuveiro->pressao = 3.6;
            break;
        case 320:
            chuveiro->pressao = 2.4;
            break;
        case 360:
            chuveiro->pressao = 1.4;
            break;
        }
		chuveiro->tempo = 1;
        chuveiro->nChuveiros = 12;
    }
	else if (chuveiro->altura <= 10.7 && chuveiro->teto <= 12.2)
	{
		 do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 240, 320 e 360 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 240 && chuveiro->fatorK != 320 && chuveiro->fatorK != 360);
        switch (chuveiro->fatorK)
        {
        case 240:
            chuveiro->pressao = 3.6;
            break;
        case 320:
            chuveiro->pressao = 2.8;
            break;
        case 360:
            chuveiro->pressao = 1.7;
            break;
        }
		chuveiro->tempo = 1;
        chuveiro->nChuveiros = 12;
    }
	else if (chuveiro->altura <= 10.7 && chuveiro->teto <= 12.2)
	{
		 do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 240, 320 e 360 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 240 && chuveiro->fatorK != 320 && chuveiro->fatorK != 360);
        switch (chuveiro->fatorK)
        {
        case 240:
            chuveiro->pressao = 3.6;
            break;
        case 320:
            chuveiro->pressao = 2.8;
            break;
        case 360:
            chuveiro->pressao = 1.7;
            break;
        }
		chuveiro->tempo = 1;
        chuveiro->nChuveiros = 12;
    }
	else if (chuveiro->altura <= 10.7 && chuveiro->teto <= 13.7)
	{
		 do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 320 e 360 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 320 && chuveiro->fatorK != 360);
        switch (chuveiro->fatorK)
        {
        case 320:
            chuveiro->pressao = 2.8;
            break;
        case 360:
            chuveiro->pressao = 2.8;
            break;
        }
		chuveiro->tempo = 1;
        chuveiro->nChuveiros = 12;
    }
    else if (chuveiro->altura <= 12.2 && chuveiro->teto <= 13.7)
	{
		 do
        {
            printf("Escolha do fator K \n");
            printf("Opções: 320 e 360 \n");
            scanf("%d", &chuveiro->fatorK);
        } while (chuveiro->fatorK != 320 && chuveiro->fatorK != 360);
        switch (chuveiro->fatorK)
        {
        case 320:
            chuveiro->pressao = 2.8;
            break;
        case 360:
            chuveiro->pressao = 2.8;
            break;
        }
		chuveiro->tempo = 1;
        chuveiro->nChuveiros = 12;
	}
    
}
void tabela6(CHUVEIRO *chuveiro)
{
    int merc;

    printf("Escolha a classe da merdadoria: \n");
    printf("Opções: 1, 2, 3 ou 4 \n");
    scanf("%d", &merc);

    switch (merc)
    {
        case 1:
        printf("Largura do corredor: 1.2m - Densidade: 15.1 L/min/m2");
        printf("Largura do corredor: 2.4m - Densidade: 13.5 L/min/m2");
        break;

        case 2:
        printf("Largura do corredor: 1.2m - Densidade: 17.9 L/min/m2");
        printf("Largura do corredor: 2.4m - Densidade: 15.1 L/min/m2");
        break;

        case 3:
        printf("Largura do corredor: 1.2m - Densidade: 20.0 L/min/m2");
        printf("Largura do corredor: 2.4m - Densidade: 17.1 L/min/m2");
        break;

        case 4:
        printf("Largura do corredor: 1.2m - Densidade: 27.7 L/min/m2");
        printf("Largura do corredor: 2.4m - Densidade: 23.2 L/min/m2");
        break;
    }
}
