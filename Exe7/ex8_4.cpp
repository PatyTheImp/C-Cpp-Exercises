#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float nums[5];
	
	for (int i = 0; i <= 4; i++)
	{
		printf("Introduza o n�mero %d: ", i + 1);
		scanf("%f", &nums[i]);
	}
	printf("N� na ordem inversa:\n");
	
	for (int i = 4; i >= 0; i--)
		printf("\tNum: %g\n", nums[i]);
}

