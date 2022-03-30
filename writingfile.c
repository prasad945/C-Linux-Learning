#include<stdio.h>
int main(){

    FILE *fp;
    char name[100];

    fp=fopen("C:\\Users\\Dell\\Desktop\\imarticus\\DAY_5\\myFile.txt","w+");
    if(!fp)
        printf("File is not created");
    else{
        printf("File is created\n");
        printf("Enter your name\n");
        fflush(stdin);
        gets(name);

        fprintf(fp, "%s\n", name);
    }

    fclose(fp);
    
    return 0;
}


