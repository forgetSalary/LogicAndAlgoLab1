#include "task5.h"

void searchByFullName(struct student* base, int baseSize, char famil[20],char name[20]){
    int found=0;

    for (int i=0; i<baseSize; i++){
        if (strcmp(base[i].famil,famil)==0){
            if (strcmp(base[i].name,name)==0){
                printf("Student:\nFamiliya:%s\nImya:%s\nFacultet:%s\nNomer zachetki:%d\n\n",
                       base[i].famil,base[i].name,base[i].facult,base[i].Nomzach);
                found=1;
            }

        }

    }

    if (found==0){
        printf("\nSudenti ne naydeni\n");
    }
}

void searchByFacult(struct student* base, int baseSize, char facult[20]){
    int found=0;

    for (int i=0; i<baseSize; i++){
        if (strcmp(base[i].facult,facult)==0){
            printf("Student:\nFamiliya:%s\nImya:%s\nFacultet:%s\nNomer zachetki:%d\n\n",
                   base[i].famil,base[i].name,base[i].facult,base[i].Nomzach);
            found=1;

        }

    }

    if (found==0){
        printf("Sudenti ne naydeni");
    }
}

void example5(){
    struct student base[5]={{0,"Khanbekova","Elena","VT"},
                            {1,"Subbotkin","Maxim","VT"},
                            {2,"Filatova","Dariya","VT"},
                            {3,"Trubanenko","Alex","VT"},
                            {12,"Vlasov","Iliya","MT"}};

    searchByFullName(base,5,"Khanbekova","Elena");

    searchByFacult(base,5,"MT");

    searchByFacult(base,5,"facult");
}