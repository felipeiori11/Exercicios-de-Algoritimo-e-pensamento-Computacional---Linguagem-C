#include <stdio.h>
#include <math.h>

int main(){
	float hrt, vr, inss, ir, salbt, salliq, vlinss, tdes, vir;
	printf("Digite aqui as horas trabalhadas (Mensal): ");
	scanf("%f", &hrt);
	printf("Digite aqui o valor recebido por hora: ");
	scanf("%f", &vr);
	printf("Digite aqui o desconto do INSS: ");
	scanf("%f", &inss);
	printf("Digite aqui o desconto do IR: ");
	scanf("%f", &ir);
	
	salbt = vr * hrt;
	printf("\nO salario bruto e: %.2f", salbt);
	
	vlinss = salbt * inss / 100;
	printf("\nO valor do inss e: %.2f", vlinss);
	
	vir = salbt * ir / 100;
	printf("\nO valor do imposto de renda e: %.2f", vir);
	
	tdes = vir + vlinss;
	printf("\nO total de descontos e: %.2f", tdes);
	
	salliq = salbt - tdes;
	printf("\nO valor do salario liquido e: %.2f", salliq);
	
	
	
	
	
		
	
	
}
