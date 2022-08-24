#include <stdio.h>
#include <stdlib.h>

int retornanumeros(int pn1, int pn2)
{
	return pn1+pn2;
}

void Ex02(){
	
	int n1 = 0;
	int n2 = 0;
	int ret = 0;
	
	printf("Entre com o valor 1:\n");
	scanf("%d",&n1);
	printf("Entre com o valor 2:\n");
	scanf("%d",&n2);
	ret = retornanumeros(n1,n2);
	
	printf("O retorno da funcao e: %d",ret);
	
}
