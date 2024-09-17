#include <stdio.h>

// Pegando o indice do maior elemento e retornado maor elemento...
int maiorElemento(int array[],int size){
    int index_largest_element = 0;
    for(int i = 1; i < size; i++){
        if(array[index_largest_element] < array[i]) index_largest_element = i;
    }
    return array[index_largest_element];
}

// Pegando o maior elemento e guardando em uma variavél e retornando ...
int maiorElemento2(int array[], int size){
    int largest_element = array[0];
    for(int i = 1; i < size; i++){
        if(largest_element < array[i]) largest_element = array[i];
    }
    return largest_element;
}

int main(void){
    int array[] = {1, 2, 4, 3, 0, 5, 5, 8, 0};
    int size = sizeof(array)/sizeof(array[0]);
    printf("%d", maiorElemento(array, size));
    return 0;
}