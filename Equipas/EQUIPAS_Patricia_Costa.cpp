/*
	Name: Projeto EQUIPAS	
	Curso: PRI7 
	Author: Patrícia Costa
	Date: 16/01/21 21:04
	Description: Projeto final de Programação em C/C++ - avançada
*/

#include <stdio.h>
#include <locale.h>
#include <unistd.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

char recipiente[100][50];
char recipiente2[100][50];
char ficheiro_equipas[50] = "C:\\Equipas\\equipas.txt"; 

void menu();
void intro();
void adeus();
void equipas_existentes();
char sair();
void consultar_equipa(char *team);
void visualizar_equipa(char *file);
char *transforma_ficheiro(char *team);
int ficheiro_existe(char *team);
void criar_equipa(); 
void gerir_equipas();
void apagar_equipas();
int atualiza_recipiente(char *file, char recip[][50]);
void mudar_nome();
void subtituir_treinador();
void acrescentar_jogador();
void apagar_jogador();
void localizar_jogador();
int nome_invalido(char *nome);

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char op;
	char equipa[20];
	
	intro();
	
	do
	{
		menu();
		op = getch();
		system("cls");
		
		switch (op)
		{
			case '1':
				printf("Introduza a equipa que deseja consultar: ");
				gets(equipa);
				strcpy(equipa, transforma_ficheiro(equipa));
				if (ficheiro_existe(equipa))
					consultar_equipa(equipa);
				else
					printf("A equipa introduzida não existe!\n");
				op = sair();
				break;
			
			case '2':
				equipas_existentes();
				op = sair();
				break;
			
			case '3':
				criar_equipa();
				op = sair();
				break;
				
			case '4':
				gerir_equipas();
				break;
			
			case '5':
				localizar_jogador();
				op = sair();
				break;
				
			case '0':
				break;
			
			default:
				printf("\a");
		}
		
		system("cls");
	}
	while (op != '0');
	
	adeus();
}

//Mostra as equipas existentes na base de dados
void equipas_existentes()
{
	char ch;
	FILE *fp;
	
	fp = fopen(ficheiro_equipas, "r");
	
	printf("Equipas existentes:\n\n");
	
	while ((ch = fgetc(fp)) != EOF)
		printf("%c", ch);
		
	fclose(fp);
}

//Transforma o equipa em um ficheiro com caminho e extensão
char *transforma_ficheiro(char *team)
{
	char ficheiro[50] = "C:\\Equipas\\";
	strcat(ficheiro, team);
	strcat(ficheiro, ".txt");
	
	return ficheiro;
} 

//Verifica se o ficheiro existe
int ficheiro_existe(char *team) 
{	
	int existe;
	FILE *fp;
	
	fp = fopen(team, "r");
	existe = (fp != NULL); 
	fclose(fp);
	
	return existe;
}

//Pergunta se o utilizador deseja sair ou voltar ao menu
char sair()
{
	printf("\n\nPressione '0' para sair ou outra tecla qualquer para voltar ao menu.");	
	return getch();
}

//Mostra o conteúdo da equipa escolhida
void consultar_equipa(char *team)
{	
	char como_ver;

	do
	{
		system("cls");
		printf("Deseja ver a equipa na [c]onsola ou abrir o [f]icheiro?\n");
		como_ver = getch();
		if (como_ver != 'c' && como_ver != 'f' && como_ver != 'C' && como_ver != 'F')
			printf("\a");
	}
	while (como_ver != 'c' && como_ver != 'f' && como_ver != 'C' && como_ver != 'F');
	
	if (como_ver == 'c' || como_ver == 'C')
		visualizar_equipa(team); 
	else
		system(team); //Abre o ficheiro
}

