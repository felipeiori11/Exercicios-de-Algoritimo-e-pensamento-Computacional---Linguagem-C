//condicional composta
#include <stdio.h>

int main(){
	float nota;
	printf("Digite aqui a nota final: ");
	scanf("%f", &nota);
	
	if (nota >= 7.0){
		printf("Aluno APROVADO!");
	}
	else {
		printf("Aluno REPROVADO!");
	}
	return 0;	 
}
