/*
	Name: Exe9b al�nea 6
	Copyright: 
	Author: Patr�cia Costa
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
		printf("Insira um n�mero (x): ");
		scanf("%f", &x);
		x_ptr = &x;
		printf("Insira um outro (y): ");
		scanf("%f", &y);
		y_ptr = &y;
		result_ptr = &result;
		
		printf("Insira o operador do c�lculo a realizar (+, -, /, *): ");
		op = getche();
		puts("\n");
		
		switch (op)
		{
			case '+': 
				*result_ptr = *x_ptr + *y_ptr;
				printf("O valor da soma de x por y � %g", result);
				break;
			case '-': 
				*result_ptr = *x_ptr - *y_ptr;
				printf("O valor da subtra��o de x por y � %g", result);
				break;
			case '/': 
				*result_ptr = *x_ptr / *y_ptr;
				printf("O valor da divis�o de x por y � %g", result);
				break;
			case '*': 
				*result_ptr = *x_ptr * *y_ptr;
				printf("O valor da multiplica��o de x por y � %g", result);
				break;
			default:
				printf("Opera��o inv�lida.");
		}
		
		printf("\n\nDeseja ver a posi��o de x, y e do resultado na mem�ria? [s]im, [n]�o ");
		mem_loc = getche();
		
		if (mem_loc == 's')
			printf("\n\nA posi��o de x, y e do resultado: %p, %p, %p", x_ptr, y_ptr, result_ptr);
			
		printf("\n\nDeseja repetir [s]im, [n]�o? ");
		sair = getche();
	}
	while (sair == 's');
}

