//Visualiza equipas de modos diferentes
void visualizar_equipa(char *file)
{
	char texto[500];
	char como_ver;
	FILE *fp;
	
	fp = fopen(file, "r");
	
	do
	{
		system("cls");
		printf("Deseja ver a equipa [c]ompleta ou só os elementos de determinada [f]unção?\n");
		como_ver = getch();
		if (como_ver != 'c' && como_ver != 'f' && como_ver != 'C' && como_ver != 'F')
			printf("\a");
	}
	while (como_ver != 'c' && como_ver != 'f' && como_ver != 'C' && como_ver != 'F');
	
	//Mostra equipa completa na consola
	if (como_ver == 'c' || como_ver == 'C')
	{
		puts("-------------------------------------------------------");
		while (fgets(texto, 500, fp) != NULL) 
			printf("%s", texto);
		puts("\n-------------------------------------------------------");
	}
	else
	{
		do
		{
			system("cls");
			printf("Que função deseja visualizar?\n");
			printf("[G]uarda-Redes\n[D]efesas\n[M]édios\n[A]vançados\n[T]reinador\n\n");
			como_ver = getch();
			if (como_ver != 'g' && como_ver != 'd' && como_ver != 'm' && como_ver != 'a' && como_ver != 't' && como_ver != 'G' && como_ver != 'D' && como_ver != 'M' && como_ver != 'A' && como_ver != 'T')
				printf("\a");
		}
		while (como_ver != 'g' && como_ver != 'd' && como_ver != 'm' && como_ver != 'a' && como_ver != 't' && como_ver != 'G' && como_ver != 'D' && como_ver != 'M' && como_ver != 'A' && como_ver != 'T');
		
		//Mostra só os jogadores de determinada função na consola
		switch (como_ver)
		{
			case 'g':
			case 'G':
				puts("-------------------------------------------------------");
				while (strcmp(fgets(texto, 8, fp), "DEFESAS")) //O número 8 representa o tamanho da string "DEFESAS" mais o terminador
					printf("%s", texto);
				puts("\n-------------------------------------------------------");
				break;
				
			case 'd':
			case 'D':
				while (strcmp(fgets(texto, 8, fp), "DEFESAS")); //Põe o cursor no sítio pretendido  
				puts("-------------------------------------------------------");
				printf("DEFESAS");
				while (strcmp(fgets(texto, 7, fp), "MÉDIOS")) 
					printf("%s", texto);
				puts("\n-------------------------------------------------------");
				break;
				
			case 'm':
			case 'M':
				while (strcmp(fgets(texto, 7, fp), "MÉDIOS"));  
				puts("-------------------------------------------------------");
				printf("MÉDIOS");
				while (strcmp(fgets(texto, 10, fp), "AVANÇADOS")) 
					printf("%s", texto);
				puts("\n-------------------------------------------------------");
				break;
			
			case 'a':
			case 'A':
				while (strcmp(fgets(texto, 10, fp), "AVANÇADOS"));  
				puts("-------------------------------------------------------");
				printf("AVANÇADOS");
				while (strcmp(fgets(texto, 10, fp), "TREINADOR")) 
					printf("%s", texto);
				puts("\n-------------------------------------------------------");
				break;	
				
			default:
				while (strcmp(fgets(texto, 10, fp), "TREINADOR"));  
				puts("-------------------------------------------------------");
				printf("TREINADOR");
				while (fgets(texto, 500, fp) != NULL) 
					printf("%s", texto);
				puts("\n-------------------------------------------------------");
		}
	}
	
	fclose(fp);
}

