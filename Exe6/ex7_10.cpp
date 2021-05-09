/*
	Name: Exerc�cio 7 al�nea 10
	Copyright: 
	Author: Patr�cia Costa
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
		printf("Per�metros:\n");
		printf("Tri�ngulo Equil�tero\t(1)\n");
		printf("Quadrado\t\t(2)\n");
		printf("Ret�ngulo\t\t(3)\n");
		printf("C�rculo\t\t\t(4)\n");
		printf("Pent�gono\t\t(5)\n");
		printf("Hex�gono\t\t(6)\n");
		printf("\nSair\t\t\t(0)\n");
		
		op = getch();
		system("cls");
		
		switch (op)
		{
			case '1':
				printf("*Per�metro do tri�ngulo equil�tero*\n");
				printf("lado: "); scanf("%f", &a);
				printf("Per�metro = %g\n", triangulo(a));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '2':
				printf("*Per�metro do quadrado*\n");
				printf("lado: "); scanf("%f", &a);
				printf("Per�metro = %g\n", quadrado(a));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '3':
				printf("*Per�metro do ret�ngulo*\n");
				printf("base: "); scanf("%f", &a);
				printf("altura: "); scanf("%f", &b);
				printf("Per�metro = %g\n", retangulo(a, b));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '4':
				printf("*Per�metro do c�rculo*\n");
				printf("raio: "); scanf("%f", &a);
				printf("Per�metro = %g\n", circulo(a));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '5':
				printf("*Per�metro do pent�gono*\n");
				printf("lado: "); scanf("%f", &a);
				printf("Per�metro = %g\n", pentagono(a));
				printf("Prima enter para voltar ao menu.");
				getch();
				system("cls");
				break;
			case '6':
				printf("*Per�metro do hex�gono*\n");
				printf("lado: "); scanf("%f", &a);
				printf("Per�metro = %g\n", hexagono(a));
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
