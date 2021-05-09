/*
	Name: Exe 3f alínea 3
	Copyright: 
	Author: Patrícia Costa
	Date: 11/09/20 09:39
	Description: 
*/

#include <locale.h>
#include <stdio.h>

#define idade (40 / 2)

main()
{
	setlocale(LC_ALL, "portuguese");
	
	printf("A idade definida foi %d, sendo o seu dobro %d", idade, idade * 2);
}
