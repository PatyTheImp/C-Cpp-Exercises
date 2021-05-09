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
		printf("Selecione a figura geométrica que quer calcular a área:\n");
		printf("Triângulo\t(1)\n");
		printf("Quadrado\t(2)\n");
		printf("Retângulo\t(3)\n");
		printf("Losango\t\t(4)\n");
		printf("Trapézio\t(5)\n");
		printf("\nSair\t\t(0)\n");
		
		op = getch();
		system("cls");
		
		switch (op)
		{
			case '1':
				printf("*Área do triângulo*\n");
				printf("base: "); scanf("%f", &a);
				printf("altura: "); scanf("%f", &b);
				printf("Área do triângulo = %.2f\n", triangulo(a, b));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '2':
				printf("*Área do quadrado*\n");
				printf("lado: "); scanf("%f", &a);
				printf("Área do quadrado = %.2f\n", quadrado(a));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '3':
				printf("*Área do retângulo*\n");
				printf("base: "); scanf("%f", &a);
				printf("altura: "); scanf("%f", &b);
				printf("Área do retângulo = %.2f\n", retangulo(a, b));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '4':
				printf("*Área do losango*\n");
				printf("diagonal maior: "); scanf("%f", &a);
				printf("diagonal menor: "); scanf("%f", &b);
				printf("Área do losango = %.2f\n", losango(a, b));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '5':
				printf("*Área do trapézio*\n");
				printf("base maior: "); scanf("%f", &a);
				printf("base menor: "); scanf("%f", &b);
				printf("altura: "); scanf("%f", &c);
				printf("Área do trapézio = %.2f\n", trapezio(a, b, c));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '0':
				printf("Adeus");
				break;
			default:
				printf("Input inválido.\n");
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
		}
		
	} while (op != '0');
}













































































