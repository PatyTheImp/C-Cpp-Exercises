/*
	Name: Ex 3 alínea d
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
	
	float a, b; 
//	a = 5; 
//	b = 2;

	printf("Introduza um número: "); scanf("%f", &a);
	printf("Introduza outro número: "); scanf("%f", &b);
	
	printf("%.0f + %.0f = %.0f\n", a, b, a + b);
	printf("%.0f - %.0f = %.0f\n", a, b, a - b);
	printf("%.0f x %.0f = %.0f\n", a, b, a * b);
	printf("%.0f : %.0f = %.2f\n", a, b, a / b);
}
