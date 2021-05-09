#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int n, i, j;
	char c;
	
	printf("Insira um número: "); scanf("%d", &n);
	printf("Insira um caracter: "); scanf(" %c", &c);
	
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%c", c);
		puts("");
	}
}

