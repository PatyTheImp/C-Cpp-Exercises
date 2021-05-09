/*
	Name: Exercício 7 alínea 10
	Copyright: 
	Author: Patrícia Costa
	Date: 30/10/20 09:20
	Description: 
*/


#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

float triangulo(float l)
{
	return 3 * l;
}

float quadrado(float l)
{
	return 4 * l;
}

float retangulo(float a, float h)
{
	return 2 * (a + h);
}

float circulo(float r)
{
	return 2 * M_PI * r;
}

float pentagono(float l)
{
	return 5 * l;
}

float hexagono(float l)
{
	return 6 * l;
}

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char op;
	float a, b;
	
	do
	{
		printf("Perímetros:\n");
		printf("Triângulo Equilátero\t(1)\n");
		printf("Quadrado\t\t(2)\n");
		printf("Retângulo\t\t(3)\n");
		printf("Círculo\t\t\t(4)\n");
		printf("Pentágono\t\t(5)\n");
		printf("Hexágono\t\t(6)\n");
		printf("\nSair\t\t\t(0)\n");
		
		op = getch();
		system("cls");
		
		switch (op)
		{
			case '1':
				printf("*Perímetro do triângulo equilátero*\n");
				printf("lado: "); scanf("%f", &a);
				printf("Perímetro = %g\n", triangulo(a));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '2':
				printf("*Perímetro do quadrado*\n");
				printf("lado: "); scanf("%f", &a);
				printf("Perímetro = %g\n", quadrado(a));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '3':
				printf("*Perímetro do retângulo*\n");
				printf("base: "); scanf("%f", &a);
				printf("altura: "); scanf("%f", &b);
				printf("Perímetro = %g\n", retangulo(a, b));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '4':
				printf("*Perímetro do círculo*\n");
				printf("raio: "); scanf("%f", &a);
				printf("Perímetro = %g\n", circulo(a));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '5':
				printf("*Perímetro do pentágono*\n");
				printf("lado: "); scanf("%f", &a);
				printf("Perímetro = %g\n", pentagono(a));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '6':
				printf("*Perímetro do hexágono*\n");
				printf("lado: "); scanf("%f", &a);
				printf("Perímetro = %g\n", hexagono(a));
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