//Acrecenta ou substitui equipas na base de dados
void criar_equipa()
{
	int nr_equipas = 0;
	char ficheiro[50], equipa[20], jogador[50];
	char como_ver;
	FILE *fp;
	
	printf("Quantas equipas deseja criar? ");
	scanf("%d", &nr_equipas);
	fflush(stdin);
	
	for (int i = 1; i <= nr_equipas; i++)
	{
		system("cls");
		printf("Introduza o nome da %dª equipa: ", i); 
		gets(equipa);
		//Caso o utilizador introduza um nome com espaços, substitui os espaços por '_' para evitar problemas na abertura do ficheiro
		for (int j = 0; equipa[j] != '\0'; j++)
		{
			if (equipa[j] == ' ')
				equipa[j] = '_';
		}
		
		//Impede que o utilizador insira uma equipa com o nome "equipas" e afete o registo de equipas
		if (!strcmp(equipa, "equipas"))
		{
			printf("\aNome inválido.");
			getch();
			i--; //Para continuar na mesma posição
			continue;
		}
		
		strcpy(ficheiro, transforma_ficheiro(equipa));
				
		//Verifica se a equipa já existe na base de dados, se existir dar a opção de mudar o nome ou substituir a equipa
		if (ficheiro_existe(ficheiro))
		{
			do
			{  
				system("cls");
				printf("Já existe uma equipa com esse nome, deseja [s]ubstituir ou [m]udar de nome?");
				como_ver = getch();
			
				if (como_ver != 's' && como_ver != 'S' && como_ver != 'm' && como_ver != 'M')
					printf("\a");
			}
			while (como_ver != 's' && como_ver != 'S' && como_ver != 'm' && como_ver != 'M');
			
			if (como_ver == 'm' || como_ver == 'M')
			{
				i--; //Para continuar na mesma posição
				continue;
			}
		}
		else
		{
			//Põe o nome da equipa toda em minúsculas (facilita encontrar a equipa em outros subprogramas) 
			for (int i = 0; equipa[i] != '\0'; i++)
				equipa[i] = tolower(equipa[i]); //Função da biblioteca ctype.h que põe um caractere em forma minúscula
			
			FILE *Equipas = fopen("C:\\Equipas\\Equipas.txt", "a");
			fprintf(Equipas, "%s\n", equipa);
			fclose(Equipas);	
		}		
		
		fp = fopen(ficheiro, "w");
		
		fprintf(fp, "GUARDA-REDES:\n\n");
		do
		{
			system("cls");
			fflush(stdin);
			printf("Introduza o guarda-redes: ");			
			gets(jogador);
			fprintf(fp, "%s\n", jogador);
			printf("Deseja acrescentar mais um guarda-redes?\n(pressione 's' se sim ou outra tecla qualquer se não)");
			como_ver = getch();
		}
		while (como_ver == 's' || como_ver == 'S');
		
		fprintf(fp, "\nDEFESAS:\n\n");
		for (int j = 4; j >= 1; j--)
		{
			system("cls");
			fflush(stdin);
			printf("Introduza um defesa (faltam %d): ", j);
			gets(jogador);
			fprintf(fp, "%s\n", jogador);
		}
		
		do
		{
			system("cls");
			fflush(stdin);
			printf("Deseja acrescentar mais um defesa?\n(pressione 's' se sim ou outra tecla qualquer se não)");
			como_ver = getch();
			if (como_ver == 's' || como_ver == 'S')
			{
				printf("\nIntroduza mais um defesa: ");
				gets(jogador);
				fprintf(fp, "%s\n", jogador);
			}
		}
		while (como_ver == 's' || como_ver == 'S');
		
		fprintf(fp, "\nMÉDIOS:\n\n");
		for (int j = 4; j >= 1; j--)
		{
			system("cls");
			fflush(stdin);
			printf("Introduza um médio (faltam %d): ", j);
			gets(jogador);
			fprintf(fp, "%s\n", jogador);
		}
		
		do
		{
			system("cls");
			fflush(stdin);
			printf("Deseja acrescentar mais um médio?\n(pressione 's' se sim ou outra tecla qualquer se não)");
			como_ver = getch();
			if (como_ver == 's' || como_ver == 'S')
			{
				printf("\nIntroduza mais um médio: ");
				gets(jogador);
				fprintf(fp, "%s\n", jogador);
			}
		}
		while (como_ver == 's' || como_ver == 'S');
		
		fprintf(fp, "\nAVANÇADOS:\n\n");
		for (int j = 2; j >= 1; j--)
		{
			system("cls");
			fflush(stdin);
			printf("Introduza um avançado (faltam %d): ", j);
			gets(jogador);
			fprintf(fp, "%s\n", jogador);
		}
		
		do
		{
			system("cls");
			fflush(stdin);
			printf("Deseja acrescentar mais um avançado?\n(pressione 's' se sim ou outra tecla qualquer se não)");
			como_ver = getch();
			if (como_ver == 's' || como_ver == 'S')
			{
				printf("\nIntroduza mais um avançado: ");
				gets(jogador);
				fprintf(fp, "%s\n", jogador);
			}
		}
		while (como_ver == 's' || como_ver == 'S');
		
		fprintf(fp, "\nTREINADOR:\n");
		system("cls");
		fflush(stdin);
		printf("Introduza o treinador: ");
		gets(jogador);
		fprintf(fp, "%s", jogador);
		
		fclose(fp); 
	}
}

