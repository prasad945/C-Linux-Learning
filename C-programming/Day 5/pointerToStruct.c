#include<stdio.h>
#include<malloc.h>

typedef struct Customer{
    int custId;
    char custName[100];
    char custAddress[100];
    char products[100][100];
    long int phoneNumber;
}Cust;


int main(){
    Cust *cPtr;
    int records;
    printf("Enter how many records you want to enter\n");
    scanf("%d",&records);

    cPtr=(Cust*)calloc(sizeof(Cust),records);

    printf("Enter records for customers\n");
    for(int i=0;i<records;i++){
        printf("\nEnter custId\n");
        scanf("%d",&(cPtr+i)->custId);
        printf("\nEnter custName\n");
        fflush(stdin);
        gets((cPtr+i)->custName);
        printf("\nEnter custAddres");
        fflush(stdin);
        gets((cPtr+i)->custAddress);
        printf("Enter 3 products\n");
        for(int j=0;j<3;j++){
            fflush(stdin);
            gets((cPtr+i)->products[j]);
        }
        printf("\nEnter customers Number\n");
        scanf("%ld",&(cPtr+i)->phoneNumber);
    }

    for(int i=0;i<records;i++){
        printf("\nEnter customers are %d %s %s %ld",(cPtr+i)->custId,(cPtr+i)->custName,(cPtr+i)->custAddress,(cPtr+i)->phoneNumber);
        for(int j=0;j<3;j++){
            printf("\nProducts %s",(cPtr+i)->products[j]);
        }
    }


    free(cPtr);
    return 0;
}
