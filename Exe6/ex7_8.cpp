#include <stdio.h>
#include <locale.h>

void media(float nota1, float nota2, float nota3, char calc)
{
	switch (calc)
	{
		case 'a':
		case 'A':
			printf("M�dia aritm�tica = %.2f", (nota1 + nota2 + nota3) / 3);
			break;
		case 'p':
		case 'P':
			printf("M�dia ponderada = %.2f", (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10);
			break;
		default:
			printf("Input inv�lido");
	}
}

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float nota1, nota2, nota3;
	char calc;
	
	printf("Insira 3 notas separadas por espa�o: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	printf("Quer calcular a m�dia aritm�tica(a) ou a ponderada(p)? ");
	scanf(" %c", &calc);
	
	media(nota1, nota2, nota3, calc);
}

