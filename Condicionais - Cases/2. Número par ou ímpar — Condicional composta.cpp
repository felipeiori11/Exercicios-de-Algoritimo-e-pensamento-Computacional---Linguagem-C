#include <stdio.h>
int main(){
	int num;
	printf("Digite aqui seu numero: ");
	scanf("%d", &num);
	
	if (num %= 2){
		printf("NUMERO IM1PAR!");
	}
	else{
		printf("NUMERO PAR!");
	}
	return 0;
}
