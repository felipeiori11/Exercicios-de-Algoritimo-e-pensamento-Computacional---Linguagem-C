// Condicional encadeada
#include <stdio.h>

int main(){
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if ( idade >= 18 && idade <= 59) {
		printf("ADULTO!");
	}
	else if (idade >= 60){
		printf("IDOSO!");
	}
	else{
		printf("Menor de idade!");
	}
	
}
