/*
	Name: Exerc�cio 5 al�nea 5
	Copyright: 
	Author: Patr�cia Costa
	Date: 17/09/20 09:21
	Description: 
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char carac;
	
//	Imagino que era suposto usar um ciclo, mas como ainda n�o demos, repito manualmente 3 vezes
	printf("Insira um caractere: "); scanf(" %c", &carac);
	
	switch (carac)
	{
		case 'a'...'z':
		case 'A'...'Z': printf("O caractere inserido � um caractere alfab�tico.\n"); break;
		case '0'...'9': printf("O caractere inserido � um n�mero (digito).\n"); break; 
		default: printf("O caractere inserido � especial.\n");
	}
	
	printf("Insira um caractere: "); scanf(" %c", &carac);
	
	switch (carac)
	{
		case 'a'...'z':
		case 'A'...'Z': printf("O caractere inserido � um caractere alfab�tico.\n"); break;
		case '0'...'9': printf("O caractere inserido � um n�mero (digito).\n"); break;
		default: printf("O caractere inserido � especial.\n");
	}
	
	printf("Insira um caractere: "); scanf(" %c", &carac);
	
	switch (carac)
	{
		case 'a'...'z':
		case 'A'...'Z': printf("O caractere inserido � um caractere alfab�tico.\n"); break;
		case '0'...'9': printf("O caractere inserido � um n�mero (digito).\n"); break;
		default: printf("O caractere inserido � especial.\n");
	}
}
