#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	struct Computador
	{
		int ano;
		float custo;
		char marca_cpu[20];
		int velocidade_cpu;
	};
	
	Computador meu_pc;
	
	printf("Qual a marca do CPU que tem no seu computador?\n");
	gets(meu_pc.marca_cpu);
	printf("Qual a velocidade(MHz) do seu CPU?\n");
	scanf("%d", &meu_pc.velocidade_cpu);
	printf("Qual o ano de compra do seu computador?\n");
	scanf("%d", &meu_pc.ano);
	printf("Qual o custo do seu computador?\n");
	scanf("%f", &meu_pc.custo);
	
	printf("\n\nDados do equipamento\n");
	printf("--------------------\n");
	printf("Ano: %d\n", meu_pc.ano);
	printf("Custo: %.2f euros\n", meu_pc.custo);
	printf("Marca do CPU: %s\n", meu_pc.marca_cpu);
	printf("Velocidade do CPU: %d MHz", meu_pc.velocidade_cpu);
}

