#include<stdio.h>

int main(){
    
    int arr1[3][3],arr2[3][3],i,j,k,multi[3][3];
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


    printf("\nAddition of two matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction of two matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d",arr1[i][j]-arr2[i][j]);
        }
        printf("\n");
    }

   
    printf("\nMultiplication of two matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            multi[i][j]=0;
            for(k=0;k<3;k++){
                multi[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d",multi[i][j]);
        }
        printf("\n");
    }

    return 0; 
}