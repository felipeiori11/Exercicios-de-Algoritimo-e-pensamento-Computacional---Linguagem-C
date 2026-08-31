#include <stdio.h>

int main(){
	int numero;
	printf("Digite um numero ou 0 para sair: ");
	scanf("%d", &numero);
	while (numero != 0){
		printf("O numero digitado foi: %d\n", numero);
		printf("Digite outro numero ou 0 para sair: ");
		scanf("%d", &numero);
	}
	printf("PROGRAMA ENCERRADO!");
	return 0;
}
