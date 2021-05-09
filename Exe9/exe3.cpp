#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char letra = 'b', *letra_ptr = &letra, *ptr = "d";
	
	printf("(1) %c\n\n", letra);
	printf("(2) %p\n\n", letra_ptr);
	printf("(3) %s", ptr);
}

