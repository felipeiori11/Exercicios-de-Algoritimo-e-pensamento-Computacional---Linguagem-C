#include <stdio.h>
int main(){
	int num;
	printf("--DIAS DA SEMANA--\n");
	
	printf("Digite aqui o dia da semana (1 a 7):  ");
	scanf("%d", &num);
	
	switch (num) {
		case 1:
		printf("DOMINGO!");
		break;
		
		case 2:
		printf("SEGUNDA!");
		break;
		
		case 3:
		printf("TERCA!");
		break;
		
		case 4:
		printf("QUARTA!");
		break;
		
		case 5:
		printf("QUINTA!");
		break;
		
		case 6:
		printf("SEXTA!");
		break;
		
		case 7:
		printf("SABADO!");
		break;
		
		default:
			printf("Dia invalido!");
		
		
		
		
	}
	return 0;
}
	
