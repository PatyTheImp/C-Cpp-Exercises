/*
	Name: Ex 3 al�nea e
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
	
	float num1, num2, num3, num4, num5, media;
//	num1 = 3;
//	num2 = 1;
//	num3 = 11;
//	num4 = 8;
//	num5 = 6;

	printf("Introduza cinco n�meros:\n\n");
	printf("Primeiro N�mero: "); scanf("%f", &num1); 
	printf("Segundo N�mero: "); scanf("%f", &num2);
	printf("Terceiro N�mero: "); scanf("%f", &num3);
	printf("Quarto N�mero: "); scanf("%f", &num4);
	printf("Quinto N�mero: "); scanf("%f", &num5);
	
	media = (num1 + num2 + num3 + num4 + num5) / 5;
	
	printf("\nM�dia Aritm�tica = %.2f", media);
}
