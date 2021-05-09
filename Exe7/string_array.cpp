#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char str[6] = "Pedro";
		
	printf("String armazenamento: %s", str);
	printf("\nA 3ª letra: %c", str[2]);
	
	str[2] = 'o';
	printf("\n\nAgora a terceira letra é: %c", str[2]);
	printf("\nA string será agora: %s \n\n", str);
}

