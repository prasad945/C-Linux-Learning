#include<stdio.h>
#include<malloc.h>

typedef struct Employee{
    int empId;
    char Name[100];
    double basicSalary,hra,da;
}Emp;


int main(){
    Emp *ePtr;
    int records;
    printf("Enter how many records you want to enter\n");
    scanf("%d",&records);

    ePtr=(Emp*)calloc(sizeof(Emp),records);

    printf("Enter records for customers\n");
    for(int i=0;i<records;i++){
        printf("\nEnter empId\n");
        scanf("%d",&(ePtr+i)->empId);
        printf("\nEnter Name\n");
        fflush(stdin);
        gets((ePtr+i)->Name);
        printf("\nEnter Basic Salary\n");
        scanf("%lf",&(ePtr+i)->basicSalary);
        printf("\nEnter HRA\n");
        scanf("%lf",&(ePtr+i)->hra);
        printf("\nEnter DA\n");
        scanf("%lf",&(ePtr+i)->da);
        
        // for(int j=0;j<3;j++){
        //     fflush(stdin);
        //     gets((ePtr+i)->products[j]);
        // }
        // printf("\nEnter customers Number\n");
        // scanf("%ld",&(ePtr+i)->phoneNumber);
    }

    for(int i=0;i<records;i++){
        printf("\nEnter customers are %d %s %lf %lf %lf",(ePtr+i)->empId,(ePtr+i)->Name,(ePtr+i)->basicSalary,(ePtr+i)->hra,(ePtr+i)->da);
        double netSalary = (ePtr+i)->basicSalary+(ePtr+i)->hra+(ePtr+i)->da;
        printf("\n Net Salary is: %lf ",netSalary);
    }


    free(ePtr);
    return 0;
}

