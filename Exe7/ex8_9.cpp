#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char primeiro_nome[100], ultimo_nome[100];
	int nr_letras_1, nr_letras_ult;
	
	printf("Quantas letras tem o seu primeiro nome? ");
	scanf("%d", &nr_letras_1);
	printf("Quantas letras tem o seu último nome? ");
	scanf("%d", &nr_letras_ult);
	puts("");
	
	for (int i = 1; i <= nr_letras_1; i++)
	{
		printf("Insira a %dª letra do seu primeiro nome: ", i);
		scanf(" %c", &primeiro_nome[i - 1]);
	}
	puts("");
	for (int i = 1; i <= nr_letras_ult; i++)
	{
		printf("Insira a %dª letra do seu último nome: ", i);
		scanf(" %c", &ultimo_nome[i - 1]);
	}
	
	printf("\nSeu nome legível:\n");
	for (int i = 1; i <= nr_letras_1; i++)
		printf("%c", primeiro_nome[i - 1]);
	printf(" ");
	for (int i = 1; i <= nr_letras_ult; i++)
		printf("%c", ultimo_nome[i - 1]);
		
	printf("\nSeu nome em ordem inversa:\n");
	for (int i = nr_letras_ult; i >= 1 ; i--)
		printf("%c", ultimo_nome[i - 1]);
	printf(" ");
	for (int i = nr_letras_1; i >= 1; i--)
		printf("%c", primeiro_nome[i - 1]);
}

