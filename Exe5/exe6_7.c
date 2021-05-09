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
		printf("\t(1)...Mamão\n");
		printf("\t(2)...Abacaxi\n");
		printf("\t(3)...Laranja\n\n\n");
		printf("\t(0)...Sair\n\n");
		printf(": "); scanf(" %c", &op);
		
		if (op != '0')
		{
			switch (op)
			{
				case '1': printf("\t\tVocê escolheu Mamão."); break;
				case '2': printf("\t\tVocê escolheu Abacaxi."); break;
				case '3': printf("\t\tVocê escolheu Laranja."); break;
				default: printf("Opção inválida.");
			}
			
			getch();
			system("cls");
		}
	}
	while (op != '0');
	
	printf("Obrigado pela participação.\n");
	printf("A sair do programa...");
}
