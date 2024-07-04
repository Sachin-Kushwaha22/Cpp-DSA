#include <iostream>
#include <math.h>
using namespace std;
int main()
{   
    int num;
    cin >> num;

    int n=num;
    int i = 1;
    int ans = 0;
    while (n > 0)
    {
        int digit = n % 2;
        ans = (digit * i) + ans;
        n /= 2;
        i *= 10;
    }
    cout<<ans<<endl;
    
    int m=num;
    int mask=0;
    while (m!=0)
    {
        mask=(mask<<1) | 1;
        m>>=1;
    }
    
    int a=(~num)&mask;
    cout<<a<<endl;

    return 0;
}