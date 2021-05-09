#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

const int LINHAS = 5;
const int COLUNAS = 4;

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int array[LINHAS][COLUNAS];
	
	for (int i = 0; i < LINHAS; i++)
	{
		for (int j = 0; j < COLUNAS; j++)
		{
			array[i][j] = rand();
			printf("%d\t", array[i][j]);
		}
		puts("");	
	}
}

