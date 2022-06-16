#include<stdio.h>
int main()
{
  int a, b;
  printf("Enter Two Number:");
  scanf("%d%d",&a,&b);
  if(a>b)
  {
      printf("Maximum Number: %d" ,a);

  }
 else if (b>a)
  {
     printf("Maximum Number: %d" ,b);

  }

    return 0;
}
