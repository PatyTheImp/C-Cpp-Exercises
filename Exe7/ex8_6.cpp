#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int lista[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	for (int i = 0; i <= 9; i++)
		printf("A entrada de lista [%d] é iniciada com %d\n", i, lista[i]);
}

