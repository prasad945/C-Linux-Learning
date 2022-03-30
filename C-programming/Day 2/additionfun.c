#include<stdio.h>

void addition(int,int);

int main(){
    int val1,val2;
    printf("Enter two values: ");
    scanf("%d%d",&val1,&val2);

    addition(val1,val2);

    return 0;

}

void addition(int num1,int num2){
    printf("Addition is %d",num1+num2);
}

