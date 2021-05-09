#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int i;
	
	for (i = 1; i <= 10; i++)
		printf("*");
	
	puts("");
	
	for (i = 1; i <= 10; i++)
		printf("*        *\n");
		
	for (i = 1; i <= 10; i++)
		printf("*");
}

