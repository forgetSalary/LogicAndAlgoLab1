#include "task4.h"
#define rowsN 10
#define colsN 15

void outputResult(int* arr, int* result,int rw, int cl){
    for (int i=0; i<rw; i++){
        for (int j=0; j<cl; j++){
            printf("%d,",*arr);
            arr++;
        }
        printf("\tSum=%d\n",*(result+i));
    }
}

void sumInRows(int* arr, int* result,int rowsNumber, int colsNumber){
    for (int i=0; i<rowsNumber; i++){
        for (int j=0; j<colsNumber; j++){
            *(result+i)+=*arr;
            arr++;
        }
    }
}

void sumInCols(int** arr, int* result,int rowsNumber, int colsNumber){
    for (int i=0; i<colsNumber; i++){
        for (int j=0; j<rowsNumber; j++){
            *(result+i)+=*(*(arr+j)+i);
        }
    }
}

void example4(){
    //инициализация массива
    int array[rowsN][colsN];
    for (int i=0; i<rowsN; i++){
        init_randomArr(array[i],colsN);
    }

    //отводим память под результат сложения
    int* result=(int*)calloc(rowsN,sizeof(int));

    //сумма каждой строки
    sumInRows(array,result,rowsN,colsN);
    outputResult(array,result,rowsN,colsN);

    //сумма каждого столбца
    int (*p)[colsN]=array;
    sumInCols(p,result,rowsN,colsN);
    outputResult(p,result,colsN,rowsN);





}