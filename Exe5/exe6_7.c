#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char op;
	
	do
	{
		printf("Escolha um fruto:\n\n");
		printf("\t(1)...Mam�o\n");
		printf("\t(2)...Abacaxi\n");
		printf("\t(3)...Laranja\n\n\n");
		printf("\t(0)...Sair\n\n");
		printf(": "); scanf(" %c", &op);
		
		if (op != '0')
		{
			switch (op)
			{
				case '1': printf("\t\tVoc� escolheu Mam�o."); break;
				case '2': printf("\t\tVoc� escolheu Abacaxi."); break;
				case '3': printf("\t\tVoc� escolheu Laranja."); break;
				default: printf("Op��o inv�lida.");
			}
			
			getch();
			system("cls");
		}
	}
	while (op != '0');
	
	printf("Obrigado pela participa��o.\n");
	printf("A sair do programa...");
}
