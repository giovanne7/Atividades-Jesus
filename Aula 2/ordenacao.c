#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void delay(int segundos);
void selecionar_menor(int A[], int n);
void imprime (A,n);
void bubble_sort (int A[] , int n );
void selecionar_maior(int A[], int n);


int main(){
	int n ;
    int A[6] = {4,5,8,1,5,3};
    selecionar_menor(A, 6);
    delay(2);
    int i;
    bubble_sort(A,6);
    return 0;
}

void bubble_sort (int A[] , int n ){
	
	for (int i = 0; i< n; i++){
		for (int j = n; j > i+1; j--){
			if (A [i] < A [j-1]){
				int aux = A[i];
				A[i] = A[j-1];
				A[j-1] = aux;
			}
		}
	}
	imprime(A,n);
}


void imprime (int A[],int n){
	
	for(int k = 0; k < n; k++)
        printf("%d ", A[k]);
        printf ("\n");
        delay(1);
}

void delay(int segundos){
	int ms = 1000 * segundos;
	clock_t inicio = clock();
	while(clock() < inicio + ms);
	
}

void selecionar_menor(int A[], int n){
    int i, j, menor, pos, k;
    for(i = 0; i < n - 1; i++){ 
        menor = A[i];
        pos = i;
        for(j = i + 1; j < n; j++){
            if(A[j] < menor) {
                menor = A[j];
                pos = j;
            }
        }
        if (pos != i) {
            A[pos] = A[i];
            A[i] = menor;
           imprime(A,n);
           delay(1);
        }
    }
}

void selecionar_maior(int A[], int n){
    int i, j, maior, pos, k;
    for(i = n; i > 0 - 1; i--){ 
        maior = A[i];
        pos = i;
        for(j = i - 1; j < n; j++){
            if(A[j] > maior) {
                maior = A[j];
                pos = j;
            }
        }
        if (pos != i) {
            A[pos] = A[i];
            A[i] = maior;
           imprime(A,n);
           delay(1);
        }
    }
}

