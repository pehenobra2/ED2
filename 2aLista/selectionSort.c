#include <stdio.h>
#include <stdlib.h>

#define less(A,B) (A < B)
#define exch(A,B) {int t = A;A=B;B=t;}
#define cmpexch(A,B) {if(less(B,A)) exch(A,B)}

void selectionSort(int *L, int l, int r){
    
    int menor = l, j = 0;
    
    if(l == r){
        return;
    }

    for(j = l+1; j <= r-2; j++ ){
        if(less(L[j],L[menor])){
            menor = j;
        }
    }
    exch(L[menor], L[l]);
    selectionSort(L, l+1, r);
        

}

void main(){
    int *listaNumeros ,qtdNumeros = 1, cont=0;
    listaNumeros = malloc(qtdNumeros * sizeof(int));

    while(scanf(" %d", &listaNumeros[cont]) != EOF){

        if(cont == qtdNumeros - 1){
            qtdNumeros++;
            listaNumeros = realloc(listaNumeros, qtdNumeros * sizeof(int));
        }
        cont++;
    }
    selectionSort(listaNumeros, 0, qtdNumeros);

    printf("\n");

    int x = 0;
    for(x; x < qtdNumeros-1 ; x++){
        printf("%d ", listaNumeros[x] );
    }


    free(listaNumeros);
     

}