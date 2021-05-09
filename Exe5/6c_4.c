#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int n, i, j;
	
	printf("Qual o número de ramos: "); scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%c", i + 96);
		puts("");
	}
}

