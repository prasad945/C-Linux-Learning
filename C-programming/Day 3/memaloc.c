#include<stdio.h>
#include<malloc.h>

int main(){
    int *arr,elemets,i;

    printf("\nEnter size of an array\n");
    scanf("%d",&elemets);

    arr=(int*)malloc(sizeof(int)*elemets);  //memory allocation for 1D array

    if(arr==NULL){
        printf("\nMemory allocation failure\n");
        exit(0);
    }
    else{
        printf("\nMemory is allocation successful enter the elements\n");
        for(i=0;i<elemets;i++){
            scanf("%d",&arr[i]);
        }   
    }

    printf("\nElements are\n");
    for(i=0;i<elemets;i++){
        printf("  %d",arr[i]);
    }  


    free(arr); //memory deallocation for 1D array

    return 0;


}

