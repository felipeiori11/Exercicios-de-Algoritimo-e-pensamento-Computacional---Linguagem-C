#include <stdio.h>
int main(){
	int numero,numero2, contagem, contagem2;
	printf("Digite aqui um numero inteiro e positivo: ");
	scanf("%d", &numero);
	
	printf("\nORDEM CRESCENTE\n");
	for (contagem = 1; contagem <= numero; contagem++){
		printf("%d\n", contagem);	
	}
	printf("\nORDEM DESCRESCENTE\n");
	for (contagem2 = numero; contagem2 >= 1; contagem2--)
		printf("%d\n", contagem2);

	return 0;
}
