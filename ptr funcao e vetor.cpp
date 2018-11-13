#include <stdio.h>
#include <stdlib.h>

int somavetor (int vetor[], const int n)
{
	int soma = 0; //totalizador da soma
	int *ptr; //identificador do indice e valor
	int *const finalvetor = vetor + n; //localizador do final n = qnt de indices
	
	for(ptr = vetor; ptr < finalvetor; ++ptr) //ptr sem * para acessar o end. de memoria
	{
		soma += *ptr; // += para somar o valor atual + o valor do indice 
	}//por isso tem o *
	
	return soma; //para retornar o total
}


int main (void)
{
	
	int somavetor(int vetor[], const int n);//declara a função no main
	int vetor[10] = {5,5,5,5,5,5,5,10,5,5};//inicializador da função
	
	printf("A soma do vetor = %i", somavetor(vetor, 10)); //retorna o valor da função
	
	getchar();
	
}
