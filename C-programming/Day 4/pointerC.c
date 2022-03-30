#include<stdio.h>
#include<string.h>

int main(){

    char str1[]="Hello";
    char str2[]="World";
    char str3[50];
    int len;

    strcpy(str3,str1);
    printf("\nStrcpy %s",str3);

    len=strlen(str2);
    printf("\nStrlen %d",len);
    


    // int temp=100;
    // char ch='a';

    // int *ptr=&temp;


    // printf("\nADdress of temp variable %u\n",&temp);
    // printf("\nADdress of temp variable %u\n",ptr);
    // printf("\nvalue of temp %d\n",*ptr);

    // printf("Addresses are %u %u",&ch,&temp);
    return 0;
}