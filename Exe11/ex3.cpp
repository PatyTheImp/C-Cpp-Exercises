#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	FILE *fp;
	char tipo[2];
	float pt, en, inf;
	
	fp = fopen("media.txt", "r");
	if (fp != NULL)
		printf("Este ficheiro j� existe!\n");
	fclose(fp);
	
	printf("Quer um novo ficheiro [w], ou acrescentar [a]?");
	gets(tipo);	
	
	fp = fopen("media.txt", tipo);
	
	printf("Nota de portugu�s: ");
	scanf("%f", &pt);
	
	printf("Nota de ingl�s: ");
	scanf("%f", &en);
	
	printf("Nota de inform�tica: ");
	scanf("%f", &inf);
	
	fprintf(fp, "Nota de portugu�s: %.2f\n", pt);
	fprintf(fp, "Nota de ingl�s: %.2f\n", en);
	fprintf(fp, "Nota de inform�tica: %.2f\n", inf);
	fprintf(fp, "M�dia = %.2f", (pt + en + inf) / 3);
	
	fclose(fp);
}

