/*
	Name: Jogo do Galo
	Copyright: 
	Author: Patrícia Costa
	Date: 30/11/20 14:51
	Description: 
*/

#include <stdio.h>
#include <locale.h> 
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include <windows.h>
#include <ctype.h>

const int dim = 3; //Dimenção da matriz do jogo
char jogo[dim][dim], op = ' ';
int linha = 0, coluna = 0, jogador_atual = 0, jog1_wins = 0, jog2_wins = 0, empates = 0;

//Inicia a matriz do jogo com caracteres espaço
void iniciar_matriz()
{
	for (int i = 0; i < dim; i++) //LINHAS
	{
		for (int j = 0; j < dim; j++) //COLUNAS
			jogo[i][j] = ' ';
	}
}

//Título "Jogo do Galo" em ASCII art
void ascii_art()
{
	printf("\033[0;35m"); //Muda a cor do texto para violeta
	puts("       __                         __         ______      __    ");
	puts("      / /___  ____ _____     ____/ /___     / ____/___ _/ /___ ");
	puts(" __  / / __ \\/ __ `/ __ \\   / __  / __ \\   / / __/ __ `/ / __ \\");
	puts("/ /_/ / /_/ / /_/ / /_/ /  / /_/ / /_/ /  / /_/ / /_/ / / /_/ /");
	puts("\\____/\\____/\\__, /\\____/   \\__,_/\\____/   \\____/\\__,_/_/\\____/ ");
	puts("           /____/                                              ");
	puts("");
	printf("\033[0m"); //Faz reset da cor
}

//Menu de boas vindas
void menu()
{
	//Os tabs são para centrar o menu
	puts("\t\t+=Menu===========================+");
	puts("\t\t|                                |");
	puts("\t\t| BEM VINDA/O AO JOGO DO GALO!!! |");
	puts("\t\t| Escolha a opção que deseja:    |");
	puts("\t\t|                                |");
	puts("\t\t| Jogar......................(1) |");
	puts("\t\t| Jogos ganhos...............(2) |");
	puts("\t\t| Regras.....................(3) |");
	puts("\t\t| Sair.......................(0) |");
	puts("\t\t|                                |");
	puts("\t\t+=============Por Patrícia Costa=+");
}

//Mostra o tabuleiro do jogo
void tabuleiro()
{
	printf("\t\t\t   1   2   3\n"); //Número das colunas
	
	for (int i = 0; i < dim; i++) //LINHAS
	{
		printf("\t\t\t%d  ", i + 1); //Para aparecer o número da linha
		
		for (int j = 0; j < dim; j++) //COLUNAS
		{
			printf("%c ", jogo[i][j]);
			if (j < dim - 1) //Para imprimir o separador lateral
				printf("| ");
		}
		puts("");
		
		if (i < dim - 1) //Para imprimir o separador inferior
		{
			printf("\t\t\t  ");
			for (int l = 1; l <= 11; l++)
				printf("-");
			puts("");
		}
	}
}

//Executa cada jogada. Têm de se indicar o jogador e o simbolo correspondente
void jogada(int jogador, char simbolo)
{
	while (true)
		{
			system("cls");
			ascii_art();
			tabuleiro();
			
			printf("\nÉ a vez do jogador %d:\n", jogador);
			printf("Indique a posição que quer jogar ('linha' 'espaço' 'coluna' 'enter'): ");
			scanf("%d%d", &linha, &coluna);
			fflush(stdin); //Limpa o buffer caso o utilizador tenha introduzido coisas a mais
			
			//Se o jogador escolher uma posição fora da grelha
			if (linha  - 1 < 0 || linha - 1 >= dim || coluna - 1 < 0 || coluna - 1 >= dim) //-1 porque as posições na grelha estão de 1 a 3 e não de 0 a 2
			{
				printf("\a"); //Som 
				printf("\033[0;31m"); //Muda a cor da letra para vermelho
				printf("Essa posição não existe!\n");
				printf("\033[0m"); //Faz reset da cor 
				sleep(2); //Espera por 2 segundos
			}
			//Se o jogador escolher uma posição já ocupada
			else if (jogo[linha - 1][coluna - 1] != ' ')
			{
				printf("\a"); 
				printf("\033[0;31m"); 
				printf("Essa posição já está ocupada!\n");
				printf("\033[0m"); 
				sleep(2);
			}
			else
			{
				jogo[linha - 1][coluna - 1] = simbolo; //Atribui o caracter correspondente ao jogador á posição escolhida 
				//Reset nas variáveis para evitar alguns erros
				linha = 0;
				coluna = 0;	
				break;
			}		
		}
}

