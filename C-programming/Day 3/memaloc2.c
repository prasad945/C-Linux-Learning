#include<stdio.h>
#include<malloc.h>

int main(){

    int *arr,elements,i,ele2;

    printf("\nEnter size of an array\n");
    scanf("%d",&elements);

    arr=(int*)calloc(elements,sizeof(int));

    
    if(arr==NULL){
        printf("\nMemory allocation failure\n");
        exit(0);
                 }
    else{
        printf("\nMemory is allocation successful\n");
        for(i=0;i<elements;i++){
            scanf("%d",&arr[i]);
        }   
        printf("\nvalues are \n");
        for(i=0;i<elements;i++){
            printf(" %d",arr[i]);
        }


        printf("\nEnter the extra size you want to allocated again\n");
        scanf("%d",&ele2);
        arr=realloc(arr,sizeof(int)*ele2);
        printf("\nEnter new values\n");
        for(i=elements;i<ele2+elements;++i){
            scanf("%d",&arr[i]);
        }

        printf("\nAll Values are \n");
        for(i=0;i<elements+ele2;i++){
            printf(" %d",arr[i]);
        }

        free(arr);

        return 0;

    }
}