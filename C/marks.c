
#include <stdio.h>

 int main()
 {
     int a,b,c,d,e,f,z;
     printf("\nEnter 5 Subject marks:");
     scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

      f=a+b+c+d+e;
      printf("\nsum of all subj%d", f);
      z=f/5;

     printf("\nResult in percentage:%d",z);

     getch();
      }


