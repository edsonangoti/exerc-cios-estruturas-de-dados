// O que há de errado com este programa?

#include <stdio.h>
#include <locale.h>

int main( ) {
	setlocale(LC_ALL,"");
	int x, *p;
	x=10;
	*p = x; //aqui está o erro. 
	/* O ponteiro p contém um endereço qualquer, e é provável que p contenha
	   um endereço "seguro" - um endereço que nao esteja em seu código, 
	   área de dados ou sistema operacional. Execute o programa e veja qual o 
	   endereço de memória que está no ponteiro p. Este endereço pode ser qualquer
	   um pois não foi atribuído. Ou seja, o valor de endereço é um lixo que pode ser
	   um endereço de alguma região proibida, que se usada pode provocar a quebra
	   do sistema.
	*/
	
	
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
