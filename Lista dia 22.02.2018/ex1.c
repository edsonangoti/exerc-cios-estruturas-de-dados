/*
	Complemente o programa abaixo para que escreva o n�mero 10 na tela,
	utilizando x e p.
*/
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	int x, *p;
	p = &x;
	x = 10;
	//abaixo o complemento do programa para imprimir o valor 10 usando x e p
	printf("Conte�do da vari�vel x: %i\n",x);
	printf("Valor da vari�vel apontada pelo ponteiro p: %i\n\n",*p);
	
	//impress�o do endere�os das vari�veis
	printf("Endere�o da vari�vel x: %p\n",&x);
	printf("Endere�o da vari�vel p: %p\n\n",&p);
	
	//impress�o do valor da vari�vel p
	printf("Conte�do da vari�vel p: %p",p);
	return 0;
}
