#include <stdio.h>

int main() {
    
    int qtd_pares = 0, qtd_impares = 0, soma_pares = 0, soma_impares = 0, numero;

    
    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d numero inteiro: ", i);
        scanf("%d", &numero);

        
        if (numero % 2 == 0) {
            qtd_pares++;
            soma_pares += numero;
        } else {
            qtd_impares++;
            soma_impares += numero;
        }
    }

    
    printf("\n--- Resultados Finais ---\n");
    printf("Quantidade de nmeros pares: %d\n", qtd_pares);
    printf("Quantidade de numeros impares: %d\n", qtd_impares);
    printf("Soma dos numeros pares: %d\n", soma_pares);
    printf("Soma dos números impares: %d\n", soma_impares);

    return 0;
}

