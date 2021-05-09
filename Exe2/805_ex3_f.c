/*
	Name: Ex 3 alínea f
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
	
	float pes, mm;
	
	printf("Introduza um valor em pés: "); scanf("%f", &pes);
	
	mm = pes * 304.79;
	
	printf("%.2f pés = %.2f metros = %.2f centímetros.", pes, mm / 1000, mm / 10);
}
