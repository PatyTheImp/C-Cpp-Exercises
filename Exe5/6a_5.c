#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int i, num;
	
	printf("Introduza um inteiro para mostrar a sua tabuada: "); scanf("%d", &num);
	
	for (i = 1; i <= 10; i++)
	 printf("%2d x %2d = %2d\n", i, num, i * num);
}

