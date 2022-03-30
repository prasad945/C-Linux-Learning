

#include<stdio.h>
int main(){

    int i;  //build in data type
//    Emp e1; //structure data type 

    enum days{Sunday=1,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};

    for(i=Sunday; i<Saturday; i++){
        printf("\n%d",i);
    }
}