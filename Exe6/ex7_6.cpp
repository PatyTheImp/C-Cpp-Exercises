#include <stdio.h>
#include <locale.h>
#include <math.h>

float volume(float raio)
{
	return ((4.0 / 3.0) * M_PI * pow(raio, 3));
}

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float r;
	
	printf("Insira o raio de uma esfera para calcular o seu volume: ");
	scanf("%f", &r);
	
	printf("Volume = %.2f", volume(r));
}

