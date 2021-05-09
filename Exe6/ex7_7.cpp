#include <stdio.h>
#include <locale.h>

void peso_ideal(float alt, char sexo)
{
	switch (sexo)
	{
		case 'm':
		case 'M':
			printf("Peso ideal = %.2f kg.", 72.7 * alt - 58);
			break;
		case 'f':
		case 'F':
			printf("Peso ideal = %.2f kg.", 62.1 * alt - 44.7);
			break;
		default:
			printf("Sexo inválido.");
	}
}

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float alt;
	char sexo;
	
	printf("Insira a sua altura em metros: ");
	scanf("%f", &alt);
	printf("Indique se é homem(m) ou mulher(f): ");
	scanf(" %c", &sexo);
	
	peso_ideal(alt, sexo);
}

