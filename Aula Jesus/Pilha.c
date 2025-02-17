#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Elemento {
	int num;
	struct Elemento *prox;
		
};
typedef struct Elemento Elemento;

struct Pilha{
	struct Elemento *topo;	
};

typedef struct Pilha Pilha;


Pilha* criar_pilha();
void inserir_elemento(Pilha *pi);
void listar_pilha(Pilha *pi);
void remover_elemento(Pilha *pi);
void esvaziar_pilha(Pilha *pi);
Elemento *aux;

int main(){
	Pilha *pi = criar_pilha();
	inserir_elemento(pi);
	inserir_elemento(pi);
	inserir_elemento(pi);
	listar_pilha(pi);
	
	return 0;	
}
Pilha* criar_pilha(){
	Pilha* pi = (Pilha*) malloc(sizeof(Pilha));
	if(pi != NULL){
		pi->topo = NULL;
		
	}
	return pi;
}



void inserir_elemento(Pilha *pi){
	Elemento *novo = (Elemento*) malloc(sizeof(Elemento));
	printf("\nDigite um numero: ");
	scanf("%d" ,&novo->num);
	novo -> prox = pi -> topo;
	pi -> topo = novo;
	printf("\nInserido na Pilha.");
}

void listar_pilha(Pilha *pi){
	if(pi -> topo == NULL){
		printf("Pilha esta vazia!");	
	} else {
		aux = pi -> topo;
		printf("\n\nListando Elementos.\n");
		do{
			printf("%d ", aux -> num);
			aux = aux -> prox;
		}while(aux != NULL);
	}
}
