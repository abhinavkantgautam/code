#include<stdio.h>
int main()
{
    int num;
    label:
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num<25)
    {
      printf("the number %d is not greater than 25: \n", num);
      goto label;

    }
    else
    {
      printf("the number %d is greater than 25: \n", num);

    }




    printf("\n");
    return 0;
}
