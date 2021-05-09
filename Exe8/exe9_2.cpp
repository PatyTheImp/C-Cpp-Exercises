#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char nome[100];
	
	printf("Introduza nomes. Se pretender sair prima enter sem escrever nada.\n");
	
	while (1)
	{
		gets(nome);
		
		if (nome[0] == '\0')
			break;
			
		printf("Introduziu: %s\n", nome);
	}
	
	printf("Não introduziu nada. Adeus!");
}


