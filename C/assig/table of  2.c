#include<stdio.h>
int main()

{
  int num, count = 1;

  printf("Enter a Number\n");
  scanf("%d", &num);

  printf("\nMultiplication table for %d is:\n\n", num);

  while(count <= 10)
  {
     printf("%d * %d = %d\n", num, count, (num*count));

     count++;
  }

   return 0;

}
