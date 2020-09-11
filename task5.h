#include "stdio.h"
#include <stdlib.h>
#include <string.h>

struct student{
    int Nomzach;
    char famil[20];
    char name[20], facult[20];
};

void searchByFullName(struct student* base, int baseSize, char famil[20],char name[20]);

void searchByFacult(struct student* base, int baseSize, char facult[20]);

void example5();