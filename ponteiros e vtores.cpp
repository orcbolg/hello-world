#include <stdio.h>

int main (void)
{
	int vetor[3] = {1,2,3};
	int *ptr = vetor;
	int x;
	x = 1;
	*(ptr+x) = *ptr + 5;
	
	
	printf("%i\n", vetor[1]);
	
	getchar();
	return 0;
}
