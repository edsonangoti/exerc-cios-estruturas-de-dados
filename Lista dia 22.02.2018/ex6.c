/*
6. Faça um programa que:
a. declare duas variáveis a e b do tipo float;
b. declare um ponteiro “p” para o tipo float e faça ele apontar para a;;
c. Peça que o usuário digite um número do tipo real, e o armazene em a;
d. Imprima o conteúdo de a;
e. Imprima o endereço de a;
f. Imprima o conteúdo de p;
g. Imprima o endereço de p;
h. Imprima o conteúdo do endereço apontado por p;
i. Imprima o conteúdo de b;
j. Imprima o endereço de b;
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	//a. declare duas variáveis a e b do tipo float;
	//b. declare um ponteiro “p” para o tipo float;
	float a,b,*p=&a;
	//c. Peça que o usuário digite um número do tipo real, e o armazene em a;
	printf("digite um número do tipo real: ");
	scanf("%f",&a);
	//d. Imprima o conteúdo de a;
	printf("conteúdo de a: %.2f",a);		
	//e. Imprima o endereço de a;
	printf("\nendereço de a: %p",&a);
	//f. Imprima o conteúdo de p;
	printf("\nconteúdo de p: %p",p);
	//g. Imprima o endereço de p;
	printf("\nendereço de p: %p",&p);
	//h. Imprima o conteúdo do endereço apontado por p;
	printf("\nconteúdo do endereço apontado por p: %.2f",*p);
	//i. Imprima o conteúdo de b;
	printf("\nconteúdo de b: %.2f",b);
	//j. Imprima o endereço de b;
	printf("\nendereço de b: %p",&b);
	
	return 0;
}
