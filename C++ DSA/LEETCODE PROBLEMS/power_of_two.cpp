#include <iostream>
using namespace std;

bool isPowerOfTwo(int n){
    int ans=1;
    for (int i = 0; i <=30; i++)
    {   
        if (ans==n)
        {
            return true;
            // cout<<"true";
        }
        
        ans=ans*2;
    }
    
    return false;
    // cout<<"false";
}
int main()
{
    int n;
    cin>>n;
    cout<<isPowerOfTwo(n)<<endl;
    return 0;
    
}