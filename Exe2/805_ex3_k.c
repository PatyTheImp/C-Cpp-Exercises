/*
	Name: Ex 3 alínea k
	Copyright: 
	Author: Patrícia Costa
	Date: 07/09/20 08:42
	Description: 
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	double euro, real = 0, usd = 0, gbp = 0, jpy = 0, aoa = 0;

	
	printf("** Conversor de Euros **\n"); 
	printf("Insira o valor em euros que deseja converter: "); scanf("%lf", &euro);
	
	real = euro * 6.27486;
	usd = euro * 1.18375;
	gbp = euro * 0.89153;
	jpy = euro * 125.72;
	aoa = euro * 730.315;
	
	printf("Conversão de %.2lf euros, em outras moedas:\n");
	printf("Real = %.2lf\$\n", real);
	printf("USD = \$%.2lf\n", usd);
	printf("GBP = £%.2lf\n", gbp);
	printf("JPY = %.2lf yen\n", jpy);
	printf("AOA = %.2lf kwanza\n", aoa);
		
}
