#include <stdio.h>
#define MAX 5
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
	tdado aux = f->fila[f->ini];
	f->ini++;
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
		f.ini++;
	}
}
int menu(){
	int op;
	printf("*** Estrutura de Dados I - Fila Estatica ****\n");
	printf("1-Enqueue (Inserir)\n");
	printf("2-Dequeue (Remover)\n");
	printf("3-Mostra Fila (Mostrar)\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}
	int main(){
	tfila f1;
	tdado x;
	int op; 
	inicializa (&f1);
	do{
		op = menu();		
		switch (op){
			case 1: printf("Entre com o nome:");
					fflush(stdin);
					gets(x.nome);
					printf("Entre com a idade:");
					scanf("%d", &x.idade);
					if(enqueue(&f1, x) ==1)
					printf("Dado inserido :)\n");
					else				
					printf("Vagas esgotadas :(\n)");
			break;
			case 2: if(!isEmpty(f1) != 1){
					x = dequeue(&f1);
					printf("dado removido: %s | %d", x.nome, x.idade);
					}
					else{			
					printf("lista vazia impossivel remover.");
					}
			break;
			case 3: 
			mostra(f1);
			break; 
			case 0: 
				printf("Saindo .... ;(\n");
			break;
		}
		getch(); 
		system("cls");
		}while(op!=0);
}
	
