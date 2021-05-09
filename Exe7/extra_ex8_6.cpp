#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int num = 0, a[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	printf("Qual a tabuada que deseja calcular: ");
	scanf("%d", &num);
	
	for (int i = 0; i < 11; i++)
		printf("%2d * %d = %d\n", a[i], num, a[i] * num);
}

