#include "task1.h"

int sumMaxMin(int *arr,int size){
    int max,min;

    max=arr[0];
    min=arr[0];

    for (int i=1; i<size; i++){
        if (arr[i]<min){
            min=arr[i];
        }
        if (arr[i]>max){
            max=arr[i];
        }
    }

    max-=min;

    return max;
}
void example(){
    int numbers[SIZE]={6,12,3,4,18,5,7,8,17,10,11,2,13,15,14,16,9,18,19,5};
    int sum;

    sum=sumMaxMin(numbers,SIZE);

    printf("%d",sum);
};