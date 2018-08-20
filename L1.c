#include <stdio.h>
#include <stdlib.h>
#include "Elem.h"
#include "Lista.h"
int main(){
	//LISTA 1
	printf("----------------\n");
	Lista x=cons(1,cons(2,cons(3,cons(4,vacia()))));;
	ImpLista(x);
	printf("No.Elem:%d\n",NumElem(x));
	//LISTA 2
	printf("----------------\n");
	Lista y=cons(5,cons(6,cons(7,cons(8,vacia()))));
	ImpLista(y);
	printf("No.Elem:%d\n",NumElem(y));
	//UNIR LISTA
	printf("----------------\n");
	Lista z=UnirLista(x,y);
	ImpLista(z);
	printf("No.Elem:%d\n",NumElem(z));
	//INVERTIR LISTA
	Lista g=InvertirLista(z);
	ImpLista(g);
	return 0;
}
