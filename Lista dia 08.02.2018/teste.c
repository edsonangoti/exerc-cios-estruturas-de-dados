#include <stdio.h>

void main(void) {
	int x,*p;
	int vetor[] = {1,2,3};
	printf("Endereço: %p\nValores: %i\t%i\t%i\n--------------\n\n",vetor,*vetor,*vetor+1,*vetor+2);
	x=9;
	p=&x;
	printf("x = %i\n", x);
	printf("o valor de x usando o ponteiro p = %i\n", *p);   
    printf("p = %p\n", p);
    printf("endereco de x = %p\n", &x);
}
