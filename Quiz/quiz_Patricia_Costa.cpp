/*
	Name: Quiz
	Copyright: 
	Author: Patrícia Costa
	Date: 16/10/20 09:50
	Description: 
*/

#include <stdio.h>
#include <locale.h>
#include <unistd.h>
#include <conio.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int i, p = 1, x = 0, c = 0;
	char r, pont, op = ' ';
	
	while (op != 's' && op != 'S')
	{
		for (i = 1; i <= 45; i++)
			printf("*");
		printf("\n* Quiz v1.0 - Patrícia Costa | Menu Inicial *\n");	
		for (i = 1; i <= 41; i++)
			printf("*");
		printf("2020\n\n");
		
		printf("Começar o quiz na dificuldade inicial\t(i)\n");
		printf("Começar o quiz na dificuldade avançada\t(a)\n");
		printf("Intruções de utilização do quiz\t\t(u)\n");
		printf("Sair\t\t\t\t\t(s)");
		
		do
		{
			op = getch();
			puts("");
			
			switch (op)
			{
				case 'i':
				case 'I':
					x++;
					while (p <= 10)
					{
						system("cls");
						printf("Nível Inicial\n");
						for (i = 1; i <= 13; i++)
							printf("*");
						switch (p)
						{
							case 1:
								printf("\n1 - Os gatos não saboreiam o doce:");
								r = getch();
								if (r != 'v' && r != 'V' && r != 'f' && r != 'F')
									printf("\a");
								else if (r == 'v' || r == 'V')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 2:
								printf("\n2-As gatas tendem a ser canhotas, enquanto os gatos tendem a ser maioritariamente destros:");
								r = getch();
								if (r != 'v' && r != 'V' && r != 'f' && r != 'F')
									printf("\a");
								else if (r == 'f' || r == 'F')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 3:
								printf("\n3 - O cérebro de um gato é biologicamente mais similar ao de um humano do que o cérebro de um cão:");
								r = getch();
								if (r != 'v' && r != 'V' && r != 'f' && r != 'F')
									printf("\a");
								else if (r == 'v' || r == 'V')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 4:
								printf("\n4 - O gato doméstico mais antigo foi encontrado numa sepultura no Chipre com mais de 9000 anos:");
								r = getch();
								if (r != 'v' && r != 'V' && r != 'f' && r != 'F')
									printf("\a");
								else if (r == 'v' || r == 'V')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 5:
								printf("\n5  -Um gato salta 10 vezes a sua altura num único salto:");
								r = getch();
								if (r != 'v' && r != 'V' && r != 'f' && r != 'F')
									printf("\a");
								else if (r == 'f' || r == 'F')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 6:
								printf("\n6 - No antigo Egito, quando um gato morria, a família mostrava a sua tristeza rapando as sobrancelhas:");
								r = getch();
								if (r != 'v' && r != 'V' && r != 'f' && r != 'F')
									printf("\a");
								else if (r == 'v' || r == 'V')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 7:
								printf("\n7 - A raça mais popular de gatos é a Siamesa:");
								r = getch();
								if (r != 'v' && r != 'V' && r != 'f' && r != 'F')
									printf("\a");
								else if (r == 'f' || r == 'F')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 8:
								printf("\n8 - Um gato tem geralmente 6 bigodes em cada lado da face:");
								r = getch();
								if (r != 'v' && r != 'V' && r != 'f' && r != 'F')
									printf("\a");
								else if (r == 'f' || r == 'F')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 9:
								printf("\n9-O maxilar de um gato movimenta-se em ambos os sentidos, para que um gato possa mastigar pedaços maiores de comida:");
								r = getch();
								if (r != 'v' && r != 'V' && r != 'f' && r != 'F')
									printf("\a");
								else if (r == 'v' || r == 'V')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 10:
								printf("\n10-Um gato quase nunca mia para outro gato, apenas a humanos:");
								r = getch();
								if (r != 'v' && r != 'V' && r != 'f' && r != 'F')
									printf("\a");
								else if (r == 'v' || r == 'V')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
						}
					}
					printf("\nPretende ver a sua pontuação?(prima 's' se sim)\n");
					pont = getch();
					if (pont == 's' || pont == 'S')
						printf("Pontuação : %d/10\n", c);
					printf("Pretende jogar novamente? (prima 's' se sim)\n");
					pont = getch();
					if (pont != 's' && pont != 'S')
						op = 's';
					else
						system("cls");
					c = 0;	
					p = 1;
					break;	
				case 'a':
				case 'A':
					x++;
					while (p <= 10)
					{
						system("cls");
						printf("Nível Avançado\n");
						for (i = 1; i <= 14; i++)
							printf("*");
						switch (p)
						{
							case 1:
								printf("\n1 - Come se chama as bolas de pelo que os gatos vomitam?");
								printf("\n(a)eçagropilos\n(b)egagropilos\n(c)egagranpos\n(d)ergagopilas");
								r = getch();
								if (r != 'a' && r != 'A' && r != 'b' && r != 'B' && r != 'c' && r != 'C' && r != 'd' && r != 'D')
									printf("\a");
								else if (r == 'b' || r == 'B')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 2:
								printf("\n2 - Aproximadamente, quantos gatos domésticos existem no mundo?");
								printf("\n(a)100 milhões\n(b)800 milhões\n(c)500 milhões\n(d)300 milhões");
								r = getch();
								if (r != 'a' && r != 'A' && r != 'b' && r != 'B' && r != 'c' && r != 'C' && r != 'd' && r != 'D')
									printf("\a");
								else if (r == 'c' || r == 'C')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 3:
								printf("\n3 - Atualmente, qual o maior felino selvagem?");
								printf("\n(a)Tigre Siberiano\n(b)Lince Ibérico\n(c)Leão\n(d)Leopardo");
								r = getch();
								if (r != 'a' && r != 'A' && r != 'b' && r != 'B' && r != 'c' && r != 'C' && r != 'd' && r != 'D')
									printf("\a");
								else if (r == 'a' || r == 'A')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 4:
								printf("\n4 - Em que país os gatos pretos são sinal de boa sorte?");
								printf("\n(a)Brasil\n(b)Portugal\n(c)Austrália\n(d)EUA");
								r = getch();
								if (r != 'a' && r != 'A' && r != 'b' && r != 'B' && r != 'c' && r != 'C' && r != 'd' && r != 'D')
									printf("\a");
								else if (r == 'c' || r == 'C')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 5:
								printf("\n5 - Qual a raça mais pequena de gatos?");
								printf("\n(a)Persa\n(b)Siamesa\n(c)Maine Coon\n(d)Singapura");
								r = getch();
								if (r != 'a' && r != 'A' && r != 'b' && r != 'B' && r != 'c' && r != 'C' && r != 'd' && r != 'D')
									printf("\a");
								else if (r == 'd' || r == 'D')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 6:
								printf("\n6 - Qual a maior raça de gatos?");
								printf("\n(a)Persa\n(b)Siamesa\n(c)Maine Coon\n(d)Singapura");
								r = getch();
								if (r != 'a' && r != 'A' && r != 'b' && r != 'B' && r != 'c' && r != 'C' && r != 'd' && r != 'D')
									printf("\a");
								else if (r == 'c' || r == 'C')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 7:
								printf("\n7 - Quantas vértebras tem as costas de um gato?");
								printf("\n(a)53\n(b)34\n(c)69\n(d)81");
								r = getch();
								if (r != 'a' && r != 'A' && r != 'b' && r != 'B' && r != 'c' && r != 'C' && r != 'd' && r != 'D')
									printf("\a");
								else if (r == 'a' || r == 'A')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 8:
								printf("\n8 - Como se chama a paixão por gatos?");
								printf("\n(a)gatofilia\n(b)felinofilia\n(c)catfilia\n(d)ailurofilia");
								r = getch();
								if (r != 'a' && r != 'A' && r != 'b' && r != 'B' && r != 'c' && r != 'C' && r != 'd' && r != 'D')
									printf("\a");
								else if (r == 'd' || r == 'D')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 9:
								printf("\n9 - Quantos músculos controlam o ouvido externo de um gato?");
								printf("\n(a)23\n(b)32\n(c)45\n(d)16");
								r = getch();
								if (r != 'a' && r != 'A' && r != 'b' && r != 'B' && r != 'c' && r != 'C' && r != 'd' && r != 'D')
									printf("\a");
								else if (r == 'b' || r == 'B')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
							case 10:
								printf("\n10 - Quantos ossos tem um gato no seu corpo?");
								printf("\n(a)206\n(b)230\n(c)255\n(d)180");
								r = getch();
								if (r != 'a' && r != 'A' && r != 'b' && r != 'B' && r != 'c' && r != 'C' && r != 'd' && r != 'D')
									printf("\a");
								else if (r == 'b' || r == 'B')
								{
									p++;
									c++;
								}
								else
									p++;
								break;
						}
					}
					printf("\nPretende ver a sua pontuação?(prima 's' se sim)\n");
					pont = getch();
					if (pont == 's' || pont == 'S')
						printf("Pontuação : %d/10\n", c);
					printf("Pretende jogar novamente? (prima 's' se sim)\n");
					pont = getch();
					if (pont != 's' && pont != 'S')
						op = 's';
					else
						system("cls");
					c = 0;	
					p = 1;
					break;
				case 'u':
				case 'U':
					system("cls");
					printf("Instruções\n");
					for (i = 1; i <= 10; i++)
						printf("*");
					printf("\nNo nível inicial serão propostas 10 questões que devem ser respondidas com 'V'(para as verdadeiras)e 'F' (para as falsas).");
					printf("\nNo nível avançado serão propostas 10 questões de escolha múlpilha com 4 opções 'a', 'b', 'c' ou 'd'.\n");
					sleep(3);
					break;
				case 's':
				case 'S':
					break;
				default: 
					printf("\a");		
			}
		} while (op != 'i' && op != 'I' && op != 'a' && op != 'A' && op != 'u' && op != 'U' && op != 's' && op != 'S');
	}
	
	printf("\n\nObrigada por ter jogado \"%d\" vezes o meu quiz!", x);
	sleep(3);
}

































































