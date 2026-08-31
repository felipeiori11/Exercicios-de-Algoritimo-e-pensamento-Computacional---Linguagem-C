#include <stdio.h>

int main(){
	int numero, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
	printf("Digite aqui seu numero: ");
	scanf("%d", &numero);
	num1 = numero * 1;
	num2 = numero * 2;
	num3 = numero * 3;
	num4 = numero * 4;
	num5 = numero * 5;
	num6 = numero * 6;
	num7 = numero * 7;
	num8 = numero * 8;
	num9 = numero * 9;
	num10 = numero * 10;
	while(numero != 0 ){
		printf("Voce escolheu o numero: %d\n", numero);
		printf("1 X %d = %d\n", numero, num1);
		printf("2 X %d = %d\n", numero, num2);
		printf("3 X %d = %d\n", numero, num3);
		printf("4 X %d = %d\n", numero, num4);
		printf("5 X %d = %d\n", numero, num5);
		printf("6 X %d = %d\n", numero, num6);
		printf("7 X %d = %d\n", numero, num7);
		printf("8 X %d = %d\n", numero, num8);
		printf("9 X %d = %d\n", numero, num9);
		printf("10 X %d = %d\n", numero, num10);
		break;
}
		return 0;
		
}
