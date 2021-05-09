/*
	Name: Teste prático alínea f
	Copyright: 
	Author: Patrícia Costa
	Date: 02/10/20 08:18
	Description: 
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

main()
{
		setlocale(LC_ALL, "portuguese");
		
		int n1, n2;
		float res;
		char op;
		
		printf("Insira um número: "); scanf("%d", &n1);
		printf("Insira um outro número: "); scanf("%d", &n2);
		printf("Escolha a operação a realizar (+, -, *, /): "); op = getche();
		
		switch (op)
		{
			case '+': res = n1 + n2; break;
			case '-': res = n1 - n2; break;
			case '*': res = n1 * n2; break;
			case '/': res = (float)n1 / (float)n2; break;
			default: 
				printf("\n\nOpção inválida.");
				goto end;
		}
		
		printf("\n\nResultado: %d %c %d = %.2f", n1, op, n2, res);
		end:
			printf("\nFim");
}






























