// O que h� de errado com este programa?

#include <stdio.h>
#include <locale.h>

int main( ) {
	setlocale(LC_ALL,"");
	int x, *p;
	x=10;
	*p = x; //aqui est� o erro. 
	/* O ponteiro p cont�m um endere�o qualquer, e � prov�vel que p contenha
	   um endere�o "seguro" - um endere�o que nao esteja em seu c�digo, 
	   �rea de dados ou sistema operacional. Execute o programa e veja qual o 
	   endere�o de mem�ria que est� no ponteiro p. Este endere�o pode ser qualquer
	   um pois n�o foi atribu�do. Ou seja, o valor de endere�o � um lixo que pode ser
	   um endere�o de alguma regi�o proibida, que se usada pode provocar a quebra
	   do sistema.
	*/
	
	
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
