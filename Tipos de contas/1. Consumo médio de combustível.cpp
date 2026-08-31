#include <stdio.h>
#include <math.h>

int main(){
	float dp, litro, preco, custo1, custo2, custo3;
	printf("A distancia percorrida (em KM): ", dp);
	scanf("%f",&dp);
	printf("A quantidade de combustível consumida, (em litros): ", litro);
	scanf("%f",&litro);
	printf("O preco do litro do combustIvel: ", preco);
	scanf("%f",&preco);
	
	printf("\n ---CONTAS--- \n");
	
	custo1 = dp / litro;
	printf("O custo medio do veiculo em KM/L e: %.2f\n ", custo1);
	
	custo2 = litro * preco;
	printf("O custo total da viagem foi: %.2fR$\n", custo2);
	
	custo3 = preco / custo1;
	printf("O custo medio por quilometro percorrido: %.2fR$", custo3);
	
	
	 
}
