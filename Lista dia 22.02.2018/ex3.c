/*	Analise o programa abaixo, verifique se est� correto ou incorreto?
	Caso esteja incorreto, aponte o erro e corrija-o.
*/
#include <stdio.h>
#include <locale.h>

int main ( ) {
	int x, *p;
	x=10;
	p=x; // erro: atribuir ao ponteiro um valor de endere�o de mem�ria igual a 10. 
		 // Este endere�o de mem�ria n�o pode ser usado pelo programa.
		 // a corre��o � p=&x;	
	printf("%d\n", *p);// A chamada de printf() nao imprime o valor de x, que � 10.
	// Imprime um valor desconhecido porque a atribuicao p=x; est� errada.
		  
	
	return 0;	
}
