#include <stdio.h>

int main() {
    int numero, quantidade = 0, soma = 0, media;
	printf("Digite aqui seu numero [0 PARA SAIR]: ");
        scanf("%d", &numero);
        quantidade++;
        soma += numero;
    while (numero != 0) {
        printf("Digite aqui seu numero [0 PARA SAIR]: ");
        scanf("%d", &numero);

        if (numero != 0) {
            quantidade++;
            soma += numero;
        }
    }

    printf("A quantidade de numeros digitados e: %d\n", quantidade);
    printf("A soma de todos os numeros digitados e: %d\n", soma);

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("A media dos numeros digitados e: %d\n", media);
    }

    return 0;
}
