#include<stdio.h>
void myFun();

int main()
{
    myFun();
    myFun();

    return 0;
}

void myFun()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num<25)
    {
        printf("the number %d is not greater than 25. \n", num);

    }
    else
    {
        printf("the number %d is greater than 25.\n", num);

    }




    printf("\n");

}
