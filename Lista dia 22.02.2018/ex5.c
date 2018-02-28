/* 
Crie um programa que:
a. declare e inicialize um vetor do tipo int;
b. declare e inicialize um vetor do tipo float;
c. declare um ponteiro para o vetor int e uma variável inteira;
d. declare um ponteiro para o vetor do tipo float;
e. Imprima os elementos do vetor;
f. Imprima o endereço de cada um dos elementos listados.
*/
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	//a. declare e inicialize um vetor do tipo int;
	int vetor_tipo_int[3];
	vetor_tipo_int[0]=1;
	vetor_tipo_int[1]=2;
	vetor_tipo_int[2]=3;
	
	//b. declare e inicialize um vetor do tipo float;
	float vetor_tipo_float[2];
	vetor_tipo_float[0]=100.50;
	vetor_tipo_float[1]=200.50;
	
	//c. declare um ponteiro para o vetor int e uma variável inteira;
	int *ponteiro_para_vetor_int, x;
	ponteiro_para_vetor_int=vetor_tipo_int;
	
	//d. declare um ponteiro para o vetor do tipo float;
	float *ponteiro_para_vetor_float;
	ponteiro_para_vetor_float = vetor_tipo_float;
	
	//e. Imprima os elementos do vetor;
	//f. Imprima o endereço de cada um dos elementos listados.
	printf("Imprimindo os elementos do vetor de números inteiros\n");
	for(x=0;x<3;x++){
		printf("Valor:\t\t\t %i\t",*(ponteiro_para_vetor_int+x));
	}
	printf("\n");
	for(x=0;x<3;x++){
		printf("Endereço: %p\t",ponteiro_para_vetor_int+x);
	}
	printf("\n\nImprimindo os elementos do vetor de números float\n");
	for(x=0;x<2;x++){
		printf("Valor:\t\t %.2f\t\t",*(ponteiro_para_vetor_float+x));
	}
	printf("\n");
	for(x=0;x<2;x++){
		printf("Endereço: %p\t",ponteiro_para_vetor_float+x);
	}
	return 0;
}
