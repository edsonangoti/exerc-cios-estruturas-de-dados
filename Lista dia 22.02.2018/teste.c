#include <stdio.h>
#include <locale.h>

void imprime(int *p) {
	printf("\n\nValor da vari�vel apontada pelo ponteiro p: %i\n\n",*p);
	printf("Endere�o da vari�vel p: %p\n\n",&p);
	printf("Conte�do da vari�vel p: %p",p);
}

int main() {
	setlocale(LC_ALL,"");

	int x, *p;
	x=10;
	p=&x;
	imprime(p);
	p++;
	imprime(p);
	
	return 0;
}
