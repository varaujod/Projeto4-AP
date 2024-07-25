#include <stdio.h>
#include <stdlib.h>


int main() {
	float comp, alt, perimetro, area;
	
	printf("Digite o comprimento do seu retangulo: ");
	scanf("%f", &comp);
	
	printf("Digite a altura do seu retangulo: ");
	scanf("%f", &alt);
	
	perimetro = (comp + alt) * 2;
	area = comp * alt;
	
	printf("O perimetro de sua figura sera de: %f\n", perimetro);
	printf("A area de sua figura sera de: %f", area);
	
	return 0;
}