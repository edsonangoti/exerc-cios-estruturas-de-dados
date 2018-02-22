/*
Faça um programa para armazenar a seguinte tabela:
1	2	3
10	20	30
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL,"");
	
	int matriz[2][3],linha,coluna;
	
	matriz[0][0] = 1;
	matriz[0][1] = 2;
	matriz[0][2] = 3;
	matriz[1][0] = 10;
	matriz[1][1] = 20;
	matriz[1][2] = 30;
	
	for (linha=0; linha<2; linha++) {
		for (coluna=0; coluna<3;coluna++) {
			printf("ELEMENTO da linha %i, coluna %i da matriz: %i\n",
				linha+1,coluna+1,matriz[linha][coluna]);
		}
	}
	printf("\n\n\n");
	for (linha=0; linha<2; linha++) {
		for (coluna=0; coluna<3;coluna++) {
			printf("%i\t",matriz[linha][coluna]);
		}
		printf("\n");
	}
}
