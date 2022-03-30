#include<stdio.h>
typedef struct Student{
    char stdName[100];
    int maths,marathi,english,science,socialScience,totalMarks;
    char DOB[20];
}Stud;

int main(){
    Stud s1[5];

    printf("Enter details for 5 Student\n");
    for(int i=0; i<5; i++){
        printf("Enter name ,DOB, maths,english,marathi,science,social Science for %d Student\n",i+1);
        fflush(stdin);
        gets(s1[i].stdName);
        gets(s1[i].DOB);
        scanf("%d %d %d %d %d/n", &s1[i].maths,&s1[i].english,&s1[i].marathi,&s1[i].science,&s1[i].socialScience);
    }


    printf("\nValues are \n");
    for(int i=0; i<5; i++){
        printf("%s %s %d %d %d %d %d\n", s1[i].stdName,s1[i].DOB,s1[i].maths,s1[i].english,s1[i].marathi,s1[i].science,s1[i].socialScience);
        int totalMarks = s1[i].maths+s1[i].english+s1[i].marathi+s1[i].science+s1[i].socialScience;
        printf("total marks are %d \n",totalMarks);
        float avgMarks = totalMarks/5;
        printf("average is %f\n\n",avgMarks );
    }

    return 0;
}
