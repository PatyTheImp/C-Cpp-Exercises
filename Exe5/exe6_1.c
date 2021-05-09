#include <stdio.h>
#include <locale.h>

main()
{
		setlocale(LC_ALL, "portuguese");
		
		float temp = 0;
		
		printf("Celcius\tFahrenheit\n");
		
		while (temp <= 40)
		{
			printf("%6.2f\t%.2f\n", temp, temp * 1.8 + 32);
			temp += 2;
		}
}
