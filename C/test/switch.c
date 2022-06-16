#include<stdio.h>
int main()

{
    int a,b,choice;

    printf("Enter your choice\n");
    printf("1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\n");
    scanf("%d", &choice);

    if(choice >4 )
    {
        printf("select with in the range!\n");
    }
    else
    {
        printf("Enter 2 integer number\n");
        scanf("%d %d", &a,&b);

    }
    switch(choice)
    {
    case 1:
        printf("%d + %d = %d\n", a, b, (a+b));
        break;

    case 2:
        printf("%d - %d = %d\n", a, b, (a-b));
        break;

    case 3:
        printf("%d * %d = %d\n", a, b, (a*b));
        break;

    case 4:
        if(b != 0)
            printf("%d / %d = %d\n", a, b, (a/b));
        else
            printf("Undefine");
        break;

    default:
        printf("you entered wrong choice\n");
        break;
    }


    return 0;

}
