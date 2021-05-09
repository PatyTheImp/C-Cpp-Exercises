#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

float triangulo(float b, float h)
{
	return (b * h) / 2.0;
}

float quadrado(float l)
{
	return l * l;
}

float retangulo(float a, float b)
{
	return a * b;
}

float losango(float D, float d)
{
	return (D * d) / 2.0;
}

float trapezio(float B, float b, float h)
{
	return ((B + b) / 2.0) * h;
}

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char op;
	float a, b, c;
	
	do
	{
		printf("Selecione a figura geom�trica que quer calcular a �rea:\n");
		printf("Tri�ngulo\t(1)\n");
		printf("Quadrado\t(2)\n");
		printf("Ret�ngulo\t(3)\n");
		printf("Losango\t\t(4)\n");
		printf("Trap�zio\t(5)\n");
		printf("\nSair\t\t(0)\n");
		
		op = getch();
		system("cls");
		
		switch (op)
		{
			case '1':
				printf("*�rea do tri�ngulo*\n");
				printf("base: "); scanf("%f", &a);
				printf("altura: "); scanf("%f", &b);
				printf("�rea do tri�ngulo = %.2f\n", triangulo(a, b));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '2':
				printf("*�rea do quadrado*\n");
				printf("lado: "); scanf("%f", &a);
				printf("�rea do quadrado = %.2f\n", quadrado(a));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '3':
				printf("*�rea do ret�ngulo*\n");
				printf("base: "); scanf("%f", &a);
				printf("altura: "); scanf("%f", &b);
				printf("�rea do ret�ngulo = %.2f\n", retangulo(a, b));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '4':
				printf("*�rea do losango*\n");
				printf("diagonal maior: "); scanf("%f", &a);
				printf("diagonal menor: "); scanf("%f", &b);
				printf("�rea do losango = %.2f\n", losango(a, b));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '5':
				printf("*�rea do trap�zio*\n");
				printf("base maior: "); scanf("%f", &a);
				printf("base menor: "); scanf("%f", &b);
				printf("altura: "); scanf("%f", &c);
				printf("�rea do trap�zio = %.2f\n", trapezio(a, b, c));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '0':
				printf("Adeus");
				break;
			default:
				printf("Input inv�lido.\n");
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
		}
		
	} while (op != '0');
}













































































