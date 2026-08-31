#include <stdio.h>

int main() {
    int numero, soma = 0, i; 
    float media;

   
    for (i = 1; i <= 10; i++) {
        printf("Digite o %d numero inteiro: ", i);
        scanf("%d", &numero);

        
        soma = soma + numero; 
    }

    
    media = soma / 10;

    
    printf("\nA soma de todos os numeros e: %d\n", soma);
    printf("A media dos numeros informados e: %.2f\n", media);

    return 0;
}

