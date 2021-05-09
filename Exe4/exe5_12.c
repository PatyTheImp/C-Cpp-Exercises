/*
	Name: Exerc�cio 5 al�nea 12
	Copyright: 
	Author: Patr�cia Costa
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
	printf("Escolha uma op��o:\n\n");
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
			printf("Estrutura de decis�o com sintaxe:\n");
			printf("if(condi��o)\n");
			printf("\tinstru��o1;\n");
			printf("[else instru��o2;] (facultativo)");
			break;
			
		case '2':
			printf("switch\n\n");
			printf("Indica para situa��es em que o n�mero\n");
			printf("de possibilidades � elevado, em geral mais\n");
			printf("do que 2 if-else.\n\n");
			printf("switch(express�o)\n");
			printf("{\n");
			printf("\tcase constante1: instru��o1;\n");
			printf("\tcase constante2: instru��o2;\n");
			printf("\t...\n\n");
			printf("\tcase constante n: instru��o n;\n");
			printf("\t[default: instru��es;]\n");
			printf("}");
			break;
			
		case '3':
			printf("break\n\n");
			printf("Permite parar a execu��o dentro de um switch\n");
			printf("Basta escrever a instru��o 'break;' no final de um case.");
			break;
			
		case '4':
			printf("goto\n\n");
			printf("Permite dar saltos para determinadas partes do programa.\n");
			printf("Deve ser utilizada apenas se for necessario.\n");
			printf("A sua utiliza��o abusiva pode tornar um programa dif�cil de analisar\n\n");
			printf("labelname:\n");
			printf("\tstatement1;\n");
			printf("\tstatement2;\n");
			printf("goto labelname;");
			break;
			
		case '0': ; break;
		
		default: 
			system("COLOR 4F");
			printf("\n\nInstru��o inv�lida.");
			Sleep(5000);
			system("COLOR 07");
	}
	
	sair:
		printf("\n\nDeseja visualizar outra ajuda? [s]im, [n]�o: "); op = getche();
		
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
				printf("\n\nInstru��o inv�lida.");
				goto sair;	
		}
}


























