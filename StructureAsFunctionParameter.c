#include <stdio.h>

//declaraction of structure
struct Employee{
    char name[100];
    char address[100];
    double salary;
    char dob[20];
    int empId;
};
void showEmployeeDetails(struct Employee);

int main(){
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
    
    showEmployeeDetails(e1);
    return 0;
}

void showEmployeeDetails(struct Employee s1){

    printf("Employee Details %s  %s   %lf  %s  %d\n",s1.name,s1.address,s1.salary,s1.dob,s1.empId);
}
