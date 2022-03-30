void addition(int arr1[][3],int arr2[][3])
{
int i,j;
printf("\nAddition of two matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
}