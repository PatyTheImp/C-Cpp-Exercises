#include <stdio.h>
#include <locale.h>

main()
{
		setlocale(LC_ALL, "portuguese");
		
		int num;
		
		for (num = 10; num >= 1; num--)
			printf("x = %d\n", num);
}