//Verifica se o jogo acabou
int game_over(char v[dim][dim])
{
	int i = 0, j = 0;
	
	//Verifica as linhas
	for (i = 0; i < dim; i++)
	{
		//Compara os elementos de um linha e se forem diferentes sai do ciclo
		for (j = 1; j < dim; j++)
		{
			if (v[i][j - 1] != v[i][j])
				break;
		}
		//Se j for igual a dimenção da matriz é porque os elementos da linha são iguais. 
		//Neste caso se não forem caracteres espaço então o jogo acabou
		if (j == dim && v[i][j - 1] != ' ')
			return 1;
	}
	
	//Verifica as colunas (mesma lógica das linhas)
	for (i = 0; i < dim; i++)
	{
		for (j = 1; j < dim; j++)
		{
			if (v[j - 1][i] != v[j][i])
				break;
		}
		if (j == dim && v[j - 1][i] != ' ')
			return 1;
	}
	
	//Verifica a diagonal que tem os valores das linhas e colunas iguais
	for (i = 1, j = 1; i < dim; i++, j++)
	{
		if (v[i - 1][j - 1] != v[i][j])
			break;
	}
	if (j == dim && v[j - 1][i - 1] != ' ')
		return 1;
		
	//Verifica a outra diagonal
	for (i = 1, j = dim - 1; i < dim; i ++, j--)
	{
		if (v[i - 1][j] != v[i][j - 1])
			break;
	}
	if (i == dim && v[i - 1][j] != ' ')
		return 1;
		
	//Verificar empate
	//Verifica se todas as posições estão ocupadas
	for (i = 0; i < dim; i++) 
	{
		for (j = 0; j < dim; j++) 
		{
			if (jogo[i][j] == ' ')
				return 0;
		}	
	}
	//Retorna 2 em caso de empate
	return 2;
}

//Mostra o ecrã de vitória
void vitoria(int vencedor)
{
	//Acrescenta a vitória ao vencedor corresponde
	vencedor == 1 ? jog1_wins++ : jog2_wins++;

	for (int i = 0; i < 2; i++)
	{	
		system("cls");
		system("COLOR 1B"); //Muda a cor de fundo da consola e a cor de letra
		
		puts("                                        __                                     ");
		puts("                                       /  |                                    ");
		puts("  ______    ______    ______   ______  $$ |____    ______   _______    _______ ");
		puts(" /      \\  /      \\  /      \\ /      \\ $$      \\  /      \\ /       \\  /       |");
		puts("/$$$$$$  | $$$$$$  |/$$$$$$  |$$$$$$  |$$$$$$$  |/$$$$$$  |$$$$$$$  |/$$$$$$$/ ");
		puts("$$ |  $$ | /    $$ |$$ |  $$/ /    $$ |$$ |  $$ |$$    $$ |$$ |  $$ |$$      \\ ");
		puts("$$ |__$$ |/$$$$$$$ |$$ |     /$$$$$$$ |$$ |__$$ |$$$$$$$$/ $$ |  $$ | $$$$$$  |");
		puts("$$    $$/ $$    $$ |$$ |     $$    $$ |$$    $$/ $$       |$$ |  $$ |/     $$/ ");
		puts("$$$$$$$/   $$$$$$$/ $$/       $$$$$$$/ $$$$$$$/   $$$$$$$/ $$/   $$/ $$$$$$$/  ");
		puts("$$ |                                                                           ");
		puts("$$ |                                                                           ");
		puts("$$/                                                                            ");
		printf("\t\t\t\tJOGADOR %d!!!\n", vencedor);
		
		sleep(1);
		system("cls");
		system("COLOR 5E");
		
		puts("                                        __                                     ");
		puts("                                       |  \\                                    ");
		puts("  ______    ______    ______   ______  | $$____    ______   _______    _______ ");
		puts(" /      \\  |      \\  /      \\ |      \\ | $$    \\  /      \\ |       \\  /       \\");
		puts("|  $$$$$$\\  \\$$$$$$\\|  $$$$$$\\ \\$$$$$$\\| $$$$$$$\\|  $$$$$$\\| $$$$$$$\\|  $$$$$$$");
		puts("| $$  | $$ /      $$| $$   \\$$/      $$| $$  | $$| $$    $$| $$  | $$ \\$$    \\ ");
		puts("| $$__/ $$|  $$$$$$$| $$     |  $$$$$$$| $$__/ $$| $$$$$$$$| $$  | $$ _\\$$$$$$\\");
		puts("| $$    $$ \\$$    $$| $$      \\$$    $$| $$    $$ \\$$     \\| $$  | $$|       $$");
		puts("| $$$$$$$   \\$$$$$$$ \\$$       \\$$$$$$$ \\$$$$$$$   \\$$$$$$$ \\$$   \\$$ \\$$$$$$$ ");
		puts("| $$                                                                           ");
		puts("| $$                                                                           ");
		puts(" \\$$                                                                           ");
		printf("\t\t\t\tJOGADOR %d!!!\n", vencedor);
		sleep(1);
	}
}

