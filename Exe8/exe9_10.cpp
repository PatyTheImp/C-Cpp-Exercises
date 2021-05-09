#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char string1[100], string2[100], letra;
	int a_string1 = 0, a_string2 = 0;
	
	printf("Digite uma frase: "); gets(string1);
	printf("Digite outra frase: "); gets(string2);
	printf("Insira a letra que deseja encontrar: "); scanf(" %c", &letra);
	
	for (int i = 0; string1[i] != '\0'; i++)
	{
		if (string1[i] == letra)
			a_string1++;
	}
	
	for (int i = 0; string2[i] != '\0'; i++)
	{
		if (string2[i] == letra)
			a_string2++;
	}
	
	printf("\nA letra '%c' surge %d vez(es) na primeira e %d vez(es) na segunda frase.\n\n", letra, a_string1, a_string2);
	printf("Frase concatenada: %s\n", strcat(strcat(string1, " "), string2));
	printf("Frase invertida: %s", strrev(string1));
}
