#include <stdio.h>
#include <locale.h>

const int LINHAS = 4;
const int COLUNAS = 2;

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int matriz[LINHAS][COLUNAS];
	
	printf("Para uma matriz de %d x %d, insira:\n\n", LINHAS, COLUNAS);
	
	for(int i = 0; i < LINHAS; i++)
	{
		printf("Linha 'Espaço' Coluna 'Enter': ");
		
		for (int j = 0; j < COLUNAS; j++)
			scanf("%d", &matriz[i][j]);
			
		puts("");
	}
	
	for(int i = 0; i < LINHAS; i++)
	{
		for (int j = 0; j < COLUNAS; j++)
			printf(" %d", matriz[i][j]);
			
		puts("");
	}
}

