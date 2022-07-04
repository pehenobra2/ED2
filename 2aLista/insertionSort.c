#include <stdio.h>
#include <stdlib.h>

void insertionSort(int n, int *l){

    int i, j, x;

    for(i = 1; i < n-1; i++){
        x = l[i];
        for(j = i; j > 0 && x < l[j-1]; j--){
            l[j] = l[j-1];
        }
        l[j] = x;
    }
} 

void main(){

    int *list, numbers = 1, i = 0;
    list = malloc(numbers * sizeof(int));

    while(scanf(" %d", &list[i]) != EOF && numbers < 1001){

        if(i == numbers-1){  
            numbers++;
            list = realloc(list, numbers * sizeof(int));
        }
        i++;
    }

    insertionSort(numbers, list);

    for(int x = 0; x < numbers - 1; x++){
        printf("%d ", list[x]);
    }
}