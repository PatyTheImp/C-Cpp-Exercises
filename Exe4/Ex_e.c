/*
	Name: Teste pr�tico al�nea e
	Copyright: 
	Author: Patr�cia Costa
	Date: 02/10/20 08:18
	Description: 
*/

#include <stdio.h>
#include <locale.h>
#include <conio.h>

main()
{
		setlocale(LC_ALL, "portuguese");
		
		int num;
		char op;
		
		printf("Insira um n�mero inteiro: "); scanf("%d", &num);
		printf("\nDeseja calcular o seu dobro [1] ou quadrado [2] ? "); op = getche();
		puts("\n");
		
		switch (op)
		{
			case '1': printf("O dobro de %d � %d", num, num * 2); break;
			case '2': printf("O quadrado de %d � %d", num, num * num); break;
			default: printf("Op��o inv�lida.");
		}
		
}
