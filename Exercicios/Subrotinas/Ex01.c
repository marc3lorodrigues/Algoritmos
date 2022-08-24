#include <stdio.h>
#include <stdlib.h>

//"Faça um programa que retorne '1' para a entrada de um numero
// inteiro positivo e retorne 0 para um numero inteiro negativo.;
int retornaValor(pNumero)
{
	if (pNumero>0)
		return 1;
	else if (pNumero<0)
		return 0;
}

void Ex01(){
	
	int num = 0;
	int ret = 0;
	
	printf("Entre com um numero \n");
	scanf("%d",&num);
	ret = retornaValor(num);
	
	printf("O retorno da funcao e: %d\n",ret);
}
