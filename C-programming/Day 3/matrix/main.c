#include<stdio.h>
#include "Header.h"

int main(){
    int choice;
    int arr1[3][3],arr2[3][3],i,j;
    printf("\nEnter 9 values for 1st matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
          }
     }

    printf("\nEnter 9 values for 2st matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
                        }
                    }  
    
 printf("1]Addition \n2]Subtraction \n3]Multiplication");
 printf("\nEnter your choice: ");
 scanf("%d",&choice);

    switch(choice){

        case 1:
            addition(arr1,arr2);
            break;
        case 2:
            subtraction(arr1,arr2);
            break;
        case 3:
            multiplication(arr1,arr2);
            break;
            
        default:
            printf("\n Invalid Choice: ");
        }
}


