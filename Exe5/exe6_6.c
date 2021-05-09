#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
		
	int tab, i = 1;
		
	printf("Introduza um número: "); scanf("%d", &tab);
		
	while (i <= 10)
	{	
		printf("%2d * %2d = %2d\n", tab, i, tab * i);
		i++;
	}
}
