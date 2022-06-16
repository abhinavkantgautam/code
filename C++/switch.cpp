#include<iostream>
using namespace std;
int main()
{
  int a;
  cout << "Enter ur choice(1 or 2):";
  cin >> a;
  switch(a)
  {
    case 1:
    {
         cout << "Hello";
         break;
    }
    case 2:
    {
          cout << "World";
          break;
    }
    default :
    {
             cout << "wrong choice";
             break;
    }



  }
     return 0;


}
