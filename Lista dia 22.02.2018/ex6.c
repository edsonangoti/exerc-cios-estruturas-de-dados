/*
6. Fa�a um programa que:
a. declare duas vari�veis a e b do tipo float;
b. declare um ponteiro �p� para o tipo float e fa�a ele apontar para a;;
c. Pe�a que o usu�rio digite um n�mero do tipo real, e o armazene em a;
d. Imprima o conte�do de a;
e. Imprima o endere�o de a;
f. Imprima o conte�do de p;
g. Imprima o endere�o de p;
h. Imprima o conte�do do endere�o apontado por p;
i. Imprima o conte�do de b;
j. Imprima o endere�o de b;
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	//a. declare duas vari�veis a e b do tipo float;
	//b. declare um ponteiro �p� para o tipo float;
	float a,b,*p=&a;
	//c. Pe�a que o usu�rio digite um n�mero do tipo real, e o armazene em a;
	printf("digite um n�mero do tipo real: ");
	scanf("%f",&a);
	//d. Imprima o conte�do de a;
	printf("conte�do de a: %.2f",a);		
	//e. Imprima o endere�o de a;
	printf("\nendere�o de a: %p",&a);
	//f. Imprima o conte�do de p;
	printf("\nconte�do de p: %p",p);
	//g. Imprima o endere�o de p;
	printf("\nendere�o de p: %p",&p);
	//h. Imprima o conte�do do endere�o apontado por p;
	printf("\nconte�do do endere�o apontado por p: %.2f",*p);
	//i. Imprima o conte�do de b;
	printf("\nconte�do de b: %.2f",b);
	//j. Imprima o endere�o de b;
	printf("\nendere�o de b: %p",&b);
	
	return 0;
}
