#include <stdio.h>
#include <locale.h>

main()
{
		setlocale(LC_ALL, "portuguese");
		
		int i;
		
		for (i = 0; i <= 30; i++)
			printf("%d ", i);
		
}

