#include <stdio.h>

int main(){
	int numero, i, positivos= 0, negativos =0, zero =0  < 0;
	
	
	
	for(i = 1 ; i <= 10; i++){
		printf("Digite o %d numero inteiro: ", i);
        scanf("%d", &numero);
		
	
		 if(numero > 0){
		 	positivos ++;
        	
		}
		else if( numero < 0){
			negativos ++;
			
		}
		else{
			zero ++;
		
		}
}		
	printf("A quantidade de numeros inteiros e: %d\n", positivos);
	printf("A quantidade de numeros negativos e: %d\n", negativos);
		printf("A quantidade de zeros e: %d\n", zero);
        	
       
		return 0;
	}
	
	
	
	
	
	
	

