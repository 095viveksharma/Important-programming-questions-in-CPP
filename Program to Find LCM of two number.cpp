#include<bits/stdc++.h>
using namespace std;

int LCM(int x, int y)
{
    int ch1 = x;
    int ch2 = y;
    while(ch1!=ch2)
    {
        if(ch1<ch2)
        {
            ch1 = ch1 + x;
        }
        else
            ch2 = ch2 + y;
    }
    return ch1;
}


int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"LCM:- "<<LCM(a,b);
    return 0;
}
