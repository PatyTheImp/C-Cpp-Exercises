#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int a = 7;
	int *aPtr = &a;
	
	printf("O valor da variável 'a' é %d\n", a);
	printf("O valor do ponteiro *aPtr é %d\n\n", *aPtr);
	printf("O endereço de 'a' é %p\n", &a);
	printf("O endereço de aPtr é %p", aPtr);
}

