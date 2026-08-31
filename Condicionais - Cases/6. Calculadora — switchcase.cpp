#include <stdio.h>
int main(){
	int opcao, num1, num2, soma, sub, multi, div;
	printf("Numero 1: \n");
	scanf("%d", &num1);
	printf("Numero 2: \n");
	scanf("%d",&num2);
	printf("---MENU---\n");
	printf("1 -  Somar\n");
	printf("2 - Subtrair\n");
	printf("3 - Multiplicar\n");
	printf("4 - Dividir\n");
	scanf("%d", &opcao);
	
	switch (opcao) {
		case 1:
		printf("Opcao somar\n");
		soma = num1 + num2;
		printf("%d", soma);
		
		break;
		case 2:
			printf("Opcao subtrair\n");
			sub = num1 - num2;
			printf("%d", sub);
			break;
			
			
		case 3:
			printf("Opcao Multiplicar\n");
			multi = num1 * num2;
			printf("%d", multi);
			break;
		
		case 4:
			if(num2 == 0){
				printf("INVALIDO!");
			};
			
			printf("Dividir\n");
			div = num1 / num2;
			printf("O resultado e: %d", div);
			
			break;
		default:
			printf("\nOpcao invalida!");
			}
	

}
