/*
	Name: Exerc�cio 5 al�nea 11
	Copyright: 
	Author: Patr�cia Costa
	Date: 17/09/20 09:21
	Description: 
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int num;
	char tipo, min_mai, sair;
	
	printf("Introduza um inteiro: "); scanf("%d", &num);
	printf("Deseja ver esse inteiro em [H]exa ou [O]ctal? "); scanf(" %c", &tipo);
	
	switch (tipo)
	{
		case 'o':
		case 'O': printf("O decimal %d corresponde a %o em Octal.\n", num, num); break;
		case 'h':
		case 'H':
			printf("Deseja visualisar o valor em [M]ai�sculas ou [m]in�sculas? "); min_mai = getche(); 
			putchar('\n');
			switch (min_mai)
			{
				case 'm': printf("O decimal %d corresponde a %x em Hexa.\n", num, num); break;
				case 'M': printf("O decimal %d corresponde a %X em Hexa.\n", num, num); break;
				default: printf("Valor introduzido inv�lido.\n");
			}
			break;
		default: printf("Valor introduzido � inv�lido.\n");		
	}
	
	printf("Deseja converter outro inteiro? Se sim carregue em s se n�o corregue noutra tecla qualquer."); sair = getch();
	putchar('\n');
	
	switch (sair)
	{
		case 's':
		case 'S':
			system("cls");
			main();	
			break;
		default: printf("T�LOG");
	}
}


























