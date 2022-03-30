#include<stdio.h>
int main(){

    int i;  //build in data type
//    Emp e1; //structure data type 

    //enum days{Sunday=1,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
    enum year{Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};

    for(i=Jan;i<=Dec;i++){
        printf("\n%d",i);
    }

    // for(i=Sunday; i<Saturday; i++){
    //     printf("\n%d",i);
    // }




    return 0;
}