void gerir_equipas() 
{
	char op;

	printf("[1] Apagar equipa\n");
	printf("[2] Mudar nome de equipa\n");
	printf("[3] Substituir treinador\n");
	printf("[4] Acrescentar jogador\n");
	printf("[5] Apagar jogador\n");
	printf("\nPara voltar ao Menu precione outra tecla qualquer.\n");
		
	op = getch();
	system("cls");
		
	switch (op)
	{
		case '1':
			apagar_equipas();
			break;

		case '2':
			mudar_nome();
			break;
			
		case '3':
			subtituir_treinador();
			break;
			
		case '4':
			acrescentar_jogador();
			break;
			
		case '5':
			apagar_jogador();
			break;
	}
	
}

//Apaga o ficheiro corresponde a equipa e atualiza o ficheiro que contem o nome das equipas existentes na base de dados
void apagar_equipas()
{
	char equipa[20], ficheiro[50];
	char op, ch;
	FILE *Equipas;
	int nr_linhas;
	
	printf("Introduza a equipa que quer apagar: ");
	gets(equipa);
	strcpy(ficheiro, transforma_ficheiro(equipa));
	
	if (!ficheiro_existe(ficheiro) || !strcmp(equipa, "equipas"))
	{
		printf("Equipa não existe na base de dados.");
		getch();
	}
	else
	{
		printf("Tem certeza que quer apagar a equipa \"%s\" da base de dados?", equipa);
		printf("\nPrima 's' se sim ou outra tecla qualquer se não.");
		op = getch();
		if (op == 's' || op == 'S')
		{
			remove(ficheiro); //Função da biblioteca stdio.h que apaga ficheiros
						
			//Coloca a string toda em minúsculas
			for (int i = 0; equipa[i] != '\0'; i++)
				equipa[i] = tolower(equipa[i]);
				
			nr_linhas = atualiza_recipiente(ficheiro_equipas, recipiente);
			
			//Recria o ficheiro e adciona a informação atualizada
			Equipas = fopen(ficheiro_equipas, "w");
			//Percorre o conteúdo do recipiente (menos uma linha visto que uma linha será eliminada)
			for (int i = 0; i < nr_linhas - 1; i++)
			{
				//Quando um dos elementos do recipiente é igual a equipa que queremos eliminar
				// os elementos apartir daí são substituidos pelo elemento seguinte
				if (!strcmp(recipiente[i], equipa))
				{
					for (int l = i; l < nr_linhas - 1; l++)
						strcpy(recipiente[l], recipiente[l + 1]);
				}
				fprintf(Equipas, "%s\n", recipiente[i]); 	
			}
			fclose(Equipas);
			
			printf("\nEquipa \"%s\" removida da base de dados.", equipa);
			getch();
		}
	}
}

//Muda o nome do ficheiro corresponde a equipa e atualiza o ficheiro que contem o nome das equipas existentes na base de dados
void mudar_nome()
{
	char equipa[20], ficheiro[50], novo_nome[20], ficheiro_novo[50];
	char ch;
	FILE *Equipas;
	int nr_linhas;
	
	printf("Introduza a equipa que quer mudar o nome: ");
	gets(equipa);
	strcpy(ficheiro, transforma_ficheiro(equipa));
	
	if (!ficheiro_existe(ficheiro) || !strcmp(equipa, "equipas"))
	{
		printf("Equipa não existe na base de dados.");
		getch();
	}
	else
	{
		printf("Introduza o novo nome: ");
		gets(novo_nome);
		//Caso o utilizador introduza um nome com espaços, substitui os espaços por '_' para evitar problemas na abertura do ficheiro
		for (int i = 0; novo_nome[i] != '\0'; i++)
		{
			if (novo_nome[i] == ' ')
				novo_nome[i] = '_';
		}
		strcpy(ficheiro_novo, transforma_ficheiro(novo_nome));
		
		rename(ficheiro, ficheiro_novo); //Função da biblioteca stdio.h que muda o nome de ficheiros
		
		//Coloca a string toda em minúsculas
		for (int i = 0; equipa[i] != '\0'; i++)
			equipa[i] = tolower(equipa[i]);
				
		nr_linhas = atualiza_recipiente(ficheiro_equipas, recipiente);
			
		//Recria o ficheiro e adciona a informação atualizada
		Equipas = fopen(ficheiro_equipas, "w");
		//Percorre o conteúdo do recipiente 
		for (int i = 0; i < nr_linhas; i++)
		{
			//Quando um dos elementos do recipiente é igual a equipa que queremos mudar de nome
			//o elemento é substituido pelo nome novo
			if (!strcmp(recipiente[i], equipa))
				strcpy(recipiente[i], novo_nome);
				
			fprintf(Equipas, "%s\n", recipiente[i]); 	
		}
		fclose(Equipas);
			
		printf("\nEquipa \"%s\" agora chama-se \"%s\".", equipa, novo_nome);
		getch();
	}
}

