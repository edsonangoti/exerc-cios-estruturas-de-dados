// Exerc�cio 1 - aula dia 08/02/2018
/* Fa�a um programa que leia uma palavra qualquer de at� 20 caracteres. Verifique se a palavra
digitada � igual a palavra �teste�. Se for igual imprima a mensagem �ok� e se n�o igual
imprima a mensagem �ko�.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL,"");
	
	char palavra[21];
	printf("Digite uma palavra qualquer de at� 20 caracteres\n\n");
	gets(palavra);
	if(strcmp(palavra,"teste")==0)
		printf("ok");
	else
		printf("ko");
}
