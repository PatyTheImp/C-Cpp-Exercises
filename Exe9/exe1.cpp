#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char ch = 'c';
	char *ch_ptr = &ch;
	int i = 20;
	int *i_ptr = &i;
	float f = 1.2;
	float *f_ptr = &f;
	char *ptr = "Isto é uma string";
	
	printf("Usando pointers:\n\n");
	printf("[%c], [%d], [%f], [%c], [%s]", *ch_ptr, *i_ptr, *f_ptr, *ptr, ptr);
}

