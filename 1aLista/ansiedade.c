#include <stdio.h>
#include <stdlib.h>

void main() {

    int verificaEOF, contagemPalavra = 0, qtdSim = 0 , qtdTriagem = 0, ch = 0;
    char resposta[3];

    while(scanf(" %d", &verificaEOF) != EOF){
       
        if(contagemPalavra == 10){
            contagemPalavra = 0;
            qtdSim = 0;
            ch = 0;
        }
        
        scanf(" %s", resposta);

        if(resposta[0] == 's'){
            qtdSim++;
        }

        if(qtdSim >= 2 && ch == 0){
            qtdTriagem++;
            ch = 1;
        }

        contagemPalavra++;
    }

    printf(" %d\n", qtdTriagem);

}