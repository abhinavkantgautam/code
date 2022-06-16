#include<stdio.h>

int main()
{
  int a, c, b;
  printf("Enter Two Number:");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
  {
      printf("Maximum Number: %d" ,a);

  }
 else if (b>a)
  {
     printf("Maximum Number: %d" ,b);

  }
else if (c>a || c>b)
{
    printf("Maximum Number: %d" ,c);

}
   return 0;
}
