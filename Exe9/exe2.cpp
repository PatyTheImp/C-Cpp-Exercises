#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int x, y;
	int *ptr_p;
	
	x = 3;
	ptr_p = &x;
	y = *ptr_p;
	
	printf("Sabendo que x = %d\n\n", x);
	printf("...atribuindo o valor %d a um pointer (ex_ ptr_p)..\n\n", *ptr_p);
	printf("e em seguida passado o valor do pointer para a variável 'y'");
	printf("\n\nmostre que 'y' = %d", y);
}

