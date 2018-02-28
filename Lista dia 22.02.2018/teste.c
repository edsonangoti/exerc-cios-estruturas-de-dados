#include <stdio.h>
#include <locale.h>

void imprime(int *p) {
	printf("\n\nValor da variável apontada pelo ponteiro p: %i\n\n",*p);
	printf("Endereço da variável p: %p\n\n",&p);
	printf("Conteúdo da variável p: %p",p);
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
