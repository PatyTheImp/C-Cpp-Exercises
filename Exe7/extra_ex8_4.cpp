#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int dois_dim[3][5] = 
	{
		{  1,   2,   3,   4,   5},
		{ 10,  20,  30,  40,  50},
		{100, 200, 300, 400, 500}
	};
	
	printf("*** Array Bidimensional de 3x5 ***\n\n\n");
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%6d", dois_dim[i][j]);
		
		puts("");
	}
}

