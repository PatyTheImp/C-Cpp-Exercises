#include <stdio.h>
#include <locale.h>
#include <conio.h>

main()
{
	setlocale(LC_ALL, "portuguese");
		
	char coisas;
	
	printf("Introduza uma palavra ou letra e prima enter. [sair - x]\n");
	
	for (coisas; ;)
	{
		coisas = getchar();
		if (coisas == 'x' || coisas == 'X') break;
		else printf("%c", coisas);
	}	

}

