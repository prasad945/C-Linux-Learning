#include<stdio.h>
int main(){

    FILE *fp;
    char name[100];

    fp=fopen("c:\\CFileHandling\\myFile.txt","r");
    if(!fp)
        printf("File is not available");
    else{
       fscanf(fp,"%s",name);
    }

    printf("Value of name %s",name);

    fclose(fp);




    return 0;
}
