/*
	Name: Ex 3 al�nea c
	Copyright: 
	Author: Patr�cia Costa
	Date: 07/09/20 08:42
	Description: 
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float r, P, A;
	
	printf("Insira o raio da circunfer�ncia: "); scanf("%f", &r);
	
	P = 2 * M_PI * r;
	A = M_PI * pow(r, 2);
	
	printf("Per�metro = %.2f e �rea = %.2f", P, A);
}
