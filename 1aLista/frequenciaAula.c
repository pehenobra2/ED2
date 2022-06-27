#include <stdio.h>
#include <stdlib.h>

void OrdenaLista(int *Registros, int left, int right){
    int i, j, mid, y;

    i = left;
    j = right;
    mid = Registros[(left + right)/2];

    while(i<=j){
        while(Registros[i] < mid && i < right){
            i++;
        }
        while(Registros[j] > mid && j > left){
            j--;
        }
        if(i <= j){
            y = Registros[i];
            Registros[i] = Registros[j];
            Registros[j] = y;
            i++;
            j++;

        }
    }
    if(j > left){
        OrdenaLista(Registros, left, j);
    }
    if(i < right){
        OrdenaLista(Registros, i, right);
    }
}

void main(){
    int qtdRegistros, contador, presentes = 0;
    int *Registros;

    Registros = (int*) malloc(100000*sizeof(int));

    scanf(" %d", &qtdRegistros);
    
    while(contador < qtdRegistros){
        scanf(" %d", &Registros[contador]);
        contador++;
    }

    OrdenaLista(Registros, 0, qtdRegistros-1);

    contador = 0;
    while(contador < qtdRegistros ){
        if(Registros[contador] == Registros[contador+1]){
            Registros[contador] = -1;
        }
        contador++;
    }
    contador = 0;
    while(contador < qtdRegistros){
        if(Registros[contador] != -1){
            presentes++;
        }
        contador++;
    }

    printf("\n%d\n", presentes);
}