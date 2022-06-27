#include <stdio.h>

int conta7(long long int n){
    if(n<1){
        return 0;
    }
    if(n % 10 == 7){
        return 1 + conta7(n/10);
    }else{
        return conta7(n/10);
    }
}

void main(){
    long long int n;
    int qtd;

    scanf("%lld", &n);

    qtd = conta7(n);

    printf("%d", qtd);
}