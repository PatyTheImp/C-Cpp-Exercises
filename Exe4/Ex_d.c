/*
	Name: Teste prático alínea d
	Copyright: 
	Author: Patrícia Costa
	Date: 02/10/20 08:18
	Description: 
*/

#include <stdio.h>
#include <locale.h>

main()
{
		setlocale(LC_ALL, "portuguese");
		
		int n1, n2, n3, maior;
		
		printf("Introduza 3 números inteiros:\n");
		scanf("%d%d%d", &n1, &n2, &n3);
		
		if (n1 >= n2 && n1 >= n3) maior = n1;
		else if (n2 >= n3) maior = n2;
		else maior = n3;
		
		printf("O maior é %d", maior);
}
