//  cases

#include <stdio.h>
int main(){
	int opcao;
	printf("---MENU---\n");
	printf("1 -  Somar\n");
	printf("2 - Subtrair\n");
	printf("3 - Multiplicar\n");
	printf("4 - Dividir\n");
	scanf("%d", &opcao);
	
	switch (opcao) {
		case 1:
		printf("Opcao somar");
		break;
		case 2:
			printf("Opcao subtrair");
			break;
		case 3:
			printf("Opcao Multiplicar");
		case 4:
			printf("Subtrair");
			break;
		default:
			printf("Opcao invalida!");
			}
	

}
