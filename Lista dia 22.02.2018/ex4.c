//Analise o programa abaixo, e verifique o que ser� impresso.

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int x;
	int *p1, *p2;
	p1=&x;
	p2=p1;
	printf("%p\n", p2);
	// ser� impresso o endere�o de mem�ria apontado pelo ponteiro p2
	// este endere�o � o mesmo do ponteiro p1 e da vari�vel x.
}
