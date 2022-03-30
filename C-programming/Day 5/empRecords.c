#include<stdio.h>
#include<malloc.h>
int records=0;
static int count=0;
typedef struct Employee{
    int empId;
    char name[100];
    double salary;

}Emp;

Emp* addNewRecord(Emp*);
void displayRecords(Emp*);

void displayRecords(Emp* cPtr){
    for(int i=0; i<count; i++){
        printf("\n %d   %s   %lf",(cPtr+i)->empId,(cPtr+i)->name,(cPtr+i)->salary);
    }
}



Emp* addNewRecord(Emp* cPtr){
    
    if(count<records){
        printf("\nEnter empId,name,salary for %d employee ",count+1);
        scanf("%d",&(cPtr+count)->empId);
        fflush(stdin);
        gets((cPtr+count)->name);
    
        scanf("%lf",&(cPtr+count)->salary);
        count++;
    }
    else{
        printf("You are not allowed to enter new record\n");
    }

    return cPtr;

}
int main(){
    Emp *ePtr;
    int choice;
    char ch;

    printf("Enter how many records you want to enter\n");
    scanf("%d",&records);

    ePtr=(Emp*)calloc(sizeof(ePtr),records);

    do
    {
        printf("\n1] Add record\n2] Update Record\n3]Display Records\nEnter your choice\n\n");
        scanf("%d",&choice);
        switch(choice){

            case 1:
                    ePtr=addNewRecord(ePtr);
                    break;
            case 3:
                    displayRecords(ePtr);
                    break;

        }



        printf("Do you want to continue?\n");
        fflush(stdin);
        scanf("%c",&ch);
    } while (ch=='Y'||ch=='y');
    
}

