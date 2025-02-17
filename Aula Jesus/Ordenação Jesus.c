#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inserction_sort(int A[], int n){
    for(int j = 1; j < n; j++){
        int chave = A[j];
        int i = j - 1;
        while (i >= 0 && A[i] > chave){
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = chave;    
    }
}

int main(){
    int A[1000];
    srand(time(NULL));

    for(int i = 0; i < 1000; i++){
        A[i] = (rand() % 1000) + 1;
        printf("%d ", A[i]);
    }
    printf("\n");

    inserction_sort(A, 1000);

    for(int i = 0; i < 1000; i++){
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

