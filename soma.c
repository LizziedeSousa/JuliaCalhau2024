#include <stdio.h>
int main(){
	//defini��o de vari�veis
	int a, b, c, d, e;
	
	printf("digite tr�s n�meros inteiros:\n");
	//entrada
	scanf("%d %d %d", &a, &b, &d);
	
	//processamento
	c =a + b;
	e =c * d;
	printf("A soma de a + b = %d ", c);
	printf("\n");
	printf("A multiplica��o de c * d = %d",e);
	return 0;
}
