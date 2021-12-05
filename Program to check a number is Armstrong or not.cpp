Armstrong number = Armstrong number is a number that is equal to the sum of cubes of its digits. 	  For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0,r,temp,c;
    cout<<"Enter a Number ";
    cin>>n;
    temp = n;
    while(n>0)
    {
        r = n%10;
        c = r*r*r;
        sum = sum + c;
        n = n/10;
    }
    n = temp;
    if(n==sum)
        cout<<"It is a Armstrong number.";
    else
        cout<<"It is not a Armstrong number";
    return 0;
}



Method 2: Armstrong for N numbers
#include<bits/stdc++.h>
using namespace std;

int power(int x, unsigned int y)
{
    if(y==0)
        return 1;
    if(y%2==0)
        return power(x,y/2)*power(x,y/2);
    return x*power(x,y/2)*power(x,y/2);
}

int order(int x)
{
    int n = 0;
    while(x)
    {
        n++;
        x = x/10;
    }
    return n;
}


int Armstrong(int x)
{
    int n = order(x);
    int temp = x, sum = 0;
    while(temp)
    {
        int r = temp%10;
        sum += power(r, n);
        temp = temp/10;
    }
    return(sum);
}

int main()
{
    int x,num;
    cout<<"Enter a number: ";
    cin>>x;
    num= Armstrong(x);
    if(num == x)
        cout<<"This is Armstrong number";
    else
        cout<<"This is not Armstrong number";
    return 0;
}
