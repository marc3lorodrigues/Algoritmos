#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int opcao=0;
	
	printf("Entre com a opcao do exercicio\n");
	scanf("%d",&opcao);
	printf("\n");
	switch (opcao)
	{
		case 1:
      		Ex01();
			printf("\n");
			break;
		case 2:
      		Ex02();
			printf("\n");
			break;			
		
		default:
			printf("Opcao invalida\n");
	}
	return 0;
}
