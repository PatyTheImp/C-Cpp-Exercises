#include <stdio.h>
#include <locale.h>
#include <conio.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char nome[100];
	int nr_letras;
	
	printf("Insira o n�mero de letras do seu nome (incluindo o espa�o): ");
	scanf("%d", &nr_letras);
	
	printf("Insira o seu nome: ");
	for (int i = 0; i < nr_letras; i++)
		nome[i] = getche();
		
	printf("\nO seu nome leg�vel:\n");
	for (int i = 0; i < nr_letras; i++)
		printf("%c", nome[i]);
		
	printf("\nO seu nome em ordem invertida:\n");
	for (int i = nr_letras - 1; i >= 0; i--)
		printf("%c", nome[i]);	
}

