#include<stdio.h>

void main()
{
    int n,count=0;

    printf("Enter No. ");
    scanf("%d",&n);

    while(n>0)
    {
        n=n/10;
        count++;

    }

    printf("Total %d Digits", count);
    getch();

}
