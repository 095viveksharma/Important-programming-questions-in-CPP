#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, temp,sum =0,n=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num)
    {
        n++;
        sum += num%10;
        num = num/10;
    }
    cout<<"Average is "<<(sum/n);
    return 0;
}
