/*
	Name: Exercício 5 alínea 12
	Copyright: 
	Author: Patrícia Costa
	Date: 17/09/20 09:21
	Description: 
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char op;
	
	printf("******** Ajuda em C ********\n");
	printf("***** Por: Paty Costa ******\n");
	printf("************************2020\n\n");
	printf("Escolha uma opção:\n\n");
	printf("\t1 - if\n");
	printf("\t2 - switch\n");
	printf("\t3 - break\n");
	printf("\t4 - goto\n\n");
	printf("\t0 - sair\n");
	printf(":"); op = getche();
	putchar('\n');
	
	system("cls");
	
	switch (op)
	{
		case '1': 
			printf("if\n\n");
			printf("Estrutura de decisão com sintaxe:\n");
			printf("if(condição)\n");
			printf("\tinstrução1;\n");
			printf("[else instrução2;] (facultativo)");
			break;
			
		case '2':
			printf("switch\n\n");
			printf("Indica para situações em que o número\n");
			printf("de possibilidades é elevado, em geral mais\n");
			printf("do que 2 if-else.\n\n");
			printf("switch(expressão)\n");
			printf("{\n");
			printf("\tcase constante1: instrução1;\n");
			printf("\tcase constante2: instrução2;\n");
			printf("\t...\n\n");
			printf("\tcase constante n: instrução n;\n");
			printf("\t[default: instruções;]\n");
			printf("}");
			break;
			
		case '3':
			printf("break\n\n");
			printf("Permite parar a execução dentro de um switch\n");
			printf("Basta escrever a instrução 'break;' no final de um case.");
			break;
			
		case '4':
			printf("goto\n\n");
			printf("Permite dar saltos para determinadas partes do programa.\n");
			printf("Deve ser utilizada apenas se for necessario.\n");
			printf("A sua utilização abusiva pode tornar um programa difícil de analisar\n\n");
			printf("labelname:\n");
			printf("\tstatement1;\n");
			printf("\tstatement2;\n");
			printf("goto labelname;");
			break;
			
		case '0': ; break;
		
		default: 
			system("COLOR 4F");
			printf("\n\nInstrução inválida.");
			Sleep(5000);
			system("COLOR 07");
	}
	
	sair:
		printf("\n\nDeseja visualizar outra ajuda? [s]im, [n]ão: "); op = getche();
		
		switch (op)
		{
			case 's':
			case 'S':
				system("cls");
				main();
				break;
			case 'n':
			case 'N': ; break;
			default: 
				printf("\n\nInstrução inválida.");
				goto sair;	
		}
}


























