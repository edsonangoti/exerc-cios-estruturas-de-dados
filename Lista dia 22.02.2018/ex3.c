/*	Analise o programa abaixo, verifique se está correto ou incorreto?
	Caso esteja incorreto, aponte o erro e corrija-o.
*/
#include <stdio.h>
#include <locale.h>

int main ( ) {
	int x, *p;
	x=10;
	p=x; // erro: atribuir ao ponteiro um valor de endereço de memória igual a 10. 
		 // Este endereço de memória não pode ser usado pelo programa.
		 // a correção é p=&x;	
	printf("%d\n", *p);// A chamada de printf() nao imprime o valor de x, que é 10.
	// Imprime um valor desconhecido porque a atribuicao p=x; está errada.
		  
	
	return 0;	
}
