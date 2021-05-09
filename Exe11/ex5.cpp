#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	FILE *fp;
	int tab;
	char modo[2];
	char op;
	
	printf("Indique a tabuada (número entre 1 e 9): ");
	scanf("%d", &tab);
	
	if (tab < 1 || tab > 9)
		printf("Input inválido.");
	else
	{
		printf("\nTabuada dos %d\n\n", tab);
		for (int i = 1; i <= 10; i++)
			printf("%d * %2d = %2d\n", tab, i, tab * i);
			
		printf("\nDeseja guardar a tabuada em um novo ficheiro [w] ou acrescentar a um já existente [a]?");
		fflush(stdin);
		gets(modo);
		
		if (!strcmp(modo, "w"))
		{
			fp = fopen("c:\\c\\tabuada.txt", "r");
			if (fp != NULL)
				printf("\nO ficheiro já existe e será eliminado.\n");
			fclose(fp);
		}
		
		fp = fopen("c:\\c\\tabuada.txt", modo);
		
		fprintf(fp, "\nTabuada dos %d\n\n", tab);
		for (int i = 1; i <= 10; i++)
			fprintf(fp, "%d * %2d = %2d\n", tab, i, tab * i);
			
		fclose(fp);
			
		printf("\nPretende abrir o ficheiro? [s]im ou [n]ão: ");
		op = getch();
		if (op == 's')
			system("c:\\c\\tabuada.txt");
			
	}
}











