//Mostra a quantidade de jogos ganhos de cada jogador e empates
char jogos_ganhos()
{
	system("cls");
	ascii_art();
	
	printf("\t\tJogos ganhos pelo jogador 1: %d\n", jog1_wins);
	printf("\t\tJogos ganhos pelo jogador 2: %d\n", jog2_wins);
	printf("\t\tNúmero de empates: %d\n\n", empates);
	
	printf("Prima '0' para sair ou outra tecla qualquer para voltar ao menu: ");
	
	return getch();
}

//Mostra as regras do jogo
char regras()
{
	system("cls");
	ascii_art();
	
	printf("REGRAS:\n");
	printf("Dois jogadores jogam por turnos, em um tabuleiro 3x3. \nCada jogador joga com um simbolo  correspondente.\n");
	printf("O jogador 1 joga com o 'O' e o jogador 2 joga com o 'X'.\n");
	printf("O primeiro a completar um linha, coluna ou diagonal, ganha. \nSe o tabuleiro for completo antes disso acontecer, é empate.\n\n");
	
	printf("Prima '0' para sair ou outra tecla qualquer para voltar ao menu: ");
	
	return getch();
}

//Ecrã de saida
void saida()
{
	system("cls");
	
	printf("\033[0;32m"); //Verde
	puts(" ____  ___  _   _    __    __  __ ");
	puts("(_  _)/ __)( )_( )  /__\\  (  )(  )");
	puts("  )( ( (__  ) _ (  /(__)\\  )(__)( ");
	puts(" (__) \\___)(_) (_)(__)(__)(______)");
	printf("\033[0m");
	
	sleep(2);
}

main()
{
	setlocale(LC_ALL, "portuguese");
	
	do
	{
		system("cls");
		ascii_art();
		menu();
		op = getch();
		
		switch (op)
		{
			//Opção jogar
			case '1':
				do
				{
					iniciar_matriz();
					while (true)
					{
						jogada(1, 'O');
						jogador_atual = 1; 
						if (game_over(jogo))
							break;
						
						jogada(2, 'X');
						jogador_atual = 2;
						if (game_over(jogo))
							break;
					}
					
					system("cls");
					ascii_art();
					tabuleiro();
					
					//Musiquinha para sinalizar o fim do jogo
				    for (int i = 0; i < 2; i++) {
				        Beep(523, 500); //Primeiro argumento é a frequência do som e o segundo é a duração em milisegundos
				    }
				    Beep(523, 800);
				    sleep(2);
				    
				    if (game_over(jogo) != 2)
						vitoria(jogador_atual);
					else
					{
						printf("\nEMPATE :(\n\n");
						empates++;
					}	
						
					printf("Pressione '1' para voltar ao menu, '0' para sair, ou uma outra tecla qualquer para voltar a jogar: ");
					printf("\033[0m");
					op = getch();
				}
				while (op != '1' && op != '0');
				break;
			
			//Opção jogos ganhos	
			case '2':
				op = jogos_ganhos();
				break;
			
			//Opção regras	
			case '3':
				op = regras();
				break;
			
			//Opção sair
			case '0':
				break;
				
			//Opção inválida
			default:
				printf("\a"); //Som 
		}		
	}
	while (op != '0');
	
	saida();
}

	










































