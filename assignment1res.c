#include<stdio.h>
typedef struct Student{
    char stdName[100];
    int stdId;
    int marks[5];
}Stud;

void showStudentDetails(Stud[]);

int main(){
    Stud s1[5];
    printf("Enter details for 5 Student\n");
    for(int i=0; i<5; i++){
        printf("Enter name ,stdid for %d Student\n",i+1);
        fflush(stdin);
        gets(s1[i].stdName);
        scanf("%d", &s1[i].stdId);
        printf("Enter marks for 5 subjects\n");
        for(int j=0; j<5; j++){
            scanf("%d", &s1[i].marks[j]);
        }
    }

    showStudentDetails(s1);
    return 0;
}

void showStudentDetails(Stud records[]){
    int total = 0;
    printf("\nValues are \n");
    for(int i=0; i<5; i++){
        printf("\n%s %d ", records[i].stdName, records[i].stdId);
        for(int j=0; j<5; j++){
            total+=records[i].marks[j];
        }
        printf("Total is %d : Average is %f\n", total,(float)total/5);
    }
}
