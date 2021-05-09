#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char string1[4] = "123";
	char string2[4] = "456";
	
	printf("A string1 é igual a: %s\n", string1);
	printf("Copiando o valor da string2...\n");
	printf("A string1 fica igual a: %s", strcpy(string1, string2));
}

