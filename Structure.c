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
    struct Employee e1={"Tanish","Mumbai",450000,"23/3/1990",101};

    printf("Employee Details %s  %s   %lf  %s  %d\n",e1.name,e1.address,e1.salary,e1.dob,e1.empId);
    
    return 0;
}

