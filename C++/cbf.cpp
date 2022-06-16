#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"x="<<x<<" y="<<y<<endl;
}

int main()

{
    int a=10, b=20;

    cout<<"a="<<a<<" b="<<b<<endl;

    swap(a, b);

    cout<<"a="<<a<<" b="<<b;

    return 0;
}
