/*
	Name: Exercício 5 alínea 5
	Copyright: 
	Author: Patrícia Costa
	Date: 17/09/20 09:21
	Description: 
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char carac;
	
//	Imagino que era suposto usar um ciclo, mas como ainda não demos, repito manualmente 3 vezes
	printf("Insira um caractere: "); scanf(" %c", &carac);
	
	switch (carac)
	{
		case 'a'...'z':
		case 'A'...'Z': printf("O caractere inserido é um caractere alfabético.\n"); break;
		case '0'...'9': printf("O caractere inserido é um número (digito).\n"); break; 
		default: printf("O caractere inserido é especial.\n");
	}
	
	printf("Insira um caractere: "); scanf(" %c", &carac);
	
	switch (carac)
	{
		case 'a'...'z':
		case 'A'...'Z': printf("O caractere inserido é um caractere alfabético.\n"); break;
		case '0'...'9': printf("O caractere inserido é um número (digito).\n"); break;
		default: printf("O caractere inserido é especial.\n");
	}
	
	printf("Insira um caractere: "); scanf(" %c", &carac);
	
	switch (carac)
	{
		case 'a'...'z':
		case 'A'...'Z': printf("O caractere inserido é um caractere alfabético.\n"); break;
		case '0'...'9': printf("O caractere inserido é um número (digito).\n"); break;
		default: printf("O caractere inserido é especial.\n");
	}
}
