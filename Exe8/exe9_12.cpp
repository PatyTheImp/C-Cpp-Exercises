#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char frase[100];
	int num_palavras = 0;
	
	printf("Introduza uma frase: "); gets(frase);
	
	for (int i = 0; frase[i] != '\0'; i++)
	{
		if (i == 0)
			num_palavras++;
		if (frase[i] == ' ' && frase[i + 1] != ' ' && frase[i + 1] != '\0')
			num_palavras++;
	}
	
	printf("A frase tem %d palavras.", num_palavras);
}

