#include<stdio.h>
float sum(float a,float b);
float substact(float a,float b);
float multiplay(float a,float b);
float division(float a,float b);

int main()
{
    int choice,
    float res,v1,v2;
    printf("input 2 values\n");
    scanf("%f%f",&v1,&v2);
    printf("please choose what you want to do with your values\n");
    printf("1- Sum\n");
    printf("2- substracttion\n"); 
    printf("3- multiplay\n");
    printf("4- devision\n"); 
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
        res = sum(v1, v2);
        printf("sum of two values = %f\n",res);
        break;

      case 2:
        res = substact(v1, v2);
        printf("substract of two values = %f",res);
        break;

      case 3:
        res = multiplay(v1, v2);
        printf("multiply of two values = %f\n",res);
        break;

      case 4:
        res = devision(v1, v2);
        printf("division of two values = %f\n",res);
        break;
     
      default:
        printf("wrong choice\n");
    }
return 0;
}

float sum(float a,float b)
    {
    float sum=0;
    sum=a+b;
    return sum;
    }
float substact(float a,float b)
    {
    float sub=0;
    sub=a-b;
    return sub;
    }
float multiplay(float a,float b)
    {
    float mult=1;
    mult=a*b;
    return mult;
    }
float division(float a,float b)
    {
    float  div=1;
    div=a/b;
    return div;
    }
