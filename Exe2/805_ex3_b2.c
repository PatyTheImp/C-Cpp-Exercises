/*
	Name: Ex 3 alínea b
	Copyright: 
	Author: Patrícia Costa
	Date: 07/09/20 08:42
	Description: 
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float a, b, c, raizq, x1, x2;

	
	printf("Introduza os coeficientes de um polinómio de grau 2.\n");
	printf("a = "); scanf("%f", &a);
	printf("b = "); scanf("%f", &b);
	printf("c = "); scanf("%f", &c);
	
	raizq = sqrt(pow(b, 2) - 4 * a * c);
	
	x1 = (-b + raizq) / (2 * a);
	x2 = (-b - raizq) / (2 * a);
	
	printf("As raízes são %.2f e %.2f", x1, x2);
}
