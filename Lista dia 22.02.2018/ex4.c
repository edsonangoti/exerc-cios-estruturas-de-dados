//Analise o programa abaixo, e verifique o que será impresso.

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int x;
	int *p1, *p2;
	p1=&x;
	p2=p1;
	printf("%p\n", p2);
	// será impresso o endereço de memória apontado pelo ponteiro p2
	// este endereço é o mesmo do ponteiro p1 e da variável x.
}
