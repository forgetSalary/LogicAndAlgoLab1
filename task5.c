#include "task5.h"

int* searchBySecondName(struct student* base, int baseSize,char famil[20]){
    int *newBase=(int*)malloc(baseSize*sizeof(int));

    for (int i=0; i<baseSize; i++){
        if (strcmp(*(base+i)->famil,famil)==0){
            *newBase=i;
            newBase++;
        }

    }
}