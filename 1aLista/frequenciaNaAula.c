#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


typedef struct aux {
    int numero;
    struct aux* prox;
}VI;

typedef struct{
    VI* inicio;
}LISTA;


int QtdNumero(LISTA* l){
    VI* end = l->inicio;
    int qtdNumero = 0;

    while(end != NULL){
        qtdNumero++;
        end = end->prox;
    }
    return qtdNumero;
}

int InserirNumero(LISTA* l,int nm ){

    int ch = nm;

    VI* atn, i;

    VI* i = (VI*) malloc(sizeof(VI));

    i->numero = nm;

    if(QtdNumeros(l) == 0){
        i->prox = l->inicio;
        l->inicio = i;
    }else{

    }

}


int main(){

    int N, contador = 0;

    VI vi;
    LISTA l;

    scanf(" %d", &N);

    if(N < 0 || N > 100000){

        printf("Digite outro número maior ou igual a 0, ou menor ou igual a 100000\n");
        scanf(" %d", &N);
    }

    l.inicio = NULL;

    while(contador < N){
        
        scanf(" %d", vi.numero);

        

        contador++;
    }
    contador = 0;
    

    printf("\n%d\n", N);

    return 0;
}