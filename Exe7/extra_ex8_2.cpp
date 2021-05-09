#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int i = 0;
	float vetor[100];
	
	do
	{
		printf("Insira 1 número (insira -1 para sair): ");
		scanf("%f", &vetor[i]);
		i++;
	}
	while (vetor[i - 1] != -1);
	
	printf("\n\nOs números digitados foram:\n\n");
	
	for (int j = 0; j < i - 1; j++)
		printf(" %g", vetor[j]);
}

