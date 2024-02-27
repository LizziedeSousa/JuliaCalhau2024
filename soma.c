#include <stdio.h>
int main(){
	//definição de variáveis
	int a, b, c, d, e;
	
	printf("digite três números inteiros:\n");
	//entrada
	scanf("%d %d %d", &a, &b, &d);
	
	//processamento
	c =a + b;
	e =c * d;
	printf("A soma de a + b = %d ", c);
	printf("\n");
	printf("A multiplicação de c * d = %d",e);
	return 0;
}
