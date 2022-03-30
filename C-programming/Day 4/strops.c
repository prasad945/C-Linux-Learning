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
#include<stdio.h>
#include<string.h>
int main(){ 

    char name[100];
    int length=0;

    printf("\nEnter your name\n");
    fgets(name,sizeof(name),stdin);

    // printf("Length is %d\n",strlen(name));

    for(int i=0;name[i]!='\0';i++){
        length++;
    }
    printf("Length of String is %d\n",length);

    return 0;
}

void strcpyfun(str1,str2){
    if(strcmp(str1,str2)<0)
        printf("\nstr1 < str2 ");
    else if(strcmp(str1,str2)>0)
        printf("\nstr1 > str2 ");
    else
        printf("\nBoth are equal ");
}
void strcmpfun(str1,str2){
    if(strcmp(str1,str2)<0)
        printf("\nstr1 < str2 ");
    else if(strcmp(str1,str2)>0)
        printf("\nstr1 > str2 ");
    else
        printf("\nBoth are equal ");
}