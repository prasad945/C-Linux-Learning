#include<stdio.h>

void myfun1();
void myfun2();

#pragma startup myfun1
#pragma exit myfun2

void myfun2(){
    printf("Im in myfun2 function\n");
}


void myfun1(){
    printf("Im in myfun1 function\n");
}

int main(){

    printf("Im inside main function\n");
    return 0;
}

