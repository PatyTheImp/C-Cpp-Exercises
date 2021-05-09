#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float maior = 0;
	int dim = 0;
	
	printf("Introduza o tamanho do array/vetor: ");
	scanf("%d", &dim);
	
	float vetor[dim];
	
	printf("\nIntroduza %d elementos no array/vetor:\n", dim);
	
	for (int i = 0; i < dim; i++)
	{
		scanf("%f", &vetor[i]);
		
		if (i == 0 || vetor[i] > maior)
			maior = vetor[i];
	}
	
	printf("\nO maior elemento foi o: %g", maior);
}

