#include<stdio.h>
int fib(int n)
{
   static int val,j = 0,k = 1;
   printf("\nenter the no of terms: ");
   scanf("%d",&val);
   int i =0;
   while (i < val) 
   {
       j = j+k;
       k = j-k;
       printf("  %d",k);
       i++;
   }
}
 
int main ()
{
  int n;
  fib(n);
  getchar();
  return 0;
}