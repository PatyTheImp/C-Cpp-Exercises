/*
	Name: Exerc�cio 10 al�nea 4
	Copyright: 
	Author: Patr�cia Costa
	Date: 07/12/20 11:49
	Description: Estruturas
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	typedef struct Dados
	{
		int nr_jogador;
		int idade;
		int altura;
		int peso;
	};
	
	Dados jogador_1 = {1, 20, 180, 90};
	
	printf("N�mero de jogador: %d\nIdade: %d\nAltura: %d\nPeso: %d\n\n",
	jogador_1.nr_jogador, jogador_1.idade, jogador_1.altura, jogador_1.peso);
}

