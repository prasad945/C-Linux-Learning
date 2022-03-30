#include<stdio.h>
typedef struct Student{
    char stdName[100];
    int stdId;
}Stud;

int main(){
    Stud s1[5];

    printf("Enter details for 5 Student\n");
    for(int i=0; i<5; i++){
        printf("Enter name ,stdid for %d Student\n",i+1);
        fflush(stdin);
        gets(s1[i].stdName);
        scanf("%d/n", &s1[i].stdId);
    }


    printf("\nValues are \n");
    for(int i=0; i<5; i++){
        printf("%s %d \n", s1[i].stdName, s1[i].stdId);
    }

    return 0;
}