//Coloca o conteúdo de um ficheiro em um array bidimensional global e devolve o número de linhas que esse ficheiro tem
int atualiza_recipiente(char *file, char recip[][50])
{
	FILE *fp;
	int j = 0;
	char ch;
	
	fp = fopen(file, "r");
	for (int i = 0; (ch = fgetc(fp)) != EOF; i++) 
	{
		//Cada elemento do array contem o conteúdo de uma linha do ficheiro
		if (ch == '\n')
		{
			recip[j][i] = '\0';
			j++;
			i = -1;
			continue;
		}
		recip[j][i] = ch;
  	}
	fclose(fp);

	return j;
}

//Muda o nome do treinador de determinada equipa
void subtituir_treinador()
{
	char equipa[20], ficheiro[50], novo_treinador[20];
	char ch;
	FILE *fp;
	int n;
	
	printf("Qual equipa deseja substituir o treinador? ");
	gets(equipa);
	strcpy(ficheiro, transforma_ficheiro(equipa));
	
	if (!ficheiro_existe(ficheiro) || !strcmp(equipa, "equipas"))
	{
		printf("Equipa não existe na base de dados.");
		getch();
	}
	else
	{
		printf("Introduza o nome do novo treinador: ");
		gets(novo_treinador);
		
		if (nome_invalido(novo_treinador))
		{
			printf("\nNome inválido.");
			getch();
			return;
		}
		
		n = atualiza_recipiente(ficheiro, recipiente);
		
		fp = fopen(ficheiro, "w");
		for (int i = 0; i < n; i++)
			fprintf(fp, "%s\n", recipiente[i]); 
		fprintf(fp, "%s", novo_treinador); //Os treinadores encontram-se sempre na última linha, por isso, basta adcionar o novo treinador a última linha
		fclose(fp);
		
		printf("Treinador substituido!");
		getch();
	}
}

