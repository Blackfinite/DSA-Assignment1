#include<iostream>
using namespace std;
int main()
{
    int a=2,b=3,c;

    cout<<"The value of a: "<<a<<endl;

    cout<<"The value of b: "<<b<<endl;

    c=b;
    b=a;
    a=c;

    cout<<"The value of a after swaping= "<<a<<endl;
    cout<<"The value of b after swaping= "<<b<<endl;

    return 0;

}