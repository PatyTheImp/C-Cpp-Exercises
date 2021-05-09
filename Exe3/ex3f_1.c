/*
	Name: Exe 3f alínea 1
	Copyright: 
	Author: Patrícia Costa
	Date: 11/09/20 09:39
	Description: 
*/

#include <locale.h>
#include <stdio.h>
#define largura 20
#define comprimento (largura + 10)

main()
{
	setlocale(LC_ALL, "portuguese");
	
	printf("O resultado do comprimento [%d], com a largura [%d] é: %d", comprimento, largura, 30 * comprimento);
}
