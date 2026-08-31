#include <stdio.h>
int main(){
	int placa, horas;
	printf("Digite a placa: EX(111, 101, 230):  ");
	scanf("%d", &placa);
	printf("Digite as horas estacionadas: ");
	scanf("%d", &horas);
	
	if (horas <= 1){
		printf("O valor a se pagar e: R$8,00 para o veiculo placa: %d", placa);
	}
	else if (horas >= 2 && horas <= 3){
		printf("O valor a se pagar e: R$15,00 para o veiculo placa: %d", placa);
	}
	else if (horas >= 4 && horas <= 5){
		printf("O valor a se pagar e: R$25,00 para o veiculo placa: %d", placa);
	}
	else if (horas > 5){
		printf("O valor a se pagar e: R$40,00 para o veiculo placa: %d", placa);
	}
	return 0;
}
