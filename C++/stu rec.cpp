#include<iostream>

using namespace std;
struct students
{
    char name[20];
    char state[20];
    char post[20];
    char address[20];
    char country[20];
    char district[20];
};

int main()
{
    struct students x;
    cout<<"Enter Name: ";
    cin>>x.name;
    cout<<"Enter state: ";
    cin>>x.state;
    cout<<"Enter post: ";
    cin>>x.post;
    cout<<"Enter address: ";
    cin>>x.address;
    cout<<"Enter country: ";
    cin>>x.country;
    cout<<"Enter district: ";
    cin>>x.district;

    cout<<"Name: "<<x.name<<endl;
    cout<<"state: "<<x.state<<endl;
    cout<<"post: "<<x.post<<endl;;
    cout<<"address: "<<x.address<<endl;;
    cout<<"country: "<<x.country<<endl;;
    cout<<"district: "<<x.district<<endl;;

    return 0;
}
