#include <stdio.h>

int main(){
	float valorcompra, valordesconto, valorreal, valorfinal;
	printf("Digite o valor da compra: ");
	scanf("%f", &valorcompra);
	printf("O valor da compra e: R$%.2f \n", valorcompra);
	
	
	if (valorcompra >= 500.00 ){
		
		valordesconto = valorcompra * 0.10;
		printf("O valor do desconto e: R$%.2f\n", valordesconto);
		
		
		valorreal = valorcompra - valordesconto;
		printf("o valor total com desconto e: R$%.2f", valorreal);
	}
	

	
}
