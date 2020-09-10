#include "task2.h"

void init_randomArr(int *arr,int size){
    srand(time(NULL)+&(*arr));
    for (int i = 0; i < size; i++){
        *(arr+i)=(rand()%size*2)-size;
    }
}
void example2(){
    int numbers[SIZE];

    init_randomArr(numbers,SIZE);


    for (int i = 0; i < SIZE; i++){
        printf("%d\n",numbers[i]);
    }
}

