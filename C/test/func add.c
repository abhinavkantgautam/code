#include<stdio.h>
int add(int, int);
int main()
{
   int a,b;
   printf("Enter two no\n");
   scanf("%d%d, &a, &b");


   printf("%d + %d = %d\n", a, b, (a, b));

   return 0;

}

int add(int x, int y)
{
  return(x+y);



}
