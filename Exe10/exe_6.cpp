#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	struct Data
	{
		int dia;
		int mes;
		int ano;
	};
	
	Data hoje = {7, 12, 2020};
	
	printf("Hoje é dia %d / %d / %d", hoje.dia, hoje.mes, hoje.ano);
}

