#include <conio.h>
#include <stdio.h>
main()
{
	float salario;
	int idade;
	char nome[30];
	
	printf("Digite seu nome: ");
	scanf("%s",nome);
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	printf("Digite seu salario: ");
	scanf("%f",&salario);
	
	printf("Bem vindo %s",nome);
	printf(" voce possui %d",idade);
	printf(" anos e ganha %f",salario);
	printf("\n Fim");
	getch();
}
