#include<stdio.h>
#include<string.h>
int main()
{
  char vv[]="Hello";
  char rr[]="Bro";
  strcpy(vv,rr);
  printf("your string is %s",vv);
  printf("\n your string is %s",rr);

  return 0;


}
