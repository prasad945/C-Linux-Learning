#include <stdio.h>
int main()
{
struct avg{
int sub1, sub2, sub3;
float average;
}avg1;
struct student{
char name[30];
struct avg avg1;
};
struct student stud1;
printf("Enter the Name of the student ");
scanf("%s", stud1.name);
printf("\nEnter the marks of the student ");
scanf("%d %d %d ", &stud1.avg1.sub1, &stud1.avg1.sub2, &stud1.avg1.sub3);
stud1.avg1.average = (stud1.avg1.sub1 + stud1.avg1.sub2 + stud1.avg1.sub3)/3;
printf("\n-------Student Details-------\n ");
printf("%s",stud1.name);
printf("\nsub1 : %d \n sub2 : %d \n sub3 : %d ",stud1.avg1.sub1, stud1.avg1.sub2, stud1.avg1.sub3);
printf("\nAverage : %f %", stud1.avg1.average);
return 0;
}