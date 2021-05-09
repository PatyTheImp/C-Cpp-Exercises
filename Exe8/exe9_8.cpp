#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char string1[100], string2[100], string3[100];
	
	printf("Insira a 1ª string: "); gets(string1);
	printf("Insira a 2ª string: "); gets(string2);
	printf("Insira a 3ª string: "); gets(string3);
	
	strcat(strcat(string1, string2), string3);
	
	printf("\n\"%s\" contém %d caracteres.", string1, strlen(string1));
}

