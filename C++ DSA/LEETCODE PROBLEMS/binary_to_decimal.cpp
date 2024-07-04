#include <iostream>
#include <math.h>
#include <bitset>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bitset<32> b(n); 
    cout<<"Binary input: "<<b<<"(32 bit-representation)"<<endl;

    int i=0;
    int ans=0;
    while (n!=0)
    {
        int bit=n&1;
        if (bit)
        {
            ans=(bit * pow(2,i))+ans;
        }
        n=n>>1;
        i++;
        
    }
    cout<<"Decimal output : "<<ans<<endl;
    return 0;
}