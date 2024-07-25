#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float media, nota1, nota2;
	
	printf("Digite a primeira nota do aluno: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota do aluno: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf("A media do aluno eh %.1f", media);
	
	return 0;
}