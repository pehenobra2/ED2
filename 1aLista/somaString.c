#include <stdio.h>
#include <string.h>

void main(){

    int qtdStrings, soma = 0, tamanho;
    char str[101];

    scanf(" %d", &qtdStrings);

    for(int i = 0;i < qtdStrings; i++ ){
        
        scanf(" %s", str);

        for(tamanho = 0; tamanho < 100; tamanho++){
            if(str[tamanho] == '\0'){
                break;
            }
            if(str[tamanho] > 48 && str[tamanho] < 58){
                soma += (str[tamanho] - '0');
            }
        }

        printf(" %d\n", soma);
        soma = 0;
    
    }

    



}