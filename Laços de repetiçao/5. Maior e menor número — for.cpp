#include <stdio.h>

int main() {
    int numero, maior, menor;

    
    printf("Digite o 1o numero: ");
    scanf("%d", &numero);
    
    maior = numero;
    menor = numero;

    
    for (int i = 2; i <= 10; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &numero);

        
        if (numero > maior) {
            maior = numero;
        }

        
        if (numero < menor) {
            menor = numero;
        }
    }

   
    printf("\nO maior numero informado foi: %d\n", maior);
    printf("O menor numero informado foi: %d\n", menor);

    return 0;
}

