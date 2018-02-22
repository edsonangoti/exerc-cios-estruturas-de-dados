// Exercício 1 - aula dia 08/02/2018
/* Faça um programa que leia uma palavra qualquer de até 20 caracteres. Verifique se a palavra
digitada é igual a palavra “teste”. Se for igual imprima a mensagem “ok” e se não igual
imprima a mensagem “ko”.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL,"");
	
	char palavra[21];
	printf("Digite uma palavra qualquer de até 20 caracteres\n\n");
	gets(palavra);
	if(strcmp(palavra,"teste")==0)
		printf("ok");
	else
		printf("ko");
}
