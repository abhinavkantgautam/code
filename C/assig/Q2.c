
#include <stdio.h>
#include<conio.h>

int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d",& marks);

    if (marks> 75)
    {
        printf("Distinction");
    }
    else if (marks >= 60 && marks <75)
    {
        printf("First");
    }
    else if (marks >= 50 && marks <60)
    {
        printf("Second");
    }
    else if (marks >= 40 && marks <50)
    {
        printf("Third");
    }

    else if (marks >= 40 && marks <30)
    {
        printf("Pass");
    }

    else
    {
        printf("Fail");
    }

    getch();
}