//Acrescenta um jogador a uma equipa existente
void acrescentar_jogador()
{
	char equipa[20], ficheiro[50], jogador[30];
	char ch, como_ver;
	FILE *fp;
	int n;
	
	printf("Qual equipa deseja adicionar um jogador? ");
	gets(equipa);
	strcpy(ficheiro, transforma_ficheiro(equipa));
	
	if (!ficheiro_existe(ficheiro) || !strcmp(equipa, "equipas"))
	{
		printf("Equipa não existe na base de dados.");
		getch();
	}
	else
	{
		n = atualiza_recipiente(ficheiro, recipiente) + 1; //+1 porque vamos acrescentar um jogador, logo, o ficheiro terá mais uma linha
		printf("Nome do jogador: ");
		gets(jogador);
		
		if (nome_invalido(jogador))
		{
			printf("\nNome inválido.");
			getch();
			return;
		}
		
		do
		{
			system("cls");
			printf("Que posição deseja colocar o jogador \"%s\"?\n", jogador);
			printf("[G]uarda-Redes\n[D]efesa\n[M]édio\n[A]vançado\n\n");
			como_ver = getch();
			if (como_ver != 'g' && como_ver != 'd' && como_ver != 'm' && como_ver != 'a' && como_ver != 'G' && como_ver != 'D' && como_ver != 'M' && como_ver != 'A')
				printf("\a");
		}
		while (como_ver != 'g' && como_ver != 'd' && como_ver != 'm' && como_ver != 'a' && como_ver != 'G' && como_ver != 'D' && como_ver != 'M' && como_ver != 'A');
		
		fp = fopen(ficheiro, "w");
		switch (como_ver)
		{
			case 'g':
			case 'G':
				for (int i = 0; i < n; i++)
				{
					if (!strcmp(recipiente[i], "GUARDA-REDES:"))
					{
						for (int l = n; l > (i + 2); l--) //Os nomes dos jogadores começam 2 linha depois do título, daí o (i+2)
							strcpy(recipiente[l], recipiente[l - 1]); //Move-se os elementos do array uma posição para dar lugar ao novo elemento
						strcpy(recipiente[i + 2], jogador);
					}
					fprintf(fp, "%s\n", recipiente[i]); 	
				}
				fprintf(fp, "%s", recipiente[n]); //Última linha não precisa do '\n'
				
				printf("%s é o novo guarda-redes da equipa %s!!!", jogador, equipa);
				getch();
				break;
				
			case 'd':
			case 'D':
				for (int i = 0; i < n; i++)
				{
					if (!strcmp(recipiente[i], "DEFESAS:"))
					{
						for (int l = n; l > (i + 2); l--)
							strcpy(recipiente[l], recipiente[l - 1]);
						strcpy(recipiente[i + 2], jogador);
					}
					fprintf(fp, "%s\n", recipiente[i]); 	
				}
				fprintf(fp, "%s", recipiente[n]);
				
				printf("%s é o novo defesa da equipa %s!!!", jogador, equipa);
				getch();
				break;
				
			case 'm':
			case 'M':
				for (int i = 0; i < n; i++)
				{
					if (!strcmp(recipiente[i], "MÉDIOS:"))
					{
						for (int l = n; l > (i + 2); l--)
							strcpy(recipiente[l], recipiente[l - 1]);
						strcpy(recipiente[i + 2], jogador);
					}
					fprintf(fp, "%s\n", recipiente[i]); 	
				}
				fprintf(fp, "%s", recipiente[n]);
				
				printf("%s é o novo médio da equipa %s!!!", jogador, equipa);
				getch();
				break;
				
			case 'a':
			case 'A':
				for (int i = 0; i < n; i++)
				{
					if (!strcmp(recipiente[i], "AVANÇADOS:"))
					{
						for (int l = n; l > (i + 2); l--)
							strcpy(recipiente[l], recipiente[l - 1]);
						strcpy(recipiente[i + 2], jogador);
					}
					fprintf(fp, "%s\n", recipiente[i]); 	
				}
				fprintf(fp, "%s", recipiente[n]);
				
				printf("%s é o novo avançado da equipa %s!!!", jogador, equipa);
				getch();
				break;
		}
		fclose(fp);
	}
}

//Apaga jogador de determinada equipa
void apagar_jogador()
{
	char equipa[20], ficheiro[50], jogador[30];
	char ch;
	FILE *fp;
	int n, j = 0, i;
	
	printf("Qual equipa deseja apagar um jogador? ");
	gets(equipa);
	strcpy(ficheiro, transforma_ficheiro(equipa));
	
	if (!ficheiro_existe(ficheiro) || !strcmp(equipa, "equipas"))
	{
		printf("Equipa não existe na base de dados.");
		getch();
	}
	else
	{
		n = atualiza_recipiente(ficheiro, recipiente);
		printf("Nome do jogador que deseja apagar da equipa %s: ", equipa);
		gets(jogador);
		
		//Impede que o utilizador apaque os títulos ou as linhas vazias
		if (nome_invalido(jogador))
		{
			printf("\nNome inválido.");
			getch();
		}
		else
		{
			//Verifica se o jogador está na equipa (para no treinador visto que o treinador não é um jogador)
			while (strcmp(recipiente[j], "TREINADOR:") && strcmp(recipiente[j], jogador))
				j++;
				
			if (j >= n - 1)
			{
				printf("\nJogador não encontrado.");
				getch();
			}
			else
			{
				fp = fopen(ficheiro, "w"); 
				for (i = 0; strcmp(recipiente[i], "TREINADOR:"); i++) 
				{
					if (!strcmp(recipiente[i], jogador)) 
					{
						for (int l = i; l < n; l++)
							strcpy(recipiente[l], recipiente[l + 1]);
					}
					fprintf(fp, "%s\n", recipiente[i]); 	
				}
				fprintf(fp, "TREINADOR:\n");
				fprintf(fp, "%s", recipiente[n]);
				fclose(fp);
				printf("\nJogador apagado.");
				getch();
			}
		}
	}
}

