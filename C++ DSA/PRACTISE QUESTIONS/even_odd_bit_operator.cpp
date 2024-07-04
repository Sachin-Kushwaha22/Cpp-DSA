#include <iostream>
using namespace std;
bool isEven(int n){
    if (n&1) 
    {
        return 0;
    }
    else
    {
        return 1;
    }  
}

int main()
{
    int n;
    cin>>n;

    if (isEven(n))
    {
        cout<<"Even "<<endl;
    }
    else
    {
        cout<<"Odd"<<endl;
    }
    
    
    return 0;
}