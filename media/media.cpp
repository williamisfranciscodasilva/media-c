#include <conio.h>
#include <stdio.h>
main()
{
	float nota1, nota2, nota3, nota4, calc_media;
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);
	printf("Digite a terceira nota: ");
	scanf("%f",&nota3);
	printf("Digite a quarta nota: ");
	scanf("%f",&nota4);
	calc_media = (nota1 + nota2 + nota3 + nota4) / 4;
	printf("A media = %f",calc_media);
	getch();
}
