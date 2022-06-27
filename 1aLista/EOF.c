#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int contagem = 0, numero;

    while(scanf(" %d", &numero) != EOF){
        contagem++;
    }

    printf("\n%d\n", contagem);

    return 0;

}