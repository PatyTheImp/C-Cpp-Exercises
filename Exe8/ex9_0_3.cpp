#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char vogais[6] = "aeiou";
	int pos = 0;
	
	printf("Sabendo que o o array \"vogais\" tem inicializado as letras 'a', 'e', 'i', 'o', 'u'\n\n");
	printf("Indique qual a posição de letra que deseja visualizar (sem contar com o 0): "); 
	scanf("%d", &pos);
	
	if (pos < 1 || pos > 5)
		printf("Posição inválida");
	else
		printf("A letra que pretende visualizar é: %c", vogais[pos - 1]);
}

