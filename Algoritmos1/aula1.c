#include<stdio.h>

int main(){
	
	int a, b, multi;
	
	printf("Multiplex - seu multiplicador de números inteiros pessoal\n\n");
	
	printf("Digite o primeiro número inteiro: ");
	scanf("%d", &a);
	
	printf("Digite o segundo número inteiro: ");
	scanf("%d", &b);
	
	multi = a*b;
	
	printf("\nResultado de %d X %d: %d\n------------------------\n", a, b, multi);
	
	getchar();
	getchar();
	
	return 0;
	
}
