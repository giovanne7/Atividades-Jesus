#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void delay(int segundos);


void selecionar_menor(int A[], int n);
int main(){
	int A[5] ={8,9,1,3,0};
	selecionar_menor(A,5);
	for(int i = 0; i < 5; i++)
		printf("%d ",A[i]);
			
	
	
	return 0;
}
void selecionar_menor(int A[], int n){
	for(int i = 0; i < n; i++){
		int menor = A[i];
		int pos = i;
		for(int j = i+1; j < n; j++){
			if(A[j] < menor){
				menor = A[j];
				pos = j;	
			}	
		}
		A[pos] = A[i];
		A[i] = menor;
		
	}
}
	

