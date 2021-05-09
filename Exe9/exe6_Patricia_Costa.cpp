/*
	Name: Exe9b alínea 6
	Copyright: 
	Author: Patrícia Costa
	Date: 04/01/21 14:48
	Description: Ponteiros
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float x = 0, y = 0, result = 0;
	float *x_ptr = NULL, *y_ptr = NULL, *result_ptr = NULL;
	char sair = 's', op = ' ', mem_loc = ' ';
	
	do
	{
		system("cls");
		
		printf(".: Calculadora com Pointers :.\n\n");
		printf("Insira um número (x): ");
		scanf("%f", &x);
		x_ptr = &x;
		printf("Insira um outro (y): ");
		scanf("%f", &y);
		y_ptr = &y;
		result_ptr = &result;
		
		printf("Insira o operador do cálculo a realizar (+, -, /, *): ");
		op = getche();
		puts("\n");
		
		switch (op)
		{
			case '+': 
				*result_ptr = *x_ptr + *y_ptr;
				printf("O valor da soma de x por y é %g", result);
				break;
			case '-': 
				*result_ptr = *x_ptr - *y_ptr;
				printf("O valor da subtração de x por y é %g", result);
				break;
			case '/': 
				*result_ptr = *x_ptr / *y_ptr;
				printf("O valor da divisão de x por y é %g", result);
				break;
			case '*': 
				*result_ptr = *x_ptr * *y_ptr;
				printf("O valor da multiplicação de x por y é %g", result);
				break;
			default:
				printf("Operação inválida.");
		}
		
		printf("\n\nDeseja ver a posição de x, y e do resultado na memória? [s]im, [n]ão ");
		mem_loc = getche();
		
		if (mem_loc == 's')
			printf("\n\nA posição de x, y e do resultado: %p, %p, %p", x_ptr, y_ptr, result_ptr);
			
		printf("\n\nDeseja repetir [s]im, [n]ão? ");
		sair = getche();
	}
	while (sair == 's');
}

































