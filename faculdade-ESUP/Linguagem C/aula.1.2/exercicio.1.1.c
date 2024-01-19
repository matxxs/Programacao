#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int x, y, z;
	
	printf("digite um numero: ");
    scanf("%d", &x);
    
    printf("digite um numero: ");
    scanf("%d", &y);
	
	printf("digite um numero: ");
    scanf("%d", &z);
	
	if ((x == y) && (y == z)) {
		printf ("x, y, z, sao iguais");
	} else {
		printf ("os numeros nao sao iguais");
	}
	
	return 0;
}
