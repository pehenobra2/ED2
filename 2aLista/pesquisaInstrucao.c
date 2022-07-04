#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int cod;
    char keyWord[16];
}INSTRUCTIONS;

void compareCod(INSTRUCTIONS *ins, int number, int n){
    for(int x = 0; x < n; x++ ){
        if(number == ins[x].cod){
            printf("%s\n", ins[x].keyWord);
            return;
        }
    }
    printf("undefined\n");
}

void main(){

    int  n, codigo, validation;

    scanf(" %d", &n);
    INSTRUCTIONS *instructions = malloc(n*sizeof(INSTRUCTIONS));

    for(int i = 0; i < n; i++){
        scanf(" %d %s", &instructions[i].cod, instructions[i].keyWord);
    }
    while(scanf(" %d", &codigo) != EOF){
        compareCod(instructions, codigo, n);
    }
    free(instructions);
}