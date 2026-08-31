#include <stdio.h>
#include <math.h>

int main(){
	int h, s, m, sr;
	printf("Digite aqui os segundos: ", s);
	scanf("%d", &s);
	
	h = s / 3600;
	m = s / 60;
	sr = s % 60;
	
	
	printf("%d horas, %d minutos, %d segundos", h ,m, sr);
	 

	
}
