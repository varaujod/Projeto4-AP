#include <stdio.h>
#include <stdlib.h>


int main() {
	float lado, perimetro, area;
	
	printf("Digite o lado do quadrado que fara o perimetro da figura: ");
	scanf("%f", &lado);
	
	perimetro = 4 * lado;
	area = 2 * lado;
	
	printf("O perimetro da sua figura sera de: %f\n", perimetro);
	printf("A area da sua figura sera de: %f", area);
	
	return 0;
}