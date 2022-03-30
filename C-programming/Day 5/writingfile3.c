#include<stdio.h>
int main(){

   FILE *fp;
    char ch;
    fp=fopen("c:\\CFileHandling\\myFile.txt","r");
    while(1){
        ch=fgetc(fp);
        if(ch==EOF) 
        break;
        printf("%c", ch);
    }
    fclose(fp);


    