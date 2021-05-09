#include <stdio.h>
#include <locale.h>

float soma(float num1, float num2)
{
	return num1 + num2;
}

float mult(float num1, float num2)
{
	return num1 * num2;
}

float div(float num1, float num2)
{
	return num1 / num2;
}

float sub(float num1, float num2)
{
	return num1 - num2;
}

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float num1, num2;
	
	printf("Insira dois números separados por um espaço.");
	scanf("%f %f", &num1, &num2);
	
	printf("soma = %.2f\nmultiplicação = %.2f\ndivisão = %.2f\nsubtração = %.2f", soma(num1, num2), mult(num1, num2), div(num1, num2), sub(num1, num2));
}

