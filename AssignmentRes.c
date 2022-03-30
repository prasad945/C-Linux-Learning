#include<stdio.h>
typedef struct Student{
    char stdName[100];
    int stdId;
    int marks[5];
}Stud;

int main(){
    Stud s1[5];
    int total[5];
    float average[5];
    printf("Enter details for 5 Student\n");
    for(int i=0; i<5; i++){
        printf("Enter name ,stdid for %d Student\n",i+1);
        fflush(stdin);
        gets(s1[i].stdName);
        scanf("%d", &s1[i].stdId);
        printf("Enter marks for 5 subjects\n");
        total[i]=0;
        for(int j=0; j<5; j++){
            scanf("%d", &s1[i].marks[j]);
            total[i]+=s1[i].marks[j];
        }
        average[i]=(float)total[i]/5;
    }


    printf("\nValues are \n");
    for(int i=0; i<5; i++){
        printf("\n%s %d %d  %f", s1[i].stdName, s1[i].stdId,total[i], average[i]);
    }

    return 0;
}
