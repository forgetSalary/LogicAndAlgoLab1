#include "task4.h"

void arrOutput(int* arr,int r,int c){
    printf("-------------------------------------------------------------\n");
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            printf("%3d|",*arr);
            arr++;
        }
        printf("\n-------------------------------------------------------------\n");
    }
}

void sumInRows(int* arr,int rowsNumber, int colsNumber){
    int* result=(int*)calloc(rowsNumber,sizeof(int));

    printf("\nSummi v strokah\n");
    for (int i=0; i<rowsNumber; i++){
        for (int j=0; j<colsNumber; j++){
            result[i]+=*arr;
            arr++;
        }
        printf("Stroka%d:%d\n",i+1,result[i]);
    }
}

void sumInCols(int* arr,int rowsNumber, int colsNumber){
    int* result=(int*)calloc(colsNumber,sizeof(int));

    printf("\nSummi v stolbtsah:\n");
    for (int i=0; i<colsNumber; i++){
        for (int j=0; j<rowsNumber; j++){
            result[i]+=*arr;
            arr+=colsNumber;
        }
        printf("Stolbets%d:%d\n",i+1,result[i]);
        arr-=(colsNumber*rowsNumber);
        arr++;
    }
}

void example4(){
    //инициализация массива
    int array[rowsN][colsN];
    for (int i=0; i<rowsN; i++){
        init_randomArr(array[i],colsN);
    }

    //вывод массива
    arrOutput(array,rowsN,colsN);

    //сумма каждой строки
    sumInRows(array,rowsN,colsN);

    //сумма каждого столбца
    sumInCols(array,rowsN,colsN);


}