#include <stdio.h>
#include <locale.h>

main()
{
		setlocale(LC_ALL, "portuguese");
		
		float num, max, min, i;
		num = max = min = i = 0;
		
		printf("Introduza uma s�rie de n�meros e termine com o '-1'\n");
		
		do
		{
			scanf("%f", &num);
			while (i == 0)
			{
				max = num;
				min = num;
				i++;
			}
			
			if (num >= max && num != -1) max = num;
			if (num <= min && num != -1) min = num;
			
		}
		while (num != -1);
		
		if (max != -1)
			printf("M�ximo: %.2f\nM�nimo: %.2f", max, min);
		else 
			printf("M�ximo e M�nimo indefinidos. Introduza mais n�meros antes de inserir o '-1'.");
}
