#include <stdio.h>
#include <stdlib.h>



void ordenacaoBolha(int n, int *N){
    
    int i = 0, troca = 1, aux;

    while(troca == 1){
        troca = 0;
        while(i < n-2){
            if(N[i] > N[i + 1]){
                troca = 1;
                aux = N[i];
                N[i] = N[i + 1];
                N[i + 1] = aux;
            }
            i++;
        }
        i = 0;
    }
}

void main(){
    int *listaNumeros, qtdNumeros = 1, cont=0;
    listaNumeros = malloc(qtdNumeros * sizeof(int));

    while(scanf(" %d", &listaNumeros[cont]) != EOF){

        if(cont == qtdNumeros - 1){
            qtdNumeros++;
            listaNumeros = realloc(listaNumeros, qtdNumeros * sizeof(int));
        }
        cont++;
    }

    ordenacaoBolha(qtdNumeros, listaNumeros);
    printf("\n");

    int x;
    for(x = 0; x < qtdNumeros - 2; x++){
        printf("%d ", listaNumeros[x]);
    }
    printf("%d\n", listaNumeros[x]);

    free(listaNumeros);


}