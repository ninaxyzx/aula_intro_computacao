#include <stdio.h>
//include= incuindo biblioteca

int main(void) {
	int x = 10, y = 5,z = 7,k = 7;
	printf("os operadores relacionais sao usados para fazer comparacoes \n");
	printf("Quando o resultado da comparacao  eh FALSO retornam 0 (zero) \n");
    printf("Quando o resultado da vcmparacao eh VERDADEIRO retornam 1\n");
    
    printf("\ Valor de x = %d    ", x);
    printf("\ Valor de y = %d \n   ", y);
    printf("\ Valor de z = %d    ", z);
    printf("\ Valor de k = %d   \n ", k);
    
    printf("\n Exemplo 1: x > y : %d ", x > y ); // retorna 1 pois é VERDADEIRO 
    printf("\n Exemplo 2: x < y : %d \n", x < y ); // retorna 0 pois é FALSO
    
    printf("\n Exemplo 3: Z == K  : %d ", z == k ); // retorna 1 pois é VERDADEIRO
    printf("\n Exemplo 4: Z != K : %d \n", z != k); // retorna 0 pois é FALSO
    
    printf("\n Exemplo 5: Z >= x  : %d ",  z >= x  ); // O retorna 0 pois é FALSO 
    printf("\n Exemplo 6: Z <= K : %d \n", z <= k); // retorna 1 pois é VERDADEIRO
    
    return(0);
    
}
    
    //%.2f = 2 vogais depois da virgula