//Localiza jogador na base de dados e se for encontrado mostra a equipa que pertence
void localizar_jogador()
{
	char ficheiro[50], jogador[30]; 
	int n1, n2;
	FILE *fp;
	
	printf("Introduza o nome que quer encontrar: ");
	gets(jogador);
	
	if (nome_invalido(jogador))
	{
		printf("\nNome inválido.");
		return;
	}
	
	n1 = atualiza_recipiente(ficheiro_equipas, recipiente);
	
	//Percorre todos os ficheiros de equipa
	for (int i = 0; i < n1; i++)
	{
		strcpy(ficheiro, transforma_ficheiro(recipiente[i]));
		n2 = atualiza_recipiente(ficheiro, recipiente2); //Adciona o conteúdo da equipa em um novo recipiente
		
		//Percorre o conteúdo do novo recipiente até encontrar o nome pretendido
		for (int j = 0; j <= n2; j++) 
		{
			if (!strcmp(recipiente2[j], jogador))
			{
				printf("\n%s é membro da equipa %s.", jogador, recipiente[i]);
				return;
			}
		}
	}
	printf("\nO nome \"%s\" não foi encontrado na base de dados.", jogador);
}

int nome_invalido(char *nome)
{
	return (!strcmp(nome, "GUARDA-REDES:") || !strcmp(nome, "DEFESAS:") || !strcmp(nome, "MÉDIOS:") || !strcmp(nome, "AVANÇADOS:") || !strcmp(nome, "TREINADOR:") || !strcmp(nome, ""));
}

//Mostra uma pequena animação de introdução
void intro()
{
	printf("                     ___\n");
    printf(" o__        o__     |   |\\\n");
    printf("/|          /\\      |   |X\\\n");
    printf("/ > o        <\\     |   |XX\\\n");
    
    sleep(1);
    system("cls");
    
    printf("                     ___\n");
    printf(" __o        o       |   |\\\n");
    printf("   |\\      //\\      |   |X\\\n");
    printf("   >\\ o      \\\\     |   |XX\\\n");
    
    sleep(1);
    system("cls");
    
    printf("                     ___\n");
    printf("     o      o       |   |\\\n");
    printf("    /|__ o //\\      |   |X\\\n");
    printf("     |      <<      |   |XX\\\n");
    
    sleep(1);
    system("cls");
    
    printf("              o      ___\n");
    printf("     o      \\o/     |   |\\\n");
    printf("    /|\\      |      |   |X\\\n");
    printf("    /\\      //      |   |XX\\\n");
    
    sleep(1);
    system("cls");
    
    printf("                     ___\n");
    printf("    \\o/             | o |\\\n");
    printf("     |        o     |   |X\\\n");
    printf("    /\\     _\\/\\\\    |   |XX\\\n");
    
    sleep(1);
    system("cls");
    
    printf("        GGGGGGGGGGGGG     OOOOOOOOO     LLLLLLLLLLL                  OOOOOOOOO      !!!  !!!  !!!\n");
    printf("     GGG::::::::::::G   OO:::::::::OO   L:::::::::L                OO:::::::::OO   !!:!!!!:!!!!:!!\n");
    printf("   GG:::::::::::::::G OO:::::::::::::OO L:::::::::L              OO:::::::::::::OO !:::!!:::!!:::!\n");
    printf("  G:::::GGGGGGGG::::GO:::::::OOO:::::::OLL:::::::LL             O:::::::OOO:::::::O!:::!!:::!!:::!\n");
    printf(" G:::::G       GGGGGGO::::::O   O::::::O  L:::::L               O::::::O   O::::::O!:::!!:::!!:::!\n");
    printf("G:::::G              O:::::O     O:::::O  L:::::L               O:::::O     O:::::O!:::!!:::!!:::!\n");
    printf("G:::::G              O:::::O     O:::::O  L:::::L               O:::::O     O:::::O!:::!!:::!!:::!\n");
    printf("G:::::G    GGGGGGGGGGO:::::O     O:::::O  L:::::L               O:::::O     O:::::O!:::!!:::!!:::!\n");
    printf("G:::::G    G::::::::GO:::::O     O:::::O  L:::::L               O:::::O     O:::::O!:::!!:::!!:::!\n");
    printf("G:::::G    GGGGG::::GO:::::O     O:::::O  L:::::L               O:::::O     O:::::O!:::!!:::!!:::!\n");
    printf("G:::::G        G::::GO:::::O     O:::::O  L:::::L               O:::::O     O:::::O!!:!!!!:!!!!:!!\n");
    printf(" G:::::G       G::::GO::::::O   O::::::O  L:::::L         LLLLLLO::::::O   O::::::O !!!  !!!  !!!\n");
    printf("  G:::::GGGGGGGG::::GO:::::::OOO:::::::OLL:::::::LLLLLLLLL:::::LO:::::::OOO:::::::O\n");
    printf("   GG:::::::::::::::G OO:::::::::::::OO L::::::::::::::::::::::L OO:::::::::::::OO  !!!  !!!  !!!\n");
    printf("     GGG::::::GGG:::G   OO:::::::::OO   L::::::::::::::::::::::L   OO:::::::::OO   !!:!!!!:!!!!:!!\n");
    printf("        GGGGGG   GGGG     OOOOOOOOO     LLLLLLLLLLLLLLLLLLLLLLLL     OOOOOOOOO      !!!  !!!  !!!\n");
    
    //Musiquinha
    Beep(900, 500);
	Beep(900, 500);
	Beep(1000, 1000);
    system("cls");
}

