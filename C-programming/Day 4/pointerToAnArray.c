#include<stdio.h>

int main(){

    int temp=100;
    char ch='a';

    int *ptr=&temp;


    printf("\nADdress of temp variable %u\n",&temp);
    printf("\nADdress of temp variable %u\n",ptr);
    printf("\nADdress of temp variable %d\n",*ptr);

    // printf("Addresses are %u %u",&ch,&temp);
   return 0;
}
