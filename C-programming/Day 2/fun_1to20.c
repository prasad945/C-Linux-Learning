#include<stdio.h>

void numbers(void); //declarations of user defined function

int main(){
    printf("\nMain is called");
    numbers(); //calling of user defined function
   return 0;
}


void numbers(void){  //definitions of user defined function

    printf("\n numbers is called\n");
    
    for (int i = 1; i<=20; i++) {
         printf("%d\t",i);
        }
}
