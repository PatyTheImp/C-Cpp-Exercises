#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void titulo()
{
	for (int i = 1; i <= 30; i++)
		printf("*");
	puts("");
	
	for (int i = 1; i <= 9; i++)
		printf("*");
	printf("   String   ");
	for (int i = 1; i <= 9; i++)
		printf("*");
	puts("");
	
	for (int i = 1; i <= 9; i++)
		printf("*");
	printf("   Ajuda    ");
	for (int i = 1; i <= 9; i++)
		printf("*");
	puts("");
	
	for (int i = 1; i <= 30; i++)
		printf("*");
	puts("\n");
}

void menu()
{
	puts("*** Escolha uma opção: *******\n");
	puts("1 - Copiar");
	puts("2 - Concatenar");
	puts("3 - Comparar");
	puts("4 - Comprimento");
	puts("\n0 - Sair");
	printf("\n-> ");
}

char sair()
{
	char tecla;
	
	puts("\nPara sair prima '0', para voltar ao menu inicial prima qualquer outra tecla.");
	tecla = getch();
	return tecla;
	
}

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char op;
	char string1[100] = "Gato", string2[100];
	
	while (op != '0')
	{
		system("cls");
		titulo();
		menu();
		op = getch();
		
		system("cls");
		titulo();
		
		switch (op)
		{
			case '1':				
				puts("Copiar:");
				puts("Permite realizar a cópia de uma string para outra");
				puts("Sintaxe: strcpy(string1, string2)");
				printf("Exemplo:\nA string1 é igual a \"%s\"\n", string1);
				printf("Insira uma string para copiar para string1: "); gets(string2);
				printf("A string1 agora é igual a \"%s\"\n", strcpy(string1, string2));
				op = sair();
				break;
				
			case '2':
				printf("Concatenar:\n");
				printf("Adiciona uma string ao final de outra string\n");
				printf("Sintaxe: strcat(string1, string2)\n");
				printf("Exemplo:\nInsira uma string: "); gets(string1);
				printf("Insira outra string para concatenar com a primeira: "); gets(string2);
				printf("String final: \"%s\"\n", strcat(string1, string2));
				op = sair();
				break;
				
			case '3':				
				printf("Comparar:\n");
				printf("Compara duas strings. Retorna 0 se as duas strings forem iguais\n");
				printf("Sintaxe: strcmp(string1, string2)\n");
				printf("Exemplo:\nInsira uma string: "); gets(string1);
				printf("Insira outra string: "); gets(string2);
				if (strcmp(string1, string2))
					printf("As strings são diferentes\n");
				else
					printf("As strings são iguais\n");
				op = sair();
				break;
			
			case '4':
				printf("Comprimento\n");
				printf("Devolve quantos caracteres uma string tem, não incluindo o finalizador\n");	
				printf("Sintaxe: strlen(string)\n");
				printf("Exemplo:\nInsira uma string: "); gets(string1);
				printf("\"%s\" tem %d caracteres", string1, strlen(string1));
				op = sair();
				break;
					
			case '0':
				break;
				
			default:
				puts("Opção inválida.");
				op = sair();
		}
	}

	printf("Adeus");
}



































































