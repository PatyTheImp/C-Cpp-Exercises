#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int array1[5] = {2, 4, 6, 8, 10};
	int array2[5] = {1, 3, 5, 7, 9};
	
	printf("Este programa soma os dois Array's (Vetores) seguintes:\n");
	printf("Array 1 = {2, 4, 6, 8, 10}\n");
	printf("Array 2 = {1, 3, 5, 7, 9}\n\n");
	
	printf("Resultante da soma dos Array's:\n");
	
	for (int i = 0; i <= 4; i++)
		printf("Soma do Array [%d]: %d\n", i, array1[i] + array2[i]);
}

