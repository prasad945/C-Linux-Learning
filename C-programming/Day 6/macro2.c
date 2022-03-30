#include<stdio.h>

#define LIMIT 5
#define MY main
// #define LOL int

typedef int LOL;

#define AREA(l,b) (l*b)
#define ELE 1,\
            2,\
            3,\
            4,\
            5
LOL MY(){
    
    int arr[]={ELE};
    
    LOL area;

    area=AREA(10,20);

    for(int i=0;i<5;i++){
        printf("\n%d",arr[i]);
    }

    printf("\nThe value of limit %d",LIMIT);
    printf("\nDate is %d-March-2022",LIMIT);
    printf("\nAREA is %d",area);

    
    return 0;
}
