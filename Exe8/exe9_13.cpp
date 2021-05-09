#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char frase[100];
	int num_vogais = 0;
	
	printf("Introduza uma frase: "); gets(frase);
	
	for (int i = 0; frase[i] != '\0'; i++)
	{
		if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')
			num_vogais++;
	}
	
	printf("A frase tem %d vogais.", num_vogais);
}
