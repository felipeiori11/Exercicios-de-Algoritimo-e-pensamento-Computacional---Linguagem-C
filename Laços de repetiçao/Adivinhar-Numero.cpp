#include <stdio.h>

int main(){
	int num, chute, tent = 0;
	printf("Digite aqui o numero para ser descoberto: ");
	scanf("%d", &num);
	
	while(chute != num){
		printf("Digite outro numero: ");
		scanf("%d", &chute);
		if (chute > num){
			printf("CHUTOU ALTO!\n");
		}
		else if(chute < num){
			printf("CHUTOU BAIXO!\n");
		}
		else{
			printf("ACERTOU!");
		}
		}
		
		
	}
	
	
