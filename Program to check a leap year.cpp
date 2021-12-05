#include<bits/stdc++.h>
using namespace std;


bool leapyear(int year)
{
    if(year%4 == 0)
        return true;
    if(year%100 == 0)
        return false;
    if(year%400 == 0)
        return true;
    return false;
}

int main()
{
    int year;
    cout<<"Enter year ";
    cin>>year;
    leapyear(year)? cout<<"Leap year." : cout<<"Not a leap year.";
    return 0;
}
