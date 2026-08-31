#include <stdio.h>
#include <math.h>

int main(){
	float num1, num2, num3, num4, num5, num6 ;
	printf("Digite aqui o primeiro valor: ");
	scanf("%f",&num1);
	
	printf("Digite aqui o segundo valor: ");
	scanf("%f", &num2);
	
	num3 = num1 + num2;
	printf(" A soma dos dois numeros e: %.2f + %.2f = %2.f \n", num1, num2, num3);
	
	num4 = num1 - num2;
	printf(" A subtracao dos dois numeros e: %.2f - %.2f = %.2f \n ", num1, num2, num4 );
	
	num5 = pow(num1, 3); //eleva ao quadrado
	printf("A elevacao do primeiro numero e: %.2f\n ", num5);
	
	num6 = sqrt(num1); // raiz quadrada
	printf("A Raiz quadrada e: %.2f\n ", num6);
	
	return 0;	
}
