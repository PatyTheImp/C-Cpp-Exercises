#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

void Topo()
{
	for (int i = 1; i <= 10; i++)
		printf("*");
		
	puts("");
}

void Meio()
{
	for (int i = 1; i <= 10; i++)
		printf("*        *\n");
}

void Base()
{
	for (int i = 1; i<= 10; i++)
		printf("*");
}

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char enter = ' ';
	
	Topo();
	Meio();
	Base();
	
	printf("\nPrima ENTER para limpar o ecrã.");
	
	while (enter != '\r')
		enter = getch();
	system("cls");
	
	enter = ' ';
	printf("Prima ENTER novamente para sair do programa.");
	
	while (enter != '\r')
		enter = getch();	
}























