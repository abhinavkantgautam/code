
#include <stdio.h>

 int main()
 {
     int a,b,c;
     printf("welcome to program of add");
     printf("\nEnter value for a:");
     scanf("%d",&a);
     printf("\nEnter value of b:");
     scanf("%d",&b);


       if (b == 0)
       {
        printf("undefine");
       }
       else
       {
         c=a/b;
       }


      printf("\nDiv Result:%d",c);

     getch();
      }


