#include<bits/stdc++.h>
using namespace std;

int power(int base, int expo)
{
    int temp;
    if(expo == 0)
        return 1;
    temp = power(base, expo/2);
    if(expo%2 == 0)
        return temp * temp;
    else
        return base * temp * temp;
}

int main()
{
    int bi, dec=0, temp,n=0,base=2;
    cout<<"Enter one binary number: ";
    cin>>bi;
    while(bi)
    {
        temp = bi%10*power(base,n);
        n++;
        dec += temp*10;
        bi=bi/10;
    }
    dec = dec/10;
    cout<<"Decimal number: "<<dec;
    return 0;
}



##  Method 2:
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
 
int main()
{
    int num = 10101001;
 
    cout << binaryToDecimal(num) << endl;
}
