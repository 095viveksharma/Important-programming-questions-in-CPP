Method 1: using if
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    if(a%2==0)
        cout<<"Number is Even";
    else
        cout<<"Number is Odd";
    return 0;
}




Method 2:- Using Turnery Operator
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    (a%2==0)? cout<<"Number is even" : cout<<"Number is odd";
    return 0;
}

