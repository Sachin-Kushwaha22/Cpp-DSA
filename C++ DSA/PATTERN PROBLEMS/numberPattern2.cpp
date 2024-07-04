#include <bits/stdc++.h>
using namespace std;

// creating a funciton to print the pattern of numbers
void numPattern2(int n){
    for (int i = 1; i < n; i++)
    {
        // number
        for (int j = 1; j < i+1; j++)
        {
            cout<<j;
        }

        //space
        for (int j = 1; j < n-i; j++)
        {
            cout<<" ";
        }
        
        //space
        for (int j = 1; j < n-i; j++)
        {
            cout<<" ";
        }
        
        //number
        for (int j = i; j >0; j--)
        {
            cout<<j;
        }
        
        cout<<endl;
    }
    
}
int main()
{
    int n;
    cin>>n;
    numPattern2(n);
    return 0;
}