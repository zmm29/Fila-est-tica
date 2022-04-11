#include <stdio.h>
#define MAZ 5
typedef struct {
	char nome[40];
	int idade;
} tdado;
typedef struct {
	tdado fila [MAX];
	int ini, fim;
}tfila;
//-------------------------------------------------------------------------
void inicializa (tfila *f){// ponteiro e referencia a endereço de memória
 	f-> ini = 0;
 	f-> fim = -1;
 	
}
//-------------------------------------------------------------------------
 int enqueue(tfila *f, tdado x){
 	if(f->fim == MAX -1) // ja use todas a fichas da fila
 	return 0;
 	//inserindo por que tem espeçao
 	f->fim++;
 	f->fila[f->fim] = x;
 	return 1;
}
//-------------------------------------------------------------------------
tdado dequeue(tfila *f){
	tdadi ayx = f->fila[f->ini];
	f->ini++
	return aux;
}
int isEmpty(tfila f){
	if(f.fim < f.ini)
		return 1;
	else
		return 0;  
}
//-------------------------------------------------------------------------
void mostra(tfila f){
	while (f.ini <= f.fim){
	printf("%s:%d |", f.fila[f.ini].nome, f.fila[f.ini].idade);
		
	} //fim while
}	
