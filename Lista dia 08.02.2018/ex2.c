/* Escreva um programa que leia uma string com 10 posi��es
   e imprime a mesma de tr�s para frente.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL,"");

	int x,tam;
	char nome[11];
	printf("Digite uma palavra: ");
	gets(nome);
	tam = strlen(nome);
	printf("\n A palavra de tr�s pra frente �: ");
	for (x=tam-1; x >= 0; x--)
		printf("%c",nome[x]);	
}
