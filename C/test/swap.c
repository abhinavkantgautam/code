#include<stdio.h>
int main()
{
 int a,b;
 printf("Enter any Number\n");
 scanf("%d%d" ,&a,&b);

 a=a+b;
 b=a-b;
 a=a-b;
 printf("a=%d b=%d" ,a,b);

 return 0;







}
