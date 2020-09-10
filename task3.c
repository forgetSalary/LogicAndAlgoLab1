#include "task3.h"

void numInput(int *p){
    printf("Size: ");
    scanf_s("%d",p);
}

void example3(){
    int size;
    numInput(&size);

    int* arr= (int*)calloc(size,sizeof(int));;

    printf("\nArray:\n");
    for (int i = 0; i < size; i++){
        printf("%d: %d\n",i+1,arr[i]);
    }
    free(arr);
}