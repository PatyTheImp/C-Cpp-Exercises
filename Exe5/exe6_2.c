#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale(LC_ALL, "portuguese");
		
	float r = 1;
	
	while (r != 0)
	{
		printf("Introduza o raio: "); scanf("%f", &r);
		
		r >= 0 ? printf("A �rea � %f", M_PI * r * r) : printf("Raio inv�lido.");
		
		puts("\n");
	}
	
	printf("Fim do programa.");
}
