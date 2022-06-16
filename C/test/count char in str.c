#include<stdio.h>
int main()

{
  char str1[]="hellow";
  int i=0,count=0;

  while(str1[i]!='\0')
  {
    count++;
    i++;

  }
    printf("Total number of character in string %d", count);
    return 0;

}
