/*
	Name: Ex 3 alínea e
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
	
	float num1, num2, num3, num4, num5, media;
//	num1 = 3;
//	num2 = 1;
//	num3 = 11;
//	num4 = 8;
//	num5 = 6;

	printf("Introduza cinco números:\n\n");
	printf("Primeiro Número: "); scanf("%f", &num1); 
	printf("Segundo Número: "); scanf("%f", &num2);
	printf("Terceiro Número: "); scanf("%f", &num3);
	printf("Quarto Número: "); scanf("%f", &num4);
	printf("Quinto Número: "); scanf("%f", &num5);
	
	media = (num1 + num2 + num3 + num4 + num5) / 5;
	
	printf("\nMédia Aritmética = %.2f", media);
}
