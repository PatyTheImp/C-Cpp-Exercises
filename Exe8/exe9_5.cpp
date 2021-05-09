#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char autro[100] = "String inserida: ";
	char string[100];
	
	printf("Insira uma string: ");
	gets(string);
	
	printf(strcat(autro, string));
}

