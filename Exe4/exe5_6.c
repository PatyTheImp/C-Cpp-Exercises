/*
	Name: Exercício 5 alínea 6
	Copyright: 
	Author: Patrícia Costa
	Date: 17/09/20 09:21
	Description: 
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char op;
	float num1, num2;
	
	printf("Insira uma expressão matemática\n(ex: 5+5 | 'digito' 'operador' 'digito'): ");
	scanf("%f%c%f", &num1, &op, &num2);
	
	switch (op)
	{
		case '+': printf("\n%.2f", num1 + num2); break;
		case '-': printf("\n%.2f", num1 - num2); break;
		case '*': printf("\n%.2f", num1 * num2); break;
		case '/': num2 == 0 ? printf("\nImpossível.") : printf("\n%.2f", num1 / num2); break;
		default: printf("\nOperação inválida.");
	}
}
