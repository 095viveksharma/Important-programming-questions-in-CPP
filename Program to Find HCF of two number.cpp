#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
  

int main()
{
    int a = 98, b = 56;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
    return 0;
}



Method 2:
#include <stdio.h> 
int main()
 {
   int a, b, i, hcf;
   a = 12;
   b = 16;
for(i = 1; i <= a || i <= b; i++)
 {
   if( a%i == 0 && b%i == 0 )
      hcf = i;
   }
   printf("HCF = %d", hcf);
   return 0;
}
