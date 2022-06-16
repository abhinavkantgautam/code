#include<stdio.h>
void swap(int *p, int *q)
{
  int temp;
  temp=*p;
  *p=*q;
  *q=temp;
  printf("x=%d y=%d\n" ,*p,*q);
}

int main()

{
  int a=10,b=20;
  swap(&a,&b);
  printf("a=%d b=%d" ,a,b);

  return 0;
}
