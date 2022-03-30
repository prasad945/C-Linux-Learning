#include<stdio.h>
#include<string.h>
struct struct_example{
    int id;
    int number;
    char name[20];
};

union union_example{
    int id;
    int number;
    char name[20];
};

int main(){

    struct struct_example s1={101,12,"Eshan"};
     union union_example u1;
     u1.id=101;
     u1.number=12;
     strcpy(u1.name,"Tanish");
    

     printf("\nStructure data %d %d %s",s1.id,s1.number,s1.name);

     printf("\nUnion data %d %d %s",u1.id,u1.number,u1.name);



    return 0;
}

// union accesses one variable at a time , so we have to initialize one variable at a time
