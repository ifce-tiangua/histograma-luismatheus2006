#include <stdio.h>
#include <stdlib.h>

int imprime_histograma(int* array,int i, int categorias);

int main(){
    int categoria,i = 0;
    int* vetor;
    scanf("%d", &categoria);
    vetor = malloc(categoria*sizeof(int));
    
    for(i; i < categoria; i++){
        scanf("%d", &vetor[i]);
    }
    imprime_histograma(vetor, i , categoria);
    free(vetor);
}


int imprime_histograma(int* array,int i, int categorias){
    i = 0;
    for(i; i < categorias; i++){
        printf("%d ", array[i]);
        for(; array[i] > 0; array[i]--){
            printf("*");
        }
        printf("\n");
    }
}
