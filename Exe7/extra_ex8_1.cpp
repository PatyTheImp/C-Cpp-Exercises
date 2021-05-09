#include <stdio.h>
#include <locale.h>

void inserir(char matriz, float x[2][2], float y[2][2])
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("Insira %c%d%d: ", matriz, i + 1, j + 1);
			scanf("%f", &x[i][j]);
			y[i][j] += x[i][j];
		}
	}
}

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float a[2][2], b[2][2], 
	c[2][2] = 
	{
		{0, 0},
		{0, 0}
	};
	
	printf("Insira os valores da primeira matriz:\n");
	inserir('a', a, c);
	
	printf("\nInsira os valores da segunda matriz:\n");
	inserir('b', b, c);
	
	printf("\nA soma da matriz é:\n");
	printf("%.1f\t%.1f\n", c[0][0], c[0][1]);
	printf("%.1f\t%.1f", c[1][0], c[1][1]);	
}

