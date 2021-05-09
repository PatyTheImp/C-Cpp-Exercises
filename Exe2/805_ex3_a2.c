/*
	Name: Ex 3 alínea a
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
	
	int n1, n2;
	
	printf("Insira um número: "); scanf("%d", &n1);
	printf("Insira outro número: "); scanf("%d", &n2);
	printf("%d + %d = %d", n1, n2, n1 + n2);
}
