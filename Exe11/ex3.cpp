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
		printf("Este ficheiro já existe!\n");
	fclose(fp);
	
	printf("Quer um novo ficheiro [w], ou acrescentar [a]?");
	gets(tipo);	
	
	fp = fopen("media.txt", tipo);
	
	printf("Nota de português: ");
	scanf("%f", &pt);
	
	printf("Nota de inglês: ");
	scanf("%f", &en);
	
	printf("Nota de informática: ");
	scanf("%f", &inf);
	
	fprintf(fp, "Nota de português: %.2f\n", pt);
	fprintf(fp, "Nota de inglês: %.2f\n", en);
	fprintf(fp, "Nota de informática: %.2f\n", inf);
	fprintf(fp, "Média = %.2f", (pt + en + inf) / 3);
	
	fclose(fp);
}

