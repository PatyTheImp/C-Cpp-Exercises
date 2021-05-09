/*
	Name: Ex 3 alínea g
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
	
	int idade, dias;
//	idade = 29;
	

	dias = idade * 365;
	
	printf("%d anos = %d dias.", idade, dias);
}
