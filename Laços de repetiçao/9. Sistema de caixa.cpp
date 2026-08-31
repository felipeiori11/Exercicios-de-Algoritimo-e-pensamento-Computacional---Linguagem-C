#include <stdio.h>

int main(){
		int valor_produto, qntd_comp, valor_desc, valor_final, valor_total = 0 , pergunta, qnt_comprada = 0, preco_final;
		printf("Digite aqui o valor do produto:R$");
		scanf("%d", &valor_produto);
		printf("Digite aqui a quantidade de produto: ");
		scanf("%d", &qntd_comp);
		printf("[ 1 ]CADASTRAR OUTRO PRODUTO\n[ 2 ] SAIR\n ");
		scanf("%d", &pergunta);
		valor_total += valor_produto;
		qnt_comprada += qntd_comp;
		
		
	while (pergunta == 1){
	
		printf("Digite aqui o valor do produto:R$");
		scanf("%d", &valor_produto);
		printf("Digite aqui a quantidade de produto: ");
		scanf("%d", &qntd_comp);
		printf("[ 1 ]CADASTRAR OUTRO PRODUTO\n[ 2 ] SAIR\n ");
		scanf("%d", &pergunta);
		valor_total += valor_produto;
		qnt_comprada += qntd_comp;
		
		
			
		}
		
		if ( pergunta == 2){
		printf("SISTEMA FINALIZADO!\n");
		}
		
		
		
		
		
	printf("\n--- Resultados Finais ---\n");
	printf("O valor total da compra foi de: R$%d\n", valor_total);
	printf("A quantidade de produtos foi de: %d\n",qnt_comprada);
		
		if (valor_total >= 500 ){
			valor_desc = valor_total / 10;
			preco_final = valor_total - valor_desc;
			printf("---Voce recebeu 10 porcento de desconto---\n");
			printf("O valor final com desconto e de: R$%d\n",preco_final);
	}
			
		
		
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

