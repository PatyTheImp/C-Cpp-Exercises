#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char string1[100], string2[100];
	
	printf("Insira uma palavra: "); gets(string1);
	printf("Insira outra palavra: "); gets(string2);
	
	if (strcmp(string1, string2))
		printf("\nAs strings n�o s�o iguais!");
	else
		printf("\nAs strings s�o iguais!");
}

