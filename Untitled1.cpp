#include <stdio.h>
#include <stdlib.h>


int menu_teste2(int *op)

{	printf("Digite 1 para Cadastrar: \n");
printf("Digite 2 para Atualizar: \n");
printf("Digite 3 para Listar: \n");
printf("Digite 4 para Imprimir: \n");
printf("Digite 5 para Sair: \n");
scanf("%d",op);
} 

main()
{	int num;
menu_teste2(&num);
switch(num)
{	
case 1:	printf("funcao_cadastra");	break;
case 2:	printf("funcao_atualizar");	break;
case 3:	printf("funcao_listar");	break;
case 4:	printf("funcao_imprimir");	break;
}
}
