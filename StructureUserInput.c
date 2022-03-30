#include <stdio.h>

int main(){

    //declaraction of structure
    struct Employee{
        char name[100];
        char address[100];
        double salary;
        char dob[20];
        int empId;
    };

    //How to create structure variable
    struct Employee e1;

    printf("Enter name,address,salary,dob,empId for the employee\n");
    gets(e1.name);
    gets(e1.address);
    scanf("%lf",&e1.salary);
    fflush(stdin);
    gets(e1.dob);
    fflush(stdin);
    scanf("%d",&e1.empId);
    
    printf("Employee Details %s  %s   %lf  %s  %d\n",e1.name,e1.address,e1.salary,e1.dob,e1.empId);
    return 0;
}