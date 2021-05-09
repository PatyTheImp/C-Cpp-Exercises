/*
	Name: Ex 3 alínea j
	Copyright: 
	Author: Patrícia Costa
	Date: 07/09/20 08:42
	Description: 
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char letra;
	
	printf("Prima uma tecla do seu teclado: "); scanf(" %c", &letra);
	printf("A tecla '%c' foi premida.\n", letra);
	printf("O seu valor ASCII é %d", letra);
}

