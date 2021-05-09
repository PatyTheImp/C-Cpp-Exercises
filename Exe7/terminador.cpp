#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char c[100];
	
	printf("Digite ou não algo: "); gets(c);
	
	if (c[0] == '\0')
		printf("Não digitou nada!");
	else
		printf("Digitou: %s", c);
}

