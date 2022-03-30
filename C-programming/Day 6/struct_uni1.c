#include<stdio.h>
#include<string.h>
struct struct_example{
    int id;
    int number;
    char name[20];
};

union union_example{
    char name[20];
    int id;
    int number;
}u1;

int main(){

    struct struct_example s1={101,12,"Eshan"};
    //  union union_example u1;
     strcpy(u1.name,"Tanish");
  printf("\nUnion data %s",u1.name);
     u1.id=101;
     printf("\nUnion data %d",u1.id);
     u1.number=12;
     printf("\nUnion data %d",u1.number);

    

     printf("\nStructure data %d %d %s",s1.id,s1.number,s1.name);


    return 0;
}
