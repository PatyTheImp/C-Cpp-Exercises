#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int a = 7;
	int *aPtr = &a;
	
	printf("O valor da vari�vel 'a' � %d\n", a);
	printf("O valor do ponteiro *aPtr � %d\n\n", *aPtr);
	printf("O endere�o de 'a' � %p\n", &a);
	printf("O endere�o de aPtr � %p", aPtr);
}

