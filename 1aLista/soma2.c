#include <stdio.h>


int soma2 (int n, int m){

    int resultado = n + m;

    return resultado;

}


void main(){

    int n, m;

    scanf("%d", &n);
     if(n > 600000){
        printf("Digite de novo, pois o numero e maior que 600000, o numero tem que ser menor ou igual a 600000\n");
        scanf("%d", &n);
    }
    scanf("%d", &m);

     if(m > 600000){
        printf("Digite de novo, pois o numero e maior que 600000, o numero tem que ser menor ou igual a 600000\n");
        scanf("%d", &m);
    }

    printf("%d\n", soma2(n, m));
    

   
}