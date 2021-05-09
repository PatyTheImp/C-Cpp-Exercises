#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int num, i;
	
	printf("Introduza um número: "); scanf("%d", &num);
	
	for (i = 1; i <= num; i++)
		printf("%d\t%d\n", i, num - i + 1);
}

