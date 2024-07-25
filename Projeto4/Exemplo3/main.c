#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float anos, dias;
	printf("Digite a sua idade em anos: ");
	scanf("%f", &anos);
	dias =  anos * 365;
	printf("A sua idade em dias eh %.0f.", dias);
	
	return 0;
}