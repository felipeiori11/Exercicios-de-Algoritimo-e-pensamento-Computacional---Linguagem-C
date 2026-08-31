#include <stdio.h>

int main(){
	int num1, num2, num3;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &num1); //leia (x)
	
	printf("Digite o segundo valor:");
	scanf("%d", &num2);
	
	num3 = num1 * num2;
	printf("A soma dos numeros e: %d", num3 );
	
	return 0;	
}
