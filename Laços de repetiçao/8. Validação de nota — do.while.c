#include <stdio.h>
int main(){
    float nota;
    do{
        printf("Digite aqui sua nota: ");
        scanf("%f", &nota);
        if (nota < 0 || nota > 10){
            printf("NOTA INVALIDA!\n");
        }
    } while (nota < 0 || nota > 10) ;
        printf("%.2F E UMA NOTA VALIDA!", nota);
        
       
        
        
        
    


}