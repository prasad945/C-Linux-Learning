#include<stdio.h>
#include<string.h>

int main(){

    char str1[]="Abc";
    char str2[]="abc";
    char str3[50];
    int len;

    strcpy(str3,str1);
    printf("\nStrcpy %s",str3);

    len=strlen(str2);
    printf("\nStrlen %d",len);


    if(strcmp(str1,str2)<0)
        printf("\nstr1 < str2 ");
    else if(strcmp(str1,str2)>0)
        printf("\nstr1 > str2 ");
    else
        printf("\nBoth are equal ");

    return 0;
}

