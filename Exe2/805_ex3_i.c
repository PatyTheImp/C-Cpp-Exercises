/*
	Name: Ex 3 alínea i
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
	
	float c, f = 0;
//	c = 60;

	printf("Introduza uma temperatura em graus Celcius: "); scanf("%f", &c);
	
	f = c * 9 / 5 + 32;
	
	printf("%f graus Celsius = %f graus Fahrenheit.", c, f);
}
