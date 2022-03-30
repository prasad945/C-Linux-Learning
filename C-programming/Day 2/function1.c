#include<stdio.h>

void cateres(void); //declarations of user defined function

int main(){
    printf("\nMain is called");
    cateres(); //calling of user defined function
   return 0;
}


void cateres(void){  //definitions of user defined function

    printf("\ncateres is called");
}




