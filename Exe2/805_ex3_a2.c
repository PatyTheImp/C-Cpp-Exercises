/*
	Name: Ex 3 al�nea a
	Copyright: 
	Author: Patr�cia Costa
	Date: 07/09/20 08:42
	Description: 
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2;
	
	printf("Insira um n�mero: "); scanf("%d", &n1);
	printf("Insira outro n�mero: "); scanf("%d", &n2);
	printf("%d + %d = %d", n1, n2, n1 + n2);
}
