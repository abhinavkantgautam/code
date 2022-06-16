#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  char rr[1000];

  printf("Enter characters: ");
  fgets(rr, 1000, stdin);

  n=strlen(rr);
  printf("no of characters is %d",n);
}
