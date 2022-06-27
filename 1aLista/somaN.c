#include <stdio.h>

int somaN(int n, int x[n]){

    int resultado = 0;
    int i = 0;

    while(i < n){
        resultado = resultado + x[i];
        i++;
    }

    return resultado;
}


void main(){

    int n;

    scanf("%d", &n);
    if(n < 0 || n > 50){
        printf("Digite outro numero menor ou igual a 50, ou maior ou igual a 0 \n");
        scanf("%d", &n);
    }
    printf("\n");
    int x[n];
    int i = 0;
    while(i < n){
        scanf("%d", &x[i]);
        if(x[i] > 5000 || x[i] < 0){
            printf("Digite outro numero menor ou igual a 5000, ou maior ou igual a 0 \n");
            scanf("%d", &x[i]);
        }
        
        i++;
   }

    printf("\n%d\n", somaN(n, x));
   
}