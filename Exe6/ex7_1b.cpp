#include <stdio.h>

void Topo()
{
	for (int i = 1; i <= 10; i++)
		printf("*");
		
	puts("");
}

void Meio()
{
	for (int i = 1; i <= 10; i++)
		printf("*        *\n");
}

void Base()
{
	for (int i = 1; i<= 10; i++)
		printf("*");
}

main()
{
	Topo();
	Meio();
	Base();
}

