#include <stdio.h>
#include <locale.h>

main()
{
		setlocale(LC_ALL, "portuguese");
		
		float num, i = 0, sum = 0;
		
		printf("Introduza uma série de números e termine com o '-1'\n");
		
		do
		{
			scanf("%f", &num);
			sum += num;
			i++;
		}
		while (num != -1);
		
		i == 1 ? printf("Média indefinida. Introduza mais números antes de inserir o '-1'.") : printf("A média é %.2f", (sum + 1)/ (i - 1));
}
