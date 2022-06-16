
#include <stdio.h>

 int main()
 {
     int a,b,c,d,f;
     printf("welcome to program of add");
     printf("\nEnter value for a:");
     scanf("%d",&a);
     printf("\nEnter value of b:");
     scanf("%d",&b);
     printf("\nEnter value of c:");
     scanf("%d",&c);
     printf("\nEnter value of d:");
     scanf("%d",&d);


       if (c == 0)
       {
        printf("undefine");
       }
       else
       {

           f=(a+b/c)-d;
       }




     printf("\nResult:%d",f);

     getch();
      }


