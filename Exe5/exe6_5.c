#include <stdio.h>
#include <locale.h>

main()
{
		setlocale(LC_ALL, "portuguese");
		
		int i = 1;
		
		while (i <= 10)
		{
			printf("5 * %2d = %2d\n", i, 5 * i);
			i++;
		}
}
