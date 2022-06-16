#include<stdio.h>
int main()
{
   int *p,*q,r,a,b;
   printf("Enter two no\n ");
   scanf("%d%d,&a,&b");

   p=&a;
   q=&b;
   r=*p + *q;
   printf("sum of no: %d",r);

   return 0;

}
