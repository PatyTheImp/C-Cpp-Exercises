/*
	Name: Ex 3 al?nea h
	Copyright: 
	Author: Patr?cia Costa
	Date: 07/09/20 08:42
	Description: 
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char letra;

	printf("Introduza uma letra: "); scanf(" %c", &letra);
	
	printf("A letra '%c' ? seguida por '%c'", letra, letra + 1);
}
