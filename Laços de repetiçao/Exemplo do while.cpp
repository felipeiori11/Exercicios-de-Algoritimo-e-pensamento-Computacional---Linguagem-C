#include <stdio.h>

int main(){
	float nota;
	do{
		printf("Digite uma nota de 0 a 10: ");
		scanf("%f", &nota);
	} while (nota < 0 || nota > 10);
	printf("Nota informada: %.2f\n: ", nota);
	return 0;
}

