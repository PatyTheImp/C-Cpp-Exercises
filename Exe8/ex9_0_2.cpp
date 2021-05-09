#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char nome[11];
	int secs;
	
	printf("Insira um nome com até 10 letras: "); gets(nome);
	printf("Quantos segundos quer de intervalo entre letras? "); scanf("%d", &secs);
	printf("O nome soletrado fica: ");
	
	for (int i = 0; nome[i] != '\0'; i++)
	{
		sleep(secs);
		printf("%c", nome[i]);
	}
}

