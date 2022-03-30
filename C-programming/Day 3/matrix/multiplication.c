 
 void multiplication(int arr1[][3],int arr2[][3])
 {
 int i,j,k,multi[3][3];
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
 }