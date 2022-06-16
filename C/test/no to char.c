#include<stdio.h>

int main()
{
    long int n,sum=0,r;

    printf("Enter Number");
    scanf("%ld",&n);

    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;

    }

    n=sum;
    while(n>=0)
    {
        r=n%10;
        switch(r)
        {
        case 0:
            printf("zero");
            break;
        case 1:
            printf("one");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        default:
            printf("Invalid");
            break;
        }

        n=n/10;
        if (n/10 == 0){
            break;
        }
        printf(" ");

    }

    getch();

}
