#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float notas[5], soma = 0;
	
	for (int i = 0; i <= 4; i++)
	{
		printf("Introduza a nota do %d� teste: ", i + 1);
		scanf("%f", &notas[i]);
		
		soma += notas[i];
	}
	
	printf("\nM�dia final: %.2f valores.", soma / 5);
}

