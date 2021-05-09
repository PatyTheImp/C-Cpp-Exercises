#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int variavel = 10;
	int *int_ptr = &variavel;
	int x = *int_ptr;
	
	printf("variavel = %d, x = %d", variavel, x);
}

