#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int i;
	
	for (i = 97; i <= 122; i++)
		printf("O valor ASCII de %c é %d\n", i, i);
}

