/*
	Name: Ex 3 al�nea f
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
	
	float pes, mm;
	
	printf("Introduza um valor em p�s: "); scanf("%f", &pes);
	
	mm = pes * 304.79;
	
	printf("%.2f p�s = %.2f metros = %.2f cent�metros.", pes, mm / 1000, mm / 10);
}
