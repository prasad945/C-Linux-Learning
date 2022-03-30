#include<stdio.h>



int addition(void);

int main(){

    printf("Result is %d",addition());
    return 0;
}

int addition(void){
    int val1,val2;
    printf("Enter two values: ");
    scanf("%d%d",&val1,&val2);

    return (val1+val2);

}