//Imprime o menu
void menu()
{
	printf("\t    ___ ___  _   _ ___ ___  _   ___  \n");
	printf("\t   | __/ _ \\| | | |_ _| _ \\/_\\ / __|\n");
	printf("\t   | _| (_) | |_| || ||  _/ _ \\\\__ \\ \n");
	printf("\t   |___\\__\\_\\\\___/|___|_|/_/ \\_\\___/ \n");
	printf("\t              |   \\| __|\n");
	printf("\t              | |) | _|\n");
	printf("\t    ___ _   _ |___/|___|___  ___  _\n");
	printf("\t   | __| | | |_   _| __| _ )/ _ \\| |\n");
	printf("\t   | _|| |_| | | | | _|| _ \\ (_) | |__\n");
	printf("\t   |_|  \\___/  |_| |___|___/\\___/|____|\n");
	printf("\t\t\t\tPor Patrícia Costa\n\n"); 
	
	printf("  __________________________________________________________\n");
	printf(" |                             |                            |\n");
	printf(" |                         Menu|Principal                   |\n");
	printf(" |________                     |                    ________|\n");
	printf(" |        |                    |                   |        |\n");
	printf(" |___     |                 ___|___                |     ___|\n");
	printf(".|   |    |\\              ,'   |   ',             /|    |   |.\n");
	printf("||   |    | |(1) Consultar Equipas  (3) Adicionar Equipa|   ||\n");
	printf("||   |    | |(2) Equipas Existentes (4) Gerir Equipas   |   ||\n");
	printf("||   |    |/ (5) Localizar Jogador  (0) Sair      \\|    |   ||\n");
	printf("'|___|    |              \\     |     /             |    |___|'\n");
	printf(" |        |               ',___|___,'              |        |\n");
	printf(" |________|                    |                   |________|\n");
	printf(" |                             |                            |\n");
	printf(" |                             |                            |\n");
	printf(" |_____________________________|____________________________|\n");
}

//Imprime o ecrã de despedidas
void adeus()
{
	printf("        _...----.._\n");
	printf("     ,:':::::.     `>.\n");
	printf("   ,' |:::::;'     |:::.\n");
	printf("  /    `'::'       :::::\\\n");
	printf(" /         _____     `::;\\\n");
	printf(":         /:::::\\      `  :\n");
	printf("| ,.     /:ADEUS:\\        |\n");
	printf("|;:::.   `::::::;'        |\n");
	printf("::::::     `::;'      ,.  ;\n");
	printf(" \\:::'              ,::::/\n");
	printf("  \\                 \\:::/\n");
	printf("   `.     ,:.        :;'\n");
	printf("     `-.::::::..  _.''\n");
	printf("        ```----'''\n");

	sleep(2);
}

















































