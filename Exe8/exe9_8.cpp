#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char string1[100], string2[100], string3[100];
	
	printf("Insira a 1� string: "); gets(string1);
	printf("Insira a 2� string: "); gets(string2);
	printf("Insira a 3� string: "); gets(string3);
	
	strcat(strcat(string1, string2), string3);
	
	printf("\n\"%s\" cont�m %d caracteres.", string1, strlen(string1));
}

