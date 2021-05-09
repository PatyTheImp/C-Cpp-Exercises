#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int i;
	
	for (i = 0; i <= 10; i++)
		printf("%2d - %2d\n", i, i + 1);
}

