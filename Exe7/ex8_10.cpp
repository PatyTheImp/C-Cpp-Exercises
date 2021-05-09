#include <stdio.h>
#include <locale.h>

const int TAMANHO = 12; //Tamanho da maior string + deliminador
const int LINHAS = 5; //Número de jogadores

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char jogadores[LINHAS][TAMANHO] =
	{
		"Júlio César",
		"Luisão",
		"Jardel",
		"Jonas",
		"Mitroglou"
	};
	
	printf("Jogadores do SLBenfica\n\n");
	
	for (int i = 0; i < LINHAS; i++)
		printf("%s\n", jogadores[i]);
}

