/*
	Complemente o programa abaixo para que escreva o número 10 na tela,
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
	printf("Conteúdo da variável x: %i\n",x);
	printf("Valor da variável apontada pelo ponteiro p: %i\n\n",*p);
	
	//impressão do endereços das variáveis
	printf("Endereço da variável x: %p\n",&x);
	printf("Endereço da variável p: %p\n\n",&p);
	
	//impressão do valor da variável p
	printf("Conteúdo da variável p: %p",p);
	return 0;
}
