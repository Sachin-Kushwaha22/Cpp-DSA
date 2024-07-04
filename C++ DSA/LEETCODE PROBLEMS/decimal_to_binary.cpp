#include <iostream>
#include <math.h>
#include <bitset>
using namespace std;
int main()
{
    int n;
    cout<<"Decimal input : ";
    cin >> n;
    
    int ans = 0;
    // while (n>0)
    // {
    //     int rem = n % 2;
    //     ans += rem * i;
    //     n /= 2;
    //     i *= 10;
    // }
    
    while (n>0)
    {
        int digit=n%2;
        ans=ans*10+digit;
        n/=2;
    }
    
    // int i = 0;
    // while (n != 0)
    // {
    //     int bit = n & 1;
        
    //     ans += bit * pow(10,i);

    //     n = n >> 1;
    //     i++;
    // }
    cout << "Binary output : " << ans << endl;
    return 0